/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 07
    EXERCICE  : 09 - L'ESPION EST DEMASQUE
 * =================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   int nb_people(0);
   int height(0);
   int age(0);
   int weight(0);
   int horse(0);
   int brown(0);

   std::cin >> nb_people;

   LOOP(nb_people)
   {
      int result(0);
      std::cin >> height >> age >> weight >> horse >> brown;


      if((height >= 178) && (height <= 182))
         result++;
      
      if(age >= 34)
         result++;
      
      if(weight < 70)
         result++;
      
      if(horse == 0)
         result++;

      if(brown == 1)
         result++;
      

      switch(result)
      {
         case 5:
            std::cout << "Très probable" << std::endl;
            break;
         case 4:
            std::cout << "Probable" << std::endl;
            break;
         case 3:
            std::cout << "Probable" << std::endl;
            break;
         case 0:
            std::cout << "Impossible" << std::endl;
            break;
         default:
            std::cout << "Peu probable" << std::endl;
            break;
      }
   }
   return 0;
}