/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 03
    EXERCICE  : 13 - TABLE DE MULTIPLICATION
 * =================================================== */
#include <iostream>

#define loop(repeat) for(int i = 0; i < repeat; i++)

int main()
{
    int number(1);
    int multiply(1);
    int result(1);

    loop(20)
    {
        loop(20)
        {
            std::cout << result << " ";
            number++;
            result = (number * multiply);
        }
        std::cout << std::endl;
        number = 1;
        result = (number * multiply++);
    }
    return 0;
}