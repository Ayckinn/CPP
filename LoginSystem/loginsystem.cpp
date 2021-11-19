/* ============================== DESCRIPTION ============================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021 - Ayckinn Softwares
    PROGRAM   : Login System
    VERSION   : 2.0

   ================================= USAGE =================================
    To launch the program : Open terminal ->  choose program directory
    and enter this : ./LoginSystem

   ============================== TODO FOR V3.0 ============================
    07.10.2021 -> 01. Hide password with '*'
    01.11.2021 -> 02. Remove folder name & file extention when accounts are displaying
    10.11.2021 -> 03. Add ID number for user
    12.11.2021 -> 04. 3 attempts for log to ayckinn, otherwise, user is banned
    19.11.2021 -> 05. Sort users in [NUMBER OF USERS] alphabetically

   ================================= FIXIT =================================
    31.10.2021 -> Bug après suppression d'un compte, ne rafraichit pas la liste. 
                  Il est possible de supprimer un compte déjà supprimé.

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