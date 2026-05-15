#include <iostream>
//TEMPERATURE SET/GET APP
class Stove{
    private:
        int temp = 24;
    public:
    /*Stove(int temp){
        setTemp(temp);
    }*/
    int getTemp(){
        return temp;
    }
    void setTemp(int temp){
        if (temp<7)
        {
            
            std::cout << "Denied (Auto-Safe-Min)\n";
            this->temp = 7;
        }else if(temp > 27)
        {
            std::cout << "Denied (Auto-Safe-Max)\n";
            this->temp = 27;
        }else{
            std::cout << "Accepted\n";
            std::cout << "Set ";
            this->temp=temp;
        }
    }
};


int main(){
    
    int userTemp;
    std::cout << "Enter temperature value: " << ' ';
    std::cin >> userTemp;
    

    Stove stove;  
    stove.setTemp(userTemp);
    std::cout << "Temp was set to: " << stove.getTemp() << "C°" <<'\n';
    return 0;
}