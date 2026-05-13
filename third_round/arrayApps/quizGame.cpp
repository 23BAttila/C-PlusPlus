#include <iostream>

int main(){
    std::string question[] = {"1. What year was C++ created?: ", "Who invented C++?: ", "What is the predecessor of C++?: ","Earth flat?: "};
    std::string options[][4] = {{"A. 1969","B. 1954","C. 1985","D. 1956"},
                               {"A. You","B. Bjarne Stroustrup","C. Guido van Rossum","D. Me"},
                               {"A. C","B. Python","C. Me","D. Pascal"},
                               {"A. Yes","B. No","C. Sometimes","D. Always"}};
    
    char answerKey[] = {'C','B','A','B'};
    
    int size = sizeof(question)/sizeof(question[0]);
    char guess;
    int score;
    
    for (int i = 0; i < size; i++)
    {
        std::cout << '-' << '\n';
        std::cout << question[i] << '\n';
        for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++)
        {   
            std::cout << options[i][j] << '\n';
        }
        std::cin >> guess;
        guess = toupper(guess);
        if(guess == answerKey[i]){
            std::cout << "Correct\n";
            score++;
        }else{
            
            std::cout << "Wrong\n";
            std::cout << "Answer: " << answerKey[i] << '\n';
        }
        
    }
    std::cout << "result: " << '\n';
    std::cout << "Correct: " << score << '\n';
    std::cout << "Number of Questions: " << size << '\n';
    std::cout << "Score:: " << (score/(double)size)*100 << '%' << '\n';
    
    
    return 0;
}