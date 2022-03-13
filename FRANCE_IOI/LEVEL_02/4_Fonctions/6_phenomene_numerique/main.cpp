/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 02
       CHAPTER | 04
      EXERCICE | 06
         TITLE | PHENOMENE NUMERIQUE
 * ===================================================== */
#include <iostream>

int term(int number)
{
    if((number % 2) == 0)
        return (number / 2);
    else
        return (number * 3 + 1);
}
//=========================================================
int main()
{
    int term_nb = 0;
    std::cin >> term_nb;

    while(term_nb != 1)
    {
        term_nb = term(term_nb);
        std::cout << term_nb << " ";
    }
    std::cout << std::endl;
    return 0;
}
