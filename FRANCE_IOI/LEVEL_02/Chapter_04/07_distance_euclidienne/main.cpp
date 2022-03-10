/* ==================== DESCRIPTION ==================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2022
    LANGUAGE  : C++
    LEVEL     : 02
    CHAPTER   : 04
    EXERCICE  : 07
    TITLE     : DISTANCE EUCLIDIENNE
 * ===================================================== */
#include <iostream>
#include <cmath>
#include <iomanip>

double coords(double x1, double y1, double x2, double y2)
{
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

int main()
{
    double px1, py1, px2, py2;
    std::cin >> px1 >> py1 >> px2 >> py2;
   
    double distance = coords(px1, py1, px2, py2);
    //-- Fixed 6 digits after the decimal
    std::cout << std::fixed << std::setprecision(6) << distance << std::endl;

    return 0;
}

//    EUCLIDEAN FORMULA
//    _________________
//   √(x2−x1)2+(y2−y1)2