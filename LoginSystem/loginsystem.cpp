/* ============================== DESCRIPTION ============================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021 - Ayckinn Softwares
    PROGRAM   : Login System
    VERSION   : 2.0

   ================================= USAGE =================================
    To launch the program : Open terminal ->  choose program directory
    and enter this : ./LoginSystem

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
#include "header/fileaccess.hpp"
#include "header/ayckinnmode.hpp"
#include "header/usermode.hpp"
#include "header/guestmode.hpp"

#include "header/debugmode.hpp"
//-- INCLUDES --//
#include "include/logo.cpp"
#include "include/fontcolor.cpp"
#include "include/message.cpp"
#include "include/fileaccess.cpp"
#include "include/ayckinnmode.cpp"
#include "include/usermode.cpp"
#include "include/guestmode.cpp"

#include "include/debugmode.cpp"
/////////////////////////////// OBJECT CREATION ///////////////////////////////
GuestMode guestmode;

//////////////////////////////// START PROGRAM ////////////////////////////////
int main()
{
    guestmode.guestMenu();
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