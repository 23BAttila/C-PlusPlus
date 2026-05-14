#include <iostream>

int main(){
    std::string name = "Me";
    int age = 19;
    bool student = false;
    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n'; 
    return 0;
}