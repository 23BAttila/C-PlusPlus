#include <iostream>

int main(){
    bool student = true;
    char grade = 'D';
    double gpa = 2.5;
    std::string name = "Bazsek Brúnó";
    char grades[] = {'A','B','C','D','F'};
    std::string students[] = {"Bruno", "Bazsek", "Benő", "Elek apja"};
    
    std::cout << "Grade List: " << sizeof(grades) << " bytes, \n";
    std::cout << "Number of elements in the Grade list: " << sizeof(grades)/sizeof(char) << " elements, \n";
    std::cout << "Student: " << sizeof(student) << " bytes,\n";
    std::cout << "Current Grade: " << sizeof(grade) << " bytes,\n";
    std::cout << "GPA: " << sizeof(gpa) << " bytes,\n";
    std::cout << "Name: " << sizeof(name) << " bytes\n";
    
    std::cout << "Students: " << sizeof(students) << " bytes\n";
    std::cout << "Students: " << sizeof(students)/sizeof(std::string) << " students\n";
    return 0;
}