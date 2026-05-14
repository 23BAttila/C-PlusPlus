#include <iostream>


    std::string concatNames( std::string string1,  std::string string2);


int main(){
    std::string firstname = "Dejavu";
    std::string lastname = "Ijustbeenthisplacebefore";
    std::string fullname = concatNames(firstname, lastname);
    
    std::cout << "Hello " << fullname << '\n';

    return 0;
    
}
    std::string concatNames( std::string string1,  std::string string2){
        return string1 + ' ' + string2;
    }
