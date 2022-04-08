/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 03
       CHAPTER | 03
      EXERCICE | 06
         TITLE | VALIDITE DES NOMS DE VARIABLES
 * ===================================================== */
#include <iostream>
#include <string>
#include <cctype>


bool isCorrectName(std::string varname)
{
   //-- Check the first char
   if(!(varname[0] == '_' || isalpha(varname[0])))
      return false;

   //-- Check the remaining chars from index 1 to the end
   for(unsigned int c = 1; c < varname.size(); c++)
   {
      if(!(isdigit(varname[c]) || isalpha(varname[c]) || varname[c] == '_'))
         return false;
   }
   return true;
}
//=========================================================
int main()
{
   std::ios::sync_with_stdio(false);  //-- Run the program faster

   int nb_names = 0;
   std::cin >> nb_names;
   std::cin.ignore();

   for(int nm = 0; nm < nb_names; nm++)
   {
      std::string var_name;
      std::cin >> var_name;

      if(isCorrectName(var_name))
         std::cout << "YES\n";
      else
         std::cout << "NO\n";
   }
   return 0;
}

/**
 * [isdigit] = Check if it's number
 * [isalpha] = Check if it's character
 * [isupper] = Check if it's uppercase
 * [islower] = Check if it's lowercase
**/