#include <iostream>

int main()
{
    std::system("clear");

    std::string root_pass = "read -r password";
    std::string user_pass = "read -r password";

    std::cout << "Enter root password : ";
    std::system("stty -echo");
    std::cin >> root_pass;

    std::cout << "\nEnter user password : ";
    std::cin >> user_pass;

    std::system("stty echo");
    
    if(user_pass == root_pass)
        std::cout << "\n\n\033[1;32mPassword OK => ACESS GRANTED !!\033[1;m\n";
    else
        std::cout << "\n\n\033[1;31mWrong password => ACCESS DENIED...\033[1;m\n";

    std::cout << "\nRoot password : " << root_pass << std::endl;
    std::cout << "User password : " << user_pass << std::endl;

    return 0;
}