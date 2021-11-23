#ifndef FONTCOLOR_HPP
#define FONTCOLOR_HPP


class FontColor
{
	public:
		FontColor();
		~FontColor();
		
		void yellowChar(const char& text);
		void greyChar(const char& text);

		void redString(const std::string& text);
		void greenString(const std::string& text);
		void yellowString(const std::string& text);
		void blueString(const std::string& text);
		void magentaString(const std::string& text);
		void cyanString(const std::string& text);
		void whiteString(const std::string& text);
		void greyString(const std::string& text);
		
		
	private:
		//-- PASS
};
#endif  //-- FONTCOLOR_HPP
