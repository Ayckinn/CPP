/*
	_AUTHOR 	: Ayckinn
	_COPYRIGHT 	: ©2021
	_LANGUAGE	: C++
	_GAME   	: Jeu du mot mystère
*/

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;


string RandomWord(string word)
{
	string randomWord;
	int position(0);

	/*--- Tant que toutes les lettres du mot n'ont pas été traitées ---*/
	while(word.size() != 0)
	{
		/*--- Choix de la position [index] d'une lettre au hasard ---*/
		position = rand() % word.size();
		/*--- Ajoute de la lettre dans le mot mélangé ---*/
		randomWord += word[position];
		/*-- Suppression de la lettre du mot d'origine pour ne pas la prendre 2 fois --*/
		word.erase(position, 1);
	}
	return randomWord;
}

///////////////////////////////////// PROGRAM START /////////////////////////////////////
int main(int argc, char const *argv[])
{
	system("clear");

  	/*--- Initialisation du random ---*/
  	srand(time(0));

  	string secretWord, userWord, randomWord;

  	cout << "========================================\n";
  	cout << "= \033[1;35mBIENVENUE DANS LE JEU DU MOT MYSTERE\033[1;m =\n";
  	cout << "========================================\n\n";

  	/*-------------------------------------*/
	/*--- Saisie du mot par la joueur 1 ---*/
	/*-------------------------------------*/
  	cout << "Joueur 1, saisis un mot : ";
  	cin >> secretWord;

  	/*----------------------------------------*/
	/*--- L'ordinateur mélange les lettres ---*/
  	/*----------------------------------------*/
  	randomWord = RandomWord(secretWord);

  	/*----------------------------------------------------------------*/
	/*--- Boucle de jeu tant que le joueur 2 n'a pas trouvé le mot ---*/
	/*----------------------------------------------------------------*/
  	do
  	{
  		cout << "\nRéponse Joueur 2 [" << randomWord << "] : ";
  		cin >> userWord;

  		if(userWord == secretWord) { cout << "\033[1;32m\nBONNE REPONSE !\n\n\033[1;m"; }
  		else { cout << "\033[1;31m\nMAUVAISE REPONSE !\n\033[1;m"; }

  	} while(userWord != secretWord);

	return 0;
}
////////////////////////////////////// PROGRAM STOP /////////////////////////////////////

/* TessBarAnn */
