/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 03
       CHAPTER | PRELUDE
      EXERCICE | 02
         TITLE | FLECHETTES
 * ===================================================== */
#include <iostream>
#include <algorithm>

char alphabet(int line, int column, char size)
{
   line = std::min(line, size - 1 - line);
   column = std::min(column, size - 1 - column);

   return ('a' + std::min(line, column));
}
//=========================================================
int main()
{
   int nb_letters = 0;
   std::cin >> nb_letters;

   int size = (2 * nb_letters - 1);

   for(int lin = 0; lin < size; lin++)
   {
      for(int col = 0; col < size; col++)
         std::cout << alphabet(lin, col, size);

      std::cout << std::endl;
   }
   return 0;
}


/*
#include <iostream>
#include <algorithm>
using namespace std;
 
char trouveLettre(int iLig, int iCol, int taille)
{
   iLig = min(iLig, taille-1-iLig);
   iCol = min(iCol, taille-1-iCol);
   return 'a' + min(iLig, iCol);
} 
int main()
{
   int nbLettres;
   cin >> nbLettres;
   int taille = 2 * nbLettres - 1;
   for(int iLig = 0; iLig < taille; iLig++)
   {
      for(int iCol = 0; iCol < taille; iCol++)
         cout << trouveLettre(iLig, iCol, taille);
      cout << endl;
   }
   return 0;
}
*/

/*
#include <iostream>
#include <algorithm>
using namespace std;
  
char lettres[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  
// Variante possible pour declarer la variable 'lettres' :
char lettres[27] = "abcdefghijklmnopqrstuvwxyz";

char trouveLettre(int iLig, int iCol, int taille)
{
   iLig = min(iLig, taille-1-iLig);
   iCol = min(iCol, taille-1-iCol);
   return lettres[ min(iLig, iCol) ];
} 
 
int main()
{
   int nbLettres;
   cin >> nbLettres;
   int taille = 2 * nbLettres - 1;
   for(int iLig = 0; iLig < taille; iLig++)
   {
      for(int iCol = 0; iCol < taille; iCol++)
         cout << trouveLettre(iLig, iCol, taille);
      cout << endl;
   }
   return 0;
}
*/