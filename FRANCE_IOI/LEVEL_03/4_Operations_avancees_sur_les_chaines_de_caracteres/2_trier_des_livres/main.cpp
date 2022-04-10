/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 03
       CHAPTER | 04
      EXERCICE | 02
         TITLE | TRIER DES LIVRES
 * ===================================================== */
#include <iostream>
#include <string>
#include <algorithm>

int main()
{
   std::ios::sync_with_stdio(false);  //-- Run the program faster

   int nb_books = 0;
   std::cin >> nb_books;
   std::cin.ignore();

   std::string title[nb_books];
   for(int book = 0; book < nb_books; book++)
      getline(std::cin, title[book]);
   
   std::sort(title, title + nb_books);

   for(int book = 0; book < nb_books; book++)
      std::cout << title[book] << "\n";

   return 0;
}


/*
Un enfant un peu turbulent a complètement renversé une étagère pleine de livres ! 
Tous les livres sont désormais à terre, en vrac, et c’est à vous de tout remettre 
sur l’étagère dans le bon ordre.
À vous donc de trier ces livres par ordre alphabétique.


Entrée
La première ligne contient un entier nbLivres, le nombre de livres.
Les nbLivres lignes suivantes contiennent chacune un titre de livre.
Les titres ne contiennent que des lettres majuscules ou des espaces.

Sortie
L’ensemble des titres de livres, un titre par ligne, triés selon l’ordre alphabétique.


entrée :
7
LE ROUGE ET LE NOIR
DES SOURIS ET DES HOMMES
GUERRE ET PAIX
LE PARFUM
ALICE AU PAYS DES MERVEILLES
NOTRE DAME DE PARIS
LE VIEIL HOMME ET LA MER


sortie :
ALICE AU PAYS DES MERVEILLES
DES SOURIS ET DES HOMMES
GUERRE ET PAIX
LE PARFUM
LE ROUGE ET LE NOIR
LE VIEIL HOMME ET LA MER
NOTRE DAME DE PARIS
*/