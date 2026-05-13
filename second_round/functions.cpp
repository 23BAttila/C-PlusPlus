#include <iostream>
void happyBirthday(std::string name, int age);

int main(){
    std::string name =  " Me";
    int age = 20;
    happyBirthday(name, age);
return 0;
}
void happyBirthday(std::string name, int age){
    std::cout << "Happy BDay" << name << '\n';
    std::cout << "Happy BDay" << name << '\n';
    std::cout << "Happy BDay" << name << '\n';
    std::cout << "Happy BDay" << name << '\n';
    std::cout << "Happy BDay" << name << '\n';
    std::cout << "You are " << age << " years old\n";
}