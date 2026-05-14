#include <iostream>

int main(){
    int *pNum = NULL;
    
    pNum = new int; //if using new use delete after use
    
    *pNum = 21;
    
    std::cout << "Address: " << pNum << '\n';
    std::cout << "Value: " << *pNum << '\n';

    delete pNum;
    
    return 0;
}