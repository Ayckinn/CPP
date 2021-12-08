/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 07
    EXERCICE  : 07 - PERSONNE DISPARUE
 * =================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   int idVIP(0);
   int size_list(0);
   int ids(0);
   bool is_out(false);
   
   std::cin >> idVIP >> size_list;

   LOOP(size_list) 
   { 
      std::cin >> ids;
      
      if(ids == idVIP)
         is_out = true;
   }
   if(is_out)
      std::cout << "Sorti de la ville" << std::endl;
   else
      std::cout << "Encore dans la ville" << std::endl;

   return 0;
}