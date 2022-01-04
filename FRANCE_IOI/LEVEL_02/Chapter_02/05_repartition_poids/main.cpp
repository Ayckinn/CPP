/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2022
    LANGUAGE  : C++
    LEVEL     : 02
    CHAPTER   : 02
    EXERCICE  : 05
    TITLE     : REPARTITION DU POIDS
 * =================================================== */
#include <iostream>

int main()
{
    int nb_carts = 0;
    std::cin >> nb_carts;

    //-- Init list with [nb_carts] items -> value to 0
    double weight_difference[nb_carts];
    for(int i = 0; i < nb_carts; i++)
        weight_difference[i] = 0.0;

    //-- Add up all the values
    double weight = 0.0;
    double average = 0.0;
    for(int i = 0; i < nb_carts; i++)
    {
        std::cin >> weight;
        weight_difference[i] = weight;
        average += weight;
    }

    average /= nb_carts;

    for(int i = 0; i < nb_carts; i++)
    {
        weight_difference[i] = average - weight_difference[i];
        std::cout << weight_difference[i] << std::endl;
    }
    return 0;
}