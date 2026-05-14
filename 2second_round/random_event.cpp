#include <iostream>
#include <ctime>

int main(){

    srand(time(0));
    int randNum = rand() % 5+1;    
        std::cout<< "Your winning number was: " <<randNum << '\n';
    switch(randNum){
        case 1:
            std::cout<< "You won the 1#item \n";
            break;
        case 2:        
            std::cout<< "You won the 2#item \n";
            break;
        case 3:        
            std::cout<< "You won the 3#item \n";
            break;
        case 4:        
            std::cout<< "You won the 4#item \n";
            break;
        case 5:        
            std::cout<< "You won the 5#item \n";
            break;
        
    }
    return 0;
}