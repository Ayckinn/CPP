/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 02
       CHAPTER | 02
      EXERCICE | 09
         TITLE | BANQUET MUNICIPAL
 * ===================================================== */
#include <iostream>

int main()
{
    int nb_pos = 0;
    int nb_changes = 0;

    std::cin >> nb_pos >> nb_changes;

    int pos[nb_pos] = {0};
    for(int id = 0; id < nb_pos; id++)
        std::cin >> pos[id];

    int pos1 = 0;
    int pos2 = 0;
    int invert_pos = 0;

    for(int i = 0; i < nb_changes; i++)
    {
        std::cin >> pos1 >> pos2;

        invert_pos = pos[pos1];
        pos[pos1] = pos[pos2];
        pos[pos2] = invert_pos;
    }

    for(int id = 0; id < nb_pos; id++)
        std::cout << pos[id] << std::endl;

    return 0;
}
