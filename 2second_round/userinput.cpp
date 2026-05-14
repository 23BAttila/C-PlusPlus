#include <iostream>

// cout << output
// cin >> input

int main(){
    std::string name;
    int age;
    //std::cout << "What is your name?: ";
    std::cout << "|===================start=====================|" << '\n';

    std::cout << "Question 1:" << '\n';
    std::cout << "What is your age?: ";
    std::cin >> age;


    std::cout << "Question 2:" << '\n';
    std::cout << "Enter your full name: ";
    std::getline(std::cin >> std::ws, name); //enables space when user input and std::ws eleminate any white space

    std::cout << "Result:" << '\n';
    std::cout << "Welcome: \n-" << name << "(" << age << ")" <<'.' <<'\n';
    std::cout << "|====================end======================|" << '\n';

    return 0;

}