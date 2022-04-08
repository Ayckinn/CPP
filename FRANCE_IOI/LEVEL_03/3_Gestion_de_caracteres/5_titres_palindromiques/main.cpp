/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 03
       CHAPTER | 03
      EXERCICE | 05
         TITLE | TITRES PALINDROMIQUES
 * ===================================================== */
#include <iostream>
#include <string>
#include <cctype>

int main()
{
   std::ios::sync_with_stdio(false);  //-- Run the program faster

   int nb_books = 0;
   std::cin >> nb_books;
   std::cin.ignore();

   for(int book = 0; book < nb_books; book++)
   {
      std::string title;
      getline(std::cin, title);

      int start_char = 0;
      int end_char = (title.length() - 1);
      bool is_palindrome = true;

      while(is_palindrome && (start_char < end_char))
      {
         if(title[start_char] == ' ')
            start_char++;
         
         else if(title[end_char] == ' ')
            end_char--;

         else
         {
            char up_start_char = toupper(title[start_char]);
            char up_end_char = toupper(title[end_char]);
            
            is_palindrome = (up_start_char == up_end_char);
            
            start_char++;
            end_char--;
         }
      }
      if(is_palindrome)
         std::cout << title << "\n";
   }
   return 0;
}
