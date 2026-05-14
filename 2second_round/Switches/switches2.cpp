#include <iostream>

int main(){
    char grade;
    std::cout << "What letter grade?? ";
    std::cin >> grade;

    switch (grade)
    {
    case 'A':
        std::cout<<"You did Great!\n";
    break;
    
    case 'B':
        std::cout<<"You did Okay!\n";
    break;

    case 'C':
        std::cout<<"Steady\n";
    break;

    case 'D':
        std::cout<<"Close to Fail\n";
    break;
    case 'F':
        std::cout<< grade << " stands for " <<"Failed\n";
    break;
    default:
        std::cout<< "ERROR! \n" <<"possibilities: A,B,C,D,F\n";
    break;
    }
    return 0;
}