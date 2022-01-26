#include <iostream>
#include <string>


int main()
{
    system("clear");
    
    const int INDENT = 50;
    int symbol = 1;
    int offset = 1;
    int space = 0;
    
    //--- TREE'S BODY ---//
    std::cout << "\n\033[0;32m";    //-- Green
    for(int i = 0; i < 15; i++)
    {
        space = (INDENT / 2 - offset);
        std::cout << std::string(space, ' ');
        
        for(int x = 0; x < symbol; x++)
            std::cout << "*";
    
        symbol += 2;
        offset += 1;
        std::cout << std::endl;
    }
    
    //--- TREE'S TRUNK ---//
    std::cout << "\033[1;31m";      //-- Red
    space = (INDENT / 2 - 2);
    std::cout << std::string(space, ' ') << "| |" << "\n\033[1;m\n";
    
    return 0;
}
