#include <iostream>

int main(){
    std::cout << "Standard character output with \\n" << '\n'; // \n' or std::endl. I heard \n is better performance wise
    std::cout << "Standard character output with end line parameter" << std::endl; //here using end line parameter (flushing something or what)  
    return 0; // 0 no problemo, 1 problemo
}