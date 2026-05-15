#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled;
};


int main(){
    student student1;
    student1.name = "Frank";
    student1.gpa = 3.2;
    student1.enrolled = true;
    
    student student2;
    student2.name = "Guy";
    student2.gpa = 2.1;
    student2.enrolled = false;
    
    student student3;
    student3.name = "Man";
    student3.gpa = 4.1;
    student3.enrolled = false;
      
    std::cout << "Student 1: \n";
    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';
    
    std::cout << "Student 2: \n";
    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';
    
    std::cout << "Student 3: \n";
    std::cout << student3.name << '\n';
    std::cout << student3.gpa << '\n';
    std::cout << student3.enrolled << '\n';
    

    return 0;
}