/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 02
       CHAPTER | 02
      EXERCICE | 08
         TITLE | COURSE A TROIS JAMBES
 * ===================================================== */
#include <iostream>
#include <algorithm>  //-- To use the [sort] function

int main()
{
    int players = 0;
    std::cin >> players;

    int choices[players] = {0};  //-- Create empty list
    for(int i = 0; i < players; i++)
        std::cin >> choices[i];  //-- Add each player choice in the list

    std::sort(choices, choices + players);  //-- Sort choice from the smallest to the biggest

    for(int i = 0; i < (players / 2); i++)
        std::cout << choices[i] << " " << choices[players - 1 - i] << std::endl;

    return 0;
}

/**
 * Display index order from the smallest to the biggest (explanations with 10 players for the demo) 
 *                  choices[i] << " " << choices[players - 1 - i]
 *   First loop  =       0             10 - 1 - 0 = 9
 *   Second loop =       1             10 - 1 - 1 = 8
 *   Third loop  =       2             10 - 1 - 2 = 7
 *   Fourth loop =       3             10 - 1 - 3 = 6
 *   Fifth loop  =       4             10 - 1 - 4 = 5 
 * **/