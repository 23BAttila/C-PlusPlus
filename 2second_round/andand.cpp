#include <iostream>

int main(){
    int temp;
    
    bool sunny = false;
    
    
    
    
    std::cout << "Enter the temp: ";
    std::cin >> temp;
    if(temp <= 0 || temp >= 30){
        std::cout<<"The temp is bad!";
    }else{
        std::cout<<"The temp is good";
    }
    if(!sunny){
        std::cout<<"Its cloudy";
    }else{
        std::cout<<"Probably sunny";
    }
    
    
    
    
    return 0;
}