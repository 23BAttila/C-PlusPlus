#include <iostream>
struct Car
{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);
void paintCar(Car &car, std::string color);
int main(){
    Car car1;
    Car car2;
    
    car1.model = "Corolla";
    car1.year = 1986;
    car1.color = "white";
    
    car2.model = "Civic";
    car2.year = 1998;
    car2.color = "red";
    
    paintCar(car1, "black");
    paintCar(car2, "white");
    
    printCar(car1);
    std::cout<< "car 1, Mem: " << &car1 << '\n';
    printCar(car2);
    std::cout<< "car 2, Mem: " << &car2 << '\n';
    
    
    return 0;
}
void printCar(Car &car){
std::cout<<",-----------------------,\n";
std::cout<<'|'<<"Car info: \n";
    std::cout<<'|'<< "Mem: " << &car << '\n';
    std::cout<<'|'<<car.model<<'\n';
    std::cout<<'|'<<car.year<<'\n';
    std::cout<<'|'<<car.color<<'\n';
std::cout<<"L-----------------------,\n";


}

void paintCar(Car &car, std::string color){
    car.color = color;
}