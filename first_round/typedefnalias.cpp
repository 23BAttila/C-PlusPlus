#include <iostream>
#include <vector> //provide a more flexible alternative to arrays

//typedef std::vector<std::pair<std::string, int>> pairlist_t; //giving pairlist as alias cuz its long
//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;
typedef std::string text_out;

int main(){
   //pairlist_t pairlist;
    text_t firstName = "Slim";
    number_t age = 21;
    text_out text = "Shady";
    std::cout << age << '\n';
    
    std::cout << text;
    return 0;
}