#include <iostream>
#include <string>
#include <cctype>

int main()
{
	char low_case = 'a';
	char up_case = 'L';
	std::string full_upper = "AYCKINN";
	std::string full_lower = "lisa";

	std::cout << "Original char : " << low_case << " - To upper : " << (char)toupper(low_case) << "\n";
	std::cout << "Original char : " << up_case << " - To lower : " << (char)tolower(up_case) << "\n";

	std::cout << "\nOriginal string : " << full_upper << "\n" << "To lower : ";
	for(unsigned int i = 0; i < full_upper.size(); i++)
		std::cout << (char)tolower(full_upper[i]);

	std::cout << "\n\nOriginal string : " << full_lower << "\n" << "To upper : ";
	for(unsigned int i = 0; i < full_lower.size(); i++)
		std::cout << (char)toupper(full_lower[i]);

	return 0;
}