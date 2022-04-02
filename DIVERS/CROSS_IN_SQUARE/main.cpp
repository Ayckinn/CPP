#include <iostream>

int main()
{
	int nb_lines = 0;
	std::cout << "\nEnter the number of lines : ";
	std::cin >> nb_lines;
	std::cout << "\n";

	for(int line = 1; line <= nb_lines; line++)
	{
		for(int col = 1; col <= nb_lines; col++)
		{
			if(line == 1 || line == nb_lines || col == 1 || \
			  col == (nb_lines - line + 1) || line == col || col == nb_lines)
				std::cout << "#";

			else
				std::cout << " ";
		}
		std::cout << "\n";
	}
	return 0;
}