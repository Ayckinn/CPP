/* ==================== DESCRIPTION ==================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2022
    LANGUAGE  : C++
    LEVEL     : 02
    CHAPTER   : 03
    EXERCICE  : 09
    TITLE     : ECRITURE EN MIROIR
 * ===================================================== */
#include <iostream>
#include <string>

int main()
{
    int nb_lines = 0;
    std::cin >> nb_lines;
    std::cin.ignore();

    for(int line = 0; line < nb_lines; line++)
    {
        std::string text;
        getline(std::cin, text);
        
        //-- Display letters from text from the end to the beginning
        for(int letter = text.length() - 1; letter >= 0; letter--)
        {
            std::cout << text[letter];
        }
        std::cout << std::endl;
    }
    return 0;
}

/*
Contraintes
Chaque ligne de texte contient moins de 1000 caractères.

Entrée
Sur la première ligne, un entier nbLignes, le nombre de lignes du texte.
Les nbLignes suivantes contiennent chacune une ligne de texte qu’il faut inverser.

Sortie
Pour chaque ligne du texte original, vous devez l’afficher de manière inversée.



entrée :
2
tniop a ritrap tuaf li riruoc ed tres en neiR
egangiomet nu tnos ne eutroT al te erveiL eL


sortie :
Rien ne sert de courir il faut partir a point
Le Lievre et la Tortue en sont un temoignage
*/