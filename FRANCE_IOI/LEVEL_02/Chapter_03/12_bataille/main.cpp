/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 02
       CHAPTER | 03
      EXERCICE | 12
         TITLE | LA BATAILLE
 * ===================================================== */
#include <iostream>
#include <string>

int main()
{
    std::string player1, player2;
    std::cin >> player1 >> player2;

    int p1_len = player1.length();
    int p2_len = player2.length();
    int turn = 0;

    while(turn < p1_len && turn < p2_len && player1[turn] == player2[turn])
        turn++;

    if(turn == p1_len && turn == p2_len)
        std::cout << "=" << std::endl;

    else if(turn == p2_len || (turn < p1_len && player1[turn] < player2[turn]))
        std::cout << "1" << std::endl;

    else
        std::cout << "2" << std::endl;

    std::cout << turn << std::endl;

    return 0;
}
