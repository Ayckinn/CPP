/////////////////////////////// OBJECT CREATION ///////////////////////////////
DebugMode::DebugMode() {}
DebugMode::~DebugMode() {}

Logo 		debug_logo;
FontColor 	debug_fc;
Message 	debug_msg;
// AyckinnMode	debug_ayckinn;
// FileAccess 	debug_fax;
// UserMode 	debug_user;
// GuestMode 	debug_guest;

/////////////////////////////////// METHODS ///////////////////////////////////
void DebugMode::printCheckUsername(const std::string& debug_text, const std::string& uname)
{
	std::cout << "\n\t" << debug_text << uname << std::endl;
	return;
}
/*---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------*/

///////////////////////////////////////////////////////////////////////////////