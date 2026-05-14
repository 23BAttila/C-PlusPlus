#include <iostream>
#include <iomanip>
void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    std::string username; 
    std::cout << "|_LAST_MINUTE_BANK_|\n";
    //std::string username = "username";
    std::cout << "Your username will be: ";
    std::getline(std::cin, username);
    //std::cin >> username;
    double balance = 0;
    int choice = 0;
    std::cout << ">USERNAME: " << username <<  '\n';  
    showBalance(balance);  
    std::cout << "|__________________|\n";
    do{ 
    std::cout << "Enter your choice:\n";
    std::cout << "1.Show my Balance\n";
    std::cout << "2. Deposit\n";
    std::cout << "3. Withdraw\n";
    std::cout << "4. Exit App\n";
    std::cin >> choice;

    if(std::cin.fail()){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        choice = 0;
    }
    
    switch(choice){
        case 1:
        showBalance(balance);
        break;
        case 2:
        balance += deposit();
        showBalance(balance);
        break;
        case 3:
        balance -= withdraw(balance);
        showBalance(balance);
        break;
        case 4:
        std::cout << "I miss you " << username << '\n';
        break;
        default:
        std::cout << "Please enter a valid choice(1-4) \n";
        break;
    }

    }while(choice !=4); 
     
    return 0;
}
void showBalance(double balance){
    std::cout << "  Your balance is: $"<< std::setprecision(2) << std::fixed << balance << '\n';
}
double deposit(){ 
    double amount = 0;
    std::cout << "Enter amount to be deposited: \n";
    std::cin >> amount;
    if(amount>0){
    return amount;
    }else{
    std::cout << "Not a valid amount: \n";
    return 0;
    }
}

double withdraw(double balance){
double amount = 0;
std::cout << "Enter amount to be withdrawn: \n";
std::cin >> amount;
if(amount > balance){
    std::cout << "Insufficient amount\n";
    return 0;
}else if(amount <= 0){
    std::cout << "Not a valid amount\n";
    return 0;
}else{
    return amount;
}
}