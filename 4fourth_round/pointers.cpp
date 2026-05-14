#include <iostream>

int main(){
    
    std::string name = "Name";
    int age = 32;
    std::string freePizzas[5] = {"Pizza1","Pizza2","Pizza3","Pizza4","Pizza5"};
    
    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;
    
    std::cout << "[ "<< pName << '|';
    std::cout << pAge << " ]" << '\n';
    std::cout << *pName << ' ';
    std::cout << *pAge << '\n';
    std::cout << *pFreePizzas << '\n';
    
    return 0;
}