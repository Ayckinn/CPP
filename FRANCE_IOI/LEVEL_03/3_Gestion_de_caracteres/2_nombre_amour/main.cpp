/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 03
       CHAPTER | 03
      EXERCICE | 02
         TITLE | NOMBRE D'AMOUR
 * ===================================================== */
#include <iostream>
#include <string>

int main()
{
   std::ios::sync_with_stdio(false);  //-- Run the program faster

   for(int child = 0; child < 2; child++)
   {
      std::string name;
      std::cin >> name;

      int love_number = 0;
      for(unsigned int i = 0; i < name.length(); i++)
         love_number += (name[i] - 65);  //-- On ASCII table, the 'A' starts at 65

      while(love_number >= 10)
      {
         int num = 0;
         while(love_number > 0)
         {
            num += love_number % 10;
            love_number /= 10;
         }
         love_number = num;
      }
      std::cout << love_number << " ";
   }
	return 0;
}
