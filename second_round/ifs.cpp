#include <iostream>

    int main(){
        int age;
        std::cout << "Enter your age: ";
        std::cin >> age;

        if(age>=18){
            std::cout<<"You are in";
        }else if(age < 0){
            std::cout<<"You are not even born man."; 
        }else if(age>100){std::cout<<"You are very old but you are in... i guess.";
        }
        else{
            std::cout<<"You are too young, you are not in";
        }

        return 0;
    }