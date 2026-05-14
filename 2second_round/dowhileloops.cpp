 #include <iostream>
 
 int main(){
    int num;
    do{
        std::cout<<"Enter a postivive number: ";
        std::cin>>num;
    }while(num<0);
    std::cout<<num;
    return 0;
 
    /*int num;
        std::cout<<"Enter a postivive number: ";
        std::cin>>num;
    while (num<0){
        std::cout<<"Enter a postivive number: ";
        std::cin>>num;
    }
        std::cout<<"the number is "<<num;
    */
 }