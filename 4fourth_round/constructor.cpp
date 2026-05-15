#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;
    Student(std::string name, int age, double gpa){
        this->name=name;
        this->age=age;
        this->gpa=gpa;
    }

};
class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;
    Car(std::string make, std::string model, int year, std::string color){
        this->make=make;
        this->model=model;
        this->year=year;
        this->color=color;
    }

};

int main(){

    Student student1("Carl",17,3.2);
    Student student2("Jean",16,3.8);
    Student student3("Frank",18,2.7);
    std::cout << '\n' << student1.name << '\n' << student1.age << '\n' << student1.gpa << '\n';
    std::cout << '\n' << student2.name << '\n' << student2.age << '\n' << student2.gpa << '\n';
    std::cout << '\n' << student3.name << '\n' << student3.age << '\n' << student3.gpa << '\n';
    Car car1("Toyota","Corolla",1968,"white");
    Car car2("Honda","Civic",1992,"red");
    std::cout << '\n' << car1.make << '\n' << car1.model << '\n' << car1.year << '\n' << car1.color << '\n';
    std::cout << '\n' << car2.make << '\n' << car2.model << '\n' << car2.year << '\n' << car2.color << '\n';

    return 0;
}