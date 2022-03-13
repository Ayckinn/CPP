/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 02
       CHAPTER | 03
      EXERCICE | 07
         TITLE | ANALYSE DE FREQUENCE
 * ===================================================== */
#include <iostream>
#include <string>

int main()
{
    int nb_lines = 0;
    int nb_words = 0;
    std::cin >> nb_lines >> nb_words;

    int char_max[101] = {0};
    std::string words;
    
    for(int line = 0; line < nb_lines; line++)
    {
        for(int word = 0; word < nb_words; word++)
        {
            std::cin >> words;
            char_max[words.length()]++;
        }
    }

    for(int i = 1; i <= 100; i++)
    {
        if(char_max[i] > 0)
            std::cout << i << " : " << char_max[i] << std::endl;
    }
    
    return 0;
}
