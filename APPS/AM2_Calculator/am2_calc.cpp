/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
          MAIL | marlene.soft@protonmail.com
      LANGUAGE | C++
       PROJECT | AM2 Calculator
       VERSION | 1.0
 * ===================================================== */
#include <iostream>
#include <string>
#include <cmath>

//-- FONTS COLOR
std::string RED     = "\033[1;31m";
std::string GREEN   = "\033[1;32m";
std::string YELLOW  = "\033[1;33m";
std::string BLUE    = "\033[1;34m";
std::string MAGENTA = "\033[1;35m";
std::string NOCOLOR = "\033[1;m";
std::string ayckinn = GREEN + " @Ayckinn" + BLUE;
std::string copyr   = MAGENTA + " (c)2022 - Marlene Softwares" + BLUE;
std::string mail    = RED + " marlene.soft@protonmail.com";

const int H24 = 24;
const int FLIGHT_CYCLE = 2;

int eco_pax = 0, business_pax = 0, first_pax = 0;
double flight_time = 0;


void Logo()
{
	std::system("clear");

	std::cout << BLUE + "\n\n\
                __  __ ___     _____      _            _       _                    \n\
          /\\   |  \\/  |__ \\   / ____|    | |          | |     | |                \n\
         /  \\  | \\  / |  ) | | |     __ _| | ___ _   _| | __ _| |_ ___  _ __      \n\
        / /\\ \\ | |\\/| | / /  | |    / _` | |/ __| | | | |/ _` | __/ _ \\| '__|   \n\
       / ____ \\| |  | |/ /_  | |___| (_| | | (__| |_| | | (_| | || (_) | |         \n\
      /_/    \\_\\_|  |_|____( )\\_____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___/|_|"\
       << YELLOW << " v1.0\n      " << copyr << " |" << ayckinn << " |" << mail << NOCOLOR;
	
	return;
}
//-----------------------------------------------------------------------------
double nbFlightsByDay(double f_time)
{
	return floor((H24 / f_time) * FLIGHT_CYCLE);  //-- Lower rounding
}
//-----------------------------------------------------------------------------
int flightPax(int fpax, double f_time)
{
	return (fpax / nbFlightsByDay(f_time));
}
//-----------------------------------------------------------------------------
int nbFlightsByDayPAX(int epax, int bpax, int fpax, int f_time)
{
	return (flightPax(epax, f_time)\
		  + flightPax(bpax, f_time)\
		  + flightPax(fpax, f_time));
}
//-----------------------------------------------------------------------------
void displayNbRoundTrip()
{
	std::cout << "\t\tTemps de vol (en heures) : " + YELLOW;
	std::cin >> flight_time;
	
	std::cout << NOCOLOR << "\t\tAllers/Retours par jour  : " << YELLOW <<\
	 			 (nbFlightsByDay(flight_time) / 2) << NOCOLOR << "\n";

	std::cout << NOCOLOR << "\t\tNombre de vols par jour  : " << YELLOW <<\
				 nbFlightsByDay(flight_time) << NOCOLOR << "\n\n";

	return;
}
//-----------------------------------------------------------------------------
void nbPAX(std::string category)
{
	std::cout << "\t\tNombre de passagers en " << category << " : " << MAGENTA;
	return;
}
//-----------------------------------------------------------------------------
void nbPlaces(int pax, int f_time)
{
	std::cout << NOCOLOR << "\t\tNombre de places par vol : " << GREEN << \
		flightPax(pax, f_time) << NOCOLOR << "\n\n";

	return;
}
//=============================================================================
int main()
{
	std::ios::sync_with_stdio(false);  //-- Run the program faster
	
	Logo();
	std::cout << "\n\n\n";
	displayNbRoundTrip();

	nbPAX("Eco");
	std::cin >> eco_pax;
	nbPlaces(eco_pax, flight_time);

	nbPAX("Business");
	std::cin >> business_pax;
	nbPlaces(business_pax, flight_time);

	nbPAX("Premiere");
	std::cin >> first_pax;
	nbPlaces(first_pax, flight_time);

	std::cout << "\t\tNombre de passagers par vol : " << BLUE <<\
         nbFlightsByDayPAX(eco_pax, business_pax, first_pax, flight_time) << NOCOLOR << "\n\n";	

	return 0;
}
