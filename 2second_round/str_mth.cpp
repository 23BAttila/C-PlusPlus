#include <iostream>

int main(){
    std::string name;
    
    std::cout<< "Enter your name: ";
    std::getline(std::cin, name);
    
    
    
    //name.erase(0, 3);
    std::cout<<name;
    //Cplusplus.com
    //std::cout << name.find(' ');
    //std::cout << name.at(0);
    //name.insert(1, "@");
    //std::cout << name;
   // name.append("@gmail.com");
    //std::cout<<"Your email based on my calculations are: "<<name<< '\n';
    //name.clear();
    /*if(name.empty()){
        std::cout << "No name was entered";
    }else{
        
        std::cout << "Szevasz " << name;
    }*/
    /*if(name.length() > 12){
        std::cout << "Your name can't be over 12 chars";
    }else{  
        
        std::cout << "Welcome " << name;
    }*/
return 0;
}