#include <iostream>

int main(){
    //implicit auto
    //explicit adding a new datatype (not using the original) 

    //double x = (int) 3.14;
    //char x = 100; => d
    //std::cout << (char)100;
    int correct = 8;
    int questions = 10;
    
    //double score = correct/questions*100; => 0% cuz 8/10 in in is 0.something but its 0 so 0 * 100 is 0

    double score = correct/(double)questions*100;
    std::cout << "Result: " << score << "%";
    return 0;
}