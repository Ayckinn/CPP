/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 04
    EXERCICE  : 07
    TITLE     : LA GRANDE BRADERIE
 * =================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
    int position(0);
    int emplacement(0);
    int vendeurs(0);

    std::cin >> position;
    std::cin >> emplacement;
    std::cin >> vendeurs;

    LOOP(vendeurs + 1)
    {
        std::cout << position << std::endl;
        position = (position + emplacement);
    }
    return 0;
}