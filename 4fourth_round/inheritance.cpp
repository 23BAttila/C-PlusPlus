#include <iostream>

class Animal{
    public:
        bool alive = true;
    void eat(){
        std::cout << "Eating...\n";
    }

};
class Dog : public Animal{
    public:
    
    void bark(){
        std::cout << "Barking...\n";
    }
    

};
class Cat : public Animal{
    public:
    
    void wine(){
        std::cout << "Wining...\n";
    }
    

};

class Shape{
    public:
        double area;
        double volume;
    
};
class Cube : public Shape{
    public:
        double side;
    Cube(double side){
        this->side=side;
        this->area=side*side*6;
        this->volume=side*side*side;
    }
};
class Sphere : public Shape{
    public:
        double radius;
    Sphere(double radius){
        this->radius=radius;
        this->area=4*3.14159*(radius*radius);
        this->volume=(4/3.0)*3.14159*(radius*radius*radius);
    }
};



int main(){
    Dog dog;
    Cat cat;
    
    std::cout << dog.alive << '\n';
    dog.eat();
    dog.bark();
    std::cout << cat.alive << '\n';
    cat.wine();
    std::cout <<'\n' << "Math \n";
       
    Cube cube(10);
    Sphere sphere(5);
    std::cout <<'\n' << "Cube \n";
    std::cout<<"Area: " << cube.area << "cm\n";
    std::cout << "Volume: " << cube.volume << "cm\n";
    std::cout <<'\n' << "Sphere \n";
    std::cout<<"Area: " << sphere.area << "cm\n";
    std::cout << "Volume: " << sphere.volume << "cm\n";
       
       
    return 0;
}