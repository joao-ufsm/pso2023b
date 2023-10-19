#include <iostream>

int main(void)
{
    std::string linha;
    int linhas = 0;

    while(std::getline(std::cin, linha))
        linhas++;

    std::cout << linhas << std::endl;
}