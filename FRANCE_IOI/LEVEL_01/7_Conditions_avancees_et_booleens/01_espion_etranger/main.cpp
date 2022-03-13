/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2021
      LANGUAGE | C++
         LEVEL | 01
       CHAPTER | 07
      EXERCICE | 01
         TITLE | ESPION ETRANGER
 * ===================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   int start_date = 0;
   int end_date = 0;
   int entries = 0;
   int interval_date = 0;
   int spy = 0;

   std::cin >> start_date >> end_date >> entries;

   LOOP(entries)
   {
      std::cin >> interval_date;

      if((interval_date <= end_date) && (interval_date >= start_date))
         spy++;
   }
   std::cout << spy << std::endl;
   return 0;
}