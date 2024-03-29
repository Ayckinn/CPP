/////////////////////////////// OBJECT CREATION ///////////////////////////////
FontColor::FontColor() {}
FontColor::~FontColor() {}

/////////////////////////////////// METHODS ///////////////////////////////////
/*---------------------------------------------------------------------------*/
/*----------------------------------- CHAR ----------------------------------*/
/*---------------------------------------------------------------------------*/
void FontColor::greyChar(const char& text)
{
	std::cout << "\033[1;38m" << text << "\033[1;m";
	return;
}
/*---------------------------------------------------------------------------*/
void FontColor::yellowChar(const char& text)
{
	std::cout << "\033[1;33m" << text << "\033[1;m";
	return;
}
/*---------------------------------------------------------------------------*/
/*--------------------------------- STRINGS ---------------------------------*/
/*---------------------------------------------------------------------------*/
void FontColor::redString(const std::string& text)
{
	std::cout << "\033[1;31m" + text + "\033[1;m";
	return;
}
/*---------------------------------------------------------------------------*/
void FontColor::greenString(const std::string& text)
{
	std::cout << "\033[1;32m" + text + "\033[1;m";
	return;
}
/*---------------------------------------------------------------------------*/
void FontColor::yellowString(const std::string& text)
{
	std::cout << "\033[1;33m" + text + "\033[1;m";
	return;
}
/*---------------------------------------------------------------------------*/
void FontColor::blueString(const std::string& text)
{
	std::cout << "\033[1;34m" + text + "\033[1;m";
	return;
}
/*---------------------------------------------------------------------------*/
void FontColor::magentaString(const std::string& text)
{
	std::cout << "\033[1;35m" + text + "\033[1;m";
	return;
}
/*---------------------------------------------------------------------------*/
void FontColor::cyanString(const std::string& text)
{
	std::cout << "\033[1;36m" + text + "\033[1;m";
	return;
}
/*---------------------------------------------------------------------------*/
void FontColor::whiteString(const std::string& text)
{
	std::cout << "\033[1;37m" + text + "\033[1;m";
	return;
}
/*---------------------------------------------------------------------------*/
void FontColor::greyString(const std::string& text)
{
	std::cout << "\033[1;38m" + text + "\033[1;m";
	return;
}
