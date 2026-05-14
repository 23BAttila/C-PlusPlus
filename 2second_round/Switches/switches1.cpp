#include <iostream>

int main(){

    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    switch(month){
        case 1:
        std::cout << "It is Jan \n";
        break;
        case 2: 
        std::cout << "It is Feb \n";
        break;
        case 3: 
        std::cout << "It is Mar \n";
        break;
        case 4: 
        std::cout << "It is Apr \n";
        break;
        case 5: 
        std::cout << "It is May \n";
        break;
        case 6: 
        std::cout << "It is Jun \n";
        break;
        case 7: 
        std::cout << "It is Jul \n";
        break;
        case 8 :
        std::cout << "It is Agu \n";
        break;
        case 9 :
        std::cout << "It is Sept \n";
        break;
        case 10 :
        std::cout << "It is Oct \n";
        break;
        case 11 :
        std::cout << "It is Nov \n";
        break;
        case 12:
        std::cout << "It is Dec \n";
        break;
        default:
            std::cout << "Wrong input, Last try => in the array of 1-12: ";
            std::cin >> month;
    }

    return 0;
}