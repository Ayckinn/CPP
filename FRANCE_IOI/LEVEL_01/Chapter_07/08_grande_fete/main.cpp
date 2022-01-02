/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 07
    EXERCICE  : 08
    TITLE     : LA GRANDE FETE
 * =================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   int start_date = 0;
   int end_date = 0;
   int suspects = 0;
   int guests = 0;
   int start_guests = 0;
   int end_guests = 0;

   std::cin >> start_date >> end_date >> guests;

   LOOP(guests)
   {
      std::cin >> start_guests >> end_guests;
      
      if(end_guests >= start_date && start_guests <= end_date)
         suspects++;
   }
   std::cout << suspects;
   return 0;
}