#include <iostream>


int main(){
/* //in 2 lines
    int x; //dec
    x = 5;  //assign
    
*/

    int x = 5;
    int y = 6;
    int sum = x + y;
    std::string asd;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';
    
    
    std::cout << "Add meg az asd értékét: " << '\n';
    std::cin >> asd;
    std::cout << asd;

    return 0;
} 