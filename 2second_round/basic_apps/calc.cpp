#include <iostream>

int main(){
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "|***********Calculator**BEG********|\n";

    std::cout << '|' << "Enter the operator: (+ - * /): " ;
    std::cin >> op;

    std::cout << '|' << "Enter #1: ";
    std::cin >> num1;

    std::cout << '|' << "Enter #2: ";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << '|' << "result: " << result << "           |" <<  '\n';
        break;
        case '-':
            result = num1 - num2;
            std::cout << '|' << "result: " << result << "           |" << '\n';
        break;
        case '*':
            result = num1 * num2;
            std::cout << '|' << "result: " << result << "           |" << '\n';
        break;
        case '/':
            result = num1 / num2;
            std::cout << '|' << "result: " << result << "           |" << '\n';
        break;
        default:
            std::cout << '|' << "Not a valid operator!!!" << "           |" << '\n';
        break;
    }



    std::cout << "|***********Calculator**END********|\n";
}