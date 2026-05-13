#include <iostream>

int main(){
    /*int grade = 50;
    grade >= 60 ? std::cout << "You pass!": std::cout<<"Failed";*/
    
    //int number = 10;
    int number;
    std::cout<<"Enter the number to check: ";
    std::cin>>number;
    
    number % 2 == 1 ? std::cout<<number<<" is ODD"<<"\n":std::cout<<number<<" is EVEN"<<"\n";
    
    return 0;
}