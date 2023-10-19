#include <iostream>

int main(void)
{
    std::string linha;

    while(std::getline(std::cin, linha))
        linhas++;

    std::cout << linhas << std::endl;
}