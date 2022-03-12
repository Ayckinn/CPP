/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
   ------------+----------------------------------------   
     COPYRIGHT | ©2022
   ------------+----------------------------------------
      LANGUAGE | C++
   ------------+----------------------------------------
         LEVEL | 02
   ------------+----------------------------------------
       CHAPTER | 04
   ------------+----------------------------------------
      EXERCICE | 08
   ------------+----------------------------------------
         TITLE | FORMES CREUSES
 * ===================================================== */
#include <iostream>

void drawLine(int repeat, char sign)
{
    for(int i = 0; i < repeat; i++)
        std::cout << sign;
    
    std::cout << std::endl;
    return;
}

void noSign(int nb_spaces, char sign)
{
    if(nb_spaces > 1)
    {
        std::cout << sign;

        for(int s = 2; s < nb_spaces; s++)
            std::cout << " ";
    }
    std::cout << sign << std::endl;
    return;
}

void drawRect(int nb_column, int nb_lines, char sign)
{
    if(nb_column > 1)
    {
        drawLine(nb_lines, sign);

        for(int i = 2; i < nb_column; i++)
            noSign(nb_lines, sign);
    }
    drawLine(nb_lines, sign);
    return;
}

void drawTriangle(int nb_column, char sign)
{
    for(int i = 1; i < nb_column; i++)
        noSign(i, sign);

    drawLine(nb_column, sign);
    return;
}

int main()
{
    int x_lines = 0;
    int sharp_lines = 0;
    int arobase_lines = 0;
    int nb_columns = 0;

    std::cin >> x_lines >> nb_columns >> sharp_lines >> arobase_lines;

    drawLine(x_lines, 'X');
    std::cout << std::endl;
    drawRect(nb_columns, sharp_lines, '#');
    std::cout << std::endl;
    drawTriangle(arobase_lines, '@');
    
    return 0;
}
