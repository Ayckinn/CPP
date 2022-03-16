/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 03
       CHAPTER | PRELUDE
      EXERCICE | 05
         TITLE | COURSE DE GRENOUILLES
 * ===================================================== */
#include <iostream>

const int MAX_FROGS = 100;
int frogs_pos[MAX_FROGS + 1];
int nb_turns_first_pos[MAX_FROGS + 1];

int main()
{
   int nb_frogs = 0, nb_turns = 0;
   std::cin >> nb_frogs >> nb_turns;
   
   for(int frg = 1; frg <= nb_frogs; frg++)
   {
      frogs_pos[nb_frogs] = 0;
      nb_turns_first_pos[nb_frogs] = 0;
   }
   int maximum = 0;
   int first_pos_frog = 0;

   for(int turn = 2; turn <= nb_turns; turn++)
   {
      int frog = 0, jump = 0;
      std::cin >> frog >> jump;
      frogs_pos[frog] += jump;

      if(frogs_pos[frog] > maximum)
      {
         nb_turns_first_pos[frog]++;
         maximum = frogs_pos[frog];
         first_pos_frog = frog;
      }
      else if(frogs_pos[frog] == maximum)
         first_pos_frog = 0;

      nb_turns_first_pos[first_pos_frog]++;
   }
   int win_frog = 1, nb_win_turn = 0;

   for(int frg = 1; frg <= nb_frogs; frg++)
   {
      if(nb_win_turn < nb_turns_first_pos[frg])
      {
         nb_win_turn = nb_turns_first_pos[frg];
         win_frog = frg;
      }
   }
   std::cout << win_frog << std::endl;
   return 0;
}
