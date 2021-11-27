/////////////////////////////// OBJECT CREATION ///////////////////////////////
FontColor::FontColor() {}
FontColor::~FontColor() {}

/////////////////////////////////// METHODS ///////////////////////////////////
void FontColor::red(const std::string& text)
{
	std::cout << "\033[1;31m" + text + "\033[1;m";
	return;
}
/*---------------------------------------------------------------------------*/
void FontColor::green(const std::string& text)
{
	std::cout << "\033[1;32m" + text + "\033[1;m";
	return;
}
/*---------------------------------------------------------------------------*/
void FontColor::yellow(const std::string& text)
{
	std::cout << "\033[1;33m" + text + "\033[1;m";
	return;
}
/*---------------------------------------------------------------------------*/
void FontColor::blue(const std::string& text)
{
	std::cout << "\033[1;34m" + text + "\033[1;m";
	return;
}
/*---------------------------------------------------------------------------*/
void FontColor::magenta(const std::string& text)
{
	std::cout << "\033[1;35m" + text + "\033[1;m";
	return;
}
/*---------------------------------------------------------------------------*/
void FontColor::cyan(const std::string& text)
{
	std::cout << "\033[1;36m" + text + "\033[1;m";
	return;
}
/*---------------------------------------------------------------------------*/
void FontColor::white(const std::string& text)
{
	std::cout << "\033[1;37m" + text + "\033[1;m";
	return;
}
/*---------------------------------------------------------------------------*/
void FontColor::grey(const std::string& text)
{
	std::cout << "\033[1;38m" + text + "\033[1;m";
	return;
}
///////////////////////////////////////////////////////////////////////////////