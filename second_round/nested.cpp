#include <iostream>
int main(){
    int rows;
    int columns;
    char symbole;
    std::cout<<"How many rows?: ";
    std::cin>>rows;
    std::cout<<"How many column?: ";
    std::cin>>columns;
    std::cout<<"Enter Symbols to build with: ";
    std::cin>>symbole;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            std::cout<< symbole;
        }
        std::cout << '\n';
    }     
    

    
    

    return 0;
}