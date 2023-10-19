#include <iostream>

int main(void)
{
    std::string linha;
    int linhas = 0;

    while(std::cin >> linha)
        linhas++;

    std::cout << linhas << std::endl;
}