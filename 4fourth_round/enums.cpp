#include <iostream>


enum Day{Sunday = 0, Monday = 1 , Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5, Saturday = 6};
enum iceCreamStock{vanilla,tuttifrutti,caramell,rum_and_walnut,coffee,pistachio,chocolate};
enum Rgb{red,green,blue};

int main(){
    
    Day today = Sunday;
    
    switch (today)
    {
        case Sunday:
            std::cout << "Sunday";
            break;
        case Monday:
            std::cout << "Monday";
            break;
        case Tuesday:
            std::cout << "Tuesday";
            break;
        case Wednesday:
            std::cout << "Wednesday";
            break;
        case Thursday:
            std::cout << "Thursday";
            break;
        case Friday:
            std::cout << "Friday";
            break;
        case Saturday:
            std::cout << "Saturday";
            break;
    }
    
    return 0;
}