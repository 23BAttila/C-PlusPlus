#include <iostream>



class Human{
    public:
        std::string name;
        std::string job;
        int age;
        
        void eat(){
            std::cout << name << ' ' <<"eating right now...\n";
        }
        void drink(){
            std::cout << name << ' ' << "drinking right now...\n";
        }
        void sleep(){
            std::cout << name << ' '<< "sleeping right now...\n";
        }
};
class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;
        
        void accelerate(){
            std::cout << "You step on the gas";
        }
        void brake(){
            std::cout << "You step on the brakes";
        }

};
int main(){
    
    Human human1;
    Human human2;
    human1.name="Rick";
    human1.job="Scientist";
    human1.age=70;
    
    human2.name="Morty";
    human2.job="Student";
    human2.age=15;
    
    std::cout << "Name: " << human1.name << '\n';
    std::cout << "Job: " << human1.job << '\n';
    std::cout << "Age: " << human1.age << " years old" << '\n' ;

    human1.drink();
    std::cout << '\n';
    
    std::cout << "Name: " << human2.name << '\n';
    std::cout << "Job: " << human2.job << '\n';
    std::cout << "Age: " << human2.age << " years old" << '\n';
    
    human2.sleep();
    
    Car car1;
    car1.make = "Toyota";
    car1.model = "Corolla";
    car1.year = 1986;
    car1.color = "white";
    std::cout << "\nCar:\n";
    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';
    car1.accelerate();
    car1.brake();
    
    
    
    return 0;
}