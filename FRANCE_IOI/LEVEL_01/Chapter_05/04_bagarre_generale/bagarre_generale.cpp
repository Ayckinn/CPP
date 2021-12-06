/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 05
    EXERCICE  : 04 - BAGARRE GENERALE
 * =================================================== */
 #include <iostream>

int main()
{
   int superficie_arignon(0);
   int superficie_evaran(0);

   std::cin >> superficie_arignon >> superficie_evaran;

   if(superficie_arignon - superficie_evaran > 10)
      std::cout << "La famille Arignon a un champ trop grand" << std::endl;
   else if(superficie_evaran - superficie_arignon > 10)
      std::cout << "La famille Evaran a un champ trop grand" << std::endl;

   return 0;
}