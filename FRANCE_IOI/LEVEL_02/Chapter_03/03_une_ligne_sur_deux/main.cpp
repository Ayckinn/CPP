/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 02
       CHAPTER | 03
      EXERCICE | 03
         TITLE | UNE LIGNE SUR DEUX
 * ===================================================== */
#include <iostream>
#include <string>

int main()
{
    int lines = 0;
    std::cin >> lines;
    std::cin.ignore();

    std::string text[lines] = {};
    std::string text_line;

    for(int i = 0; i < lines; i++)
    {
        getline(std::cin, text_line);
        text[i] = text_line;
    }

    for(int x = 0; x < lines; x += 2)
        std::cout << text[x] << std::endl;

    return 0;
}


/*
OTHER METHOD
------------
    
int main()
{
   int lines;
   std::string text;

   std::cin >> lines;
   std::cin.ignore();

   for(int i = 1; i <= lines; i++)
   {
      getline(std::cin, text);

      if(i % 2 == 1)  //-- Modulo result = 0 = EVEN :: 1 = ODD
         std::cout << text << std::endl;
   }

   return 0;
}
*/