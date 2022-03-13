/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2021
      LANGUAGE | C++
         LEVEL | 01
       CHAPTER | 04
      EXERCICE | 07
         TITLE | LA GRANDE BRADERIE
 * ===================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
    int position = 0;
    int location = 0;
    int sellers = 0;

    std::cin >> position;
    std::cin >> location;
    std::cin >> sellers;

    LOOP(sellers + 1)
    {
        std::cout << position << std::endl;
        position = (position + location);
    }
    return 0;
}