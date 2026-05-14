#include <iostream>

int main(){
    
    std::string students[] = {"Alt", "Bolt", "Colt", "Dalt", "Elt", "Falt"};
    
    for (std::string student : students)
    {
        std::cout << student << '\n';
    }
     
    
    return 0;
}