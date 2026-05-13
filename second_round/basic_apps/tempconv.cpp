#include <iostream>

int main(){
    double temp;
    char unit;
    
    std::cout << "|------------------CONVERTER--TOP-------------------------|" << '\n';
    
    std::cout << "F = Fahrenheit\n" << "C = Celsius\n";
    std::cout << "Choose one to convert to (only the initial F or C): ";
    std::cin >> unit;
    if(unit == 'F' || unit == 'f'){
        std::cout << "You have choosen " << unit << "°" << '\n';
        std::cout << "Enter the Celsius temperature: ";
        std::cin >> temp;
        temp = (1.8*temp) + 32.0;
        std::cout << temp << "F°" << '\n'; 
        
    }else if (unit == 'C' || unit == 'c'){
        std::cout << "You have choosen " << unit << "°" << '\n';
        std::cout << "Enter the Fahrenheit temperature: ";
        std::cin >> temp;
        temp = (temp-32) / 1.8;
        std::cout << temp << "C°" << '\n'; 
        
    }else{
        std::cout << "Not a valid unit or not a valid temperature";
    }
    
    std::cout << "|------------------CONVERTER--BOTTOM----------------------|" << '\n';
    
    
    return 0;
}