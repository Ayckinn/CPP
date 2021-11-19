/////////////////////////////// OBJECT CREATION ///////////////////////////////
Logo::Logo() {}
Logo::~Logo() {}

FontColor logo_fc;
GuestMode logo_guest;

/////////////////////////////////// METHODS ///////////////////////////////////
void Logo::logoBeta()
{
	std::system("clear");
	std::cout << std::endl;

  	// logo_fc.grey("\t-------------------------------------------------\n");
  	// logo_fc.red("\t  LOGIN SYSTEM Vx.x in progress... Beta version\n");
  	// logo_fc.grey("\t-------------------------------------------------\n\n");

  	return;
}
/*---------------------------------------------------------------------------*/
void Logo::logoTitle()
{
	logo_fc.grey("\t================================\n");
	logo_fc.grey("\t==");
	logo_fc.yellow("      LOGIN SYSTEM v2.0");
	logo_fc.grey("     ==\n");
	logo_fc.grey("\t==");
	logo_fc.blue("  LINUX VERSION - @Ayckinn");
	logo_fc.grey("  ==\n");
	logo_fc.grey("\t================================\n");

	return;
}
///////////////////////////////////////////////////////////////////////////////