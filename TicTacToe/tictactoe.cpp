/* ============================== DESCRIPTION ============================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021 - Ayckinn Softwares
    PROGRAM   : Tic Tac Toe
    VERSION   : 1.0

   ================================= USAGE =================================
    To launch the program : Open terminal -> choose program directory
    and enter this : ./tictactoe

   ============================== TODO FOR V2.0 ============================
    21.11.2021 -> 01. One color for each sign
    21.11.2021 -> 02. Don't allow letters in [Game Algorithm] module @ player choice

   ================================= FIXIT =================================
 * ========================================================================= */
////////////////////////////////// LIBRARIES //////////////////////////////////
//-- STANDARD --//
#include <iostream>
#include <string>
#include <unistd.h>   //-- For sleep mode
#include <filesystem> //-- To handling files
#include <fstream>    //-- Read & Write files
//-- HEADERS --//
#include "header/logo.hpp"
#include "header/fontcolor.hpp"
#include "header/message.hpp"
#include "header/board.hpp"
#include "header/game_algorithm.hpp"
//-- INCLUDES --//
#include "include/logo.cpp"
#include "include/fontcolor.cpp"
#include "include/message.cpp"
#include "include/board.cpp"
#include "include/game_algorithm.cpp"

/////////////////////////////// OBJECT CREATION ///////////////////////////////
GameAlgorithm algo;

//////////////////////////////// START PROGRAM ////////////////////////////////
int main()
{
    algo.gameLoop();
    return 0;
}
///////////////////////////////// STOP PROGRAM ////////////////////////////////
/*
Si c'est difficile a expliquer, c'est que c'est une mauvaise idee !
-------------------------------------------------------------------------------
Ne prenez pas la vie trop au serieux... De toutes facons, vous n'en sortirez pas vivants !
-------------------------------------------------------------------------------
La théorie, c'est quand on sait tout mais que rien ne fonctionne...
La pratique, c'est quand tout fonctionne mais que personne ne sait pourquoi...
Dans ce cas, nous avons réuni la théorie et la pratique :
Rien ne fonctionne et personne ne sait pourquoi.
[ALBERT EINSTEIN]
*/