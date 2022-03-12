/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2021
      LANGUAGE | C++
         LEVEL | 02
       CHAPTER | 01
      EXERCICE | 07
         TITLE | SOIREE ORAGEUSE
 * ===================================================== */
#include <iostream>
#include <cmath>

int main()
{
    float time_light_sound_in_sec = 0;
    float speed_of_sound_in_km = (340.29 / 1000);

    std::cin >> time_light_sound_in_sec;
    float distance_you_storm = (round(time_light_sound_in_sec * speed_of_sound_in_km));

    std::cout << distance_you_storm << std::endl;
    return 0;
}