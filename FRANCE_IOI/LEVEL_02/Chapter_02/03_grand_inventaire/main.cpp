/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2022
    LANGUAGE  : C++
    LEVEL     : 02
    CHAPTER   : 02
    EXERCICE  : 03
    TITLE     : GRAND INVENTAIRE
 * =================================================== */
#include <iostream>

int main()
{
    int component_quantity[10];
    for(int i = 0; i < 10; i++)
        component_quantity[i] = 0;

    int nb_moves = 0;
    std::cin >> nb_moves;

    for (int i = 0; i < nb_moves; i++)
    {
        int component_ID = 0;
        int quantity = 0;
        std::cin >> component_ID >> quantity;

        if(quantity < 0)
        {
            quantity = -quantity;
            component_quantity[component_ID - 1] -= quantity;
        }
        else
            component_quantity[component_ID - 1] += quantity;
    }

    for(int i = 0; i < 10; i++)
        std::cout << component_quantity[i] << std::endl;

    return 0;
}

/**
 * [component_ID - 1] permet de faire partir l'index de la liste a 1 au lieu de 0
 * Le 1er index sera toujours de 0 mais l'utilisateur entrera 1 pour lire le 1er élément
 * (1 - 1) = 0 // (3 - 1) = 2 // etc..
**/