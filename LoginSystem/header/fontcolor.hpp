#ifndef FONTCOLOR_HPP
#define FONTCOLOR_HPP

#include <iostream>
#include <string>


class FontColor
{
	public:
		FontColor();
		~FontColor();

		void red(const std::string& text);
		void green(const std::string& text);
		void yellow(const std::string& text);
		void blue(const std::string& text);
		void magenta(const std::string& text);
		void cyan(const std::string& text);
		void white(const std::string& text);
		void grey(const std::string& text);
		
		
		private:
			//-- PASS
};

#endif  //-- FONTCOLOR_HPP