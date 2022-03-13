/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2021
      LANGUAGE | C++
         LEVEL | 01
       CHAPTER | 08
      EXERCICE | 02
         TITLE | ADMINISTRATION : COMPTES ANNUELS
 * ===================================================== */
#include <iostream>

int main()
{
   int expenses = 0;
   int result = 0;
   int end_loop = -1;

   while(expenses != end_loop)
   {
      std::cin >> expenses;
      result += expenses;
   }
   std::cout << (result + 1) << std::endl;
   return 0;
}