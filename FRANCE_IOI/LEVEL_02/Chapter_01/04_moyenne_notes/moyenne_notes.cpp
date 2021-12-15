/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 02
    CHAPTER   : 01
    EXERCICE  : 04
    TITLE     : MOYENNE DES NOTES
 * =================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
    int grades_obtained(0);
    int grades(0);
    double sum_of_grades(0);

    std::cin >> grades_obtained;

    LOOP(grades_obtained)
    {
        std::cin >> grades;
        sum_of_grades += grades;
    }
    std::cout << (sum_of_grades / grades_obtained) << std::endl;
    return 0;
}