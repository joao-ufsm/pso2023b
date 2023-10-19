#include <iostream>
#include <cstdio>

int main(void)
{
    char* linha;
    int linhas = 0;

    linha = new char[10];
    for(auto i= 0; i < 10000; i++){
        linha[i] = static_cast<char>(fgetc(stdin));
        linhas++;
    }

    std::cout << linhas << std::endl;
    delete[] linha;
    
    return 0;
}