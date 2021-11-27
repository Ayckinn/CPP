/* ============================== DESCRIPTION ============================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021 - Ayckinn Softwares
    PROGRAM   : 21 sticks
    VERSION   : 1.0

   ================================= USAGE =================================
    To launch the program : Open terminal -> choose program directory
    and enter this : ./21sticks

   ============================== TODO FOR V2.0 ============================
    - Add 2 humans players mode

   ================================= FIXIT =================================
 * ========================================================================= */
/**
 * FONT COLOR CODE :
 *  - 0;xxm = REGULAR
 *  - 1;xxm = BOLD

 *  - 31 = RED
 *  - 32 = GREEN
 *  - 33 = YELLOW
 *  - 34 = BLUE
 *  - 35 = MAGENTA
 *  - 36 = CYAN
 *  - 37 = WHITE
 *  - 38 = GREY
**/
////////////////////////////////// LIBRARIES //////////////////////////////////
//-- STANDARD --//
#include <iostream>
#include <string>
#include <stdlib.h>
#include <unistd.h>   //-- For sleep mode
#include <time.h>

//////////////////////////////////// DEFINE ///////////////////////////////////
#define LOOP(repeat) for (int i = 1; i <= repeat; ++i)

////////////////////////////////// VARIABLES //////////////////////////////////
const int IA = 1;
const int HUMAN = 2;

int current_player = IA;  //-- By default, the user who starts the game first is IA
int sticks = 21;
bool game_over = false;

/////////////////////////////////// METHODS ///////////////////////////////////
void logoBeta()
{
    std::cout << "\033[1;38m\t\t-------------------------------------------------\033[1;m\n";
    std::cout << "\033[0;31m\t\t   21 sticks - V1.0 Beta version in progress...\033[0;m\n";
    std::cout << "\033[1;38m\t\t-------------------------------------------------\033[1;m";

    return;
}
/*---------------------------------------------------------------------------*/
void logoTitle()
{
    std::cout << "\n\t\033[1;38m            =========================================\n\t            =\033[1;m";
    std::cout << "\033[1;33m            21 sticks - v1.0\033[1;m";
    std::cout << "\033[1;38m           =\n\t            =\033[1;m";
    std::cout << "\033[1;34m        LINUX VERSION - @Ayckinn\033[1;m";
    std::cout << "\033[1;38m       =\n\t            =\033[1;m";
    std::cout << "\033[0;37m  http://github.com/ayckinn/21-sticks \033[0;m";
    std::cout << "\033[1;38m =\n\t            =========================================\n\033[1;m";

    return;
}
/*---------------------------------------------------------------------------*/
void rulesOfGame()
{
    std::cout << "\033[1;34m\n\t* ============================================================= *\n\t*\033[1;m";
    std::cout << "\033[1;36m RULES OF THE GAME :                                           \033[1;m";
    std::cout << "\033[1;34m*\n\t*\033[0;33m 01. There are 21 sticks on the board.                         \033[0;m";
    std::cout << "\033[1;34m*\n\t*\033[0;33m 02. Each player can take 1, 2 or 3 sticks.                    \033[0;m";
    std::cout << "\033[1;34m*\n\t*\033[0;33m 03. The player who takes the last stick wins.                 \033[0;m";
    std::cout << "\033[1;34m*\n\t*\033[0;33m 04. DON'T exceed the number of sticks available on the board. \033[0;m";
    std::cout << "\033[1;34m*\n\t* ============================================================= *\n\t\033[1;m";

    return;
}
/*---------------------------------------------------------------------------*/
void displayBoard()
{
    std::cout << std::endl << "\n";

    LOOP(21)
    {
        if(i > sticks)
            std::cout << "\033[1;35m  | \033[1;m";
        else
            std::cout << "\033[0;32m" << i << "\033[1;35m | \033[1;m";
    }
    std::cout << std::endl;

    return;
}
/*---------------------------------------------------------------------------*/
void gameInterface()
{
    system("clear");
    
    //logoBeta();
    logoTitle();
    rulesOfGame();
    
    return;
}
/*---------------------------------------------------------------------------*/
void checkGameStatus()
{
    if(sticks == 0)
    {
        game_over = true;

        gameInterface();
        displayBoard();

        if(current_player == IA)
            std::cout << "\n\n\t\033[1;32m YOU WIN !!\033[1;m\n\n" << std::endl;
        else
            std::cout << "\n\n\t\033[1;33m IA WINS !!\033[1;m\n\n" << std::endl;
    }
    return;
}
/*---------------------------------------------------------------------------*/
void letsPlay()
{
    gameInterface();

    std::cout << "\n\tDo you want to start the game first (y/n) ? ";
    char user_choice = 'n';
    std::cin >> user_choice;

    if(user_choice != 'y' && user_choice != 'Y' && user_choice != 'n' && user_choice != 'N')
    {
        std::cout << "\n\t\033[1;31mWRONG CHOICE ! Please choose \"y\" or \"n\".\033[0;m\n";
        sleep(3);
        letsPlay();
    }

    else if(user_choice == 'y' || user_choice == 'Y')
        current_player = HUMAN;

    while(!game_over)
    {
    run:
        gameInterface();
        displayBoard();

        switch(current_player)
        {
            case HUMAN:
            {
                int sticks_to_remove = 0;

                std::cout << "\n\tHow many sticks do you want to remove : ";
                std::cin >> sticks_to_remove;

                if(sticks_to_remove > 3 || sticks_to_remove < 1)
                {
                    std::cout << "\n\t\033[0;31m WRONG CHOICE ! You can only takes 1, 2 or 3 sticks !\033[0;m\n";
                    sleep(3);
                    goto run;
                }
                sticks -= sticks_to_remove;
                
                std::cout << "\n\t\033[0;34mYou choose " << sticks_to_remove << " stick(s)...\n\033[0;m";
                sleep(2);

                current_player = IA;
            }
            break;

            case IA:
            {       
                int sticks_to_remove = (sticks % 4);

                if(sticks_to_remove == 0)
                {
                    srand(time(NULL));
                    sticks_to_remove = ((rand() % 3) + 1);
                }
                sticks -= sticks_to_remove;

                std::cout << "\n\n\n\t\033[0;34mIA choose " << sticks_to_remove << " sticks...\n\033[0;m";
                sleep(2);

                current_player = HUMAN;
            }
            break;
        }
        checkGameStatus();
    }
    return;
}
/*---------------------------------------------------------------------------*/
void quitApp()
{
    std::cout << "\n\n\t\033[1;32m  Exit game... See you soon ^^\033[0;m\n";
    sleep(3);

    system("clear");
    exit(0);

    return;
}
//////////////////////////////// START PROGRAM ////////////////////////////////
int main()
{
    letsPlay();
    //quitApp();

    return 0;
}
///////////////////////////////// STOP PROGRAM ////////////////////////////////
//-- If it's hard to explain, it's a bad idea !