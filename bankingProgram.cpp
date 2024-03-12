#include<iostream>

void showBalance(double balance);
double Deposit(double balance);
double withdraw(double balance);

int main(){

    double balance = 0;
    int choice = 0;

    do{
    std::cout<< "***************ONLINE BANKING MANAGEMENT*************** \n";
    std::cout<<"Enter Your Operation :  \n";
    std::cout<<"1.Show Balance\n"<<"2.Deposit \n"<<"3.Withdraw \n"<<"4.Exit \n";
    std::cin>>choice;
    
    std::cin.clear();
    fflush(stdin);
   
    switch(choice){
        case 1:
        showBalance(balance);
        break;

        case 2:       
        Deposit(balance);
        showBalance(balance);
        break;

        case 3:
        withdraw(balance);
        showBalance(balance);
        break;

        case 4:
        std::cout<<"Thanks Visit Again ! \n" ;
        break;

        default:
        std::cout<<"invalid operation ! \n ";
        break;
    }
   }while(choice != 4);
   
    
    


 return 0;

}

void showBalance(double balance){
    std::cout<<"Your Balance is : "<<balance<<'\n';

}
double Deposit(double balance){
    double amount = 0;
    std::cout<<"Enter the amount : ";
    std::cin>>amount;
    balance += amount;
    std::cout<<"Your Updated Balance is : "<<balance<<'\n';
    
 return 0;
}
double withdraw(double balance){
    double withdrawAmount = 0;
    std::cout<<"Enter the amount : ";
    std::cin>>withdrawAmount;
    if(withdrawAmount <= balance){
    balance -= withdrawAmount;
    std::cout<<"Your Updated Balance is : "<<balance<<'\n';
    }
    else {
        std::cout<<"OOPS ! Insufficient Balance  \n";
    }
 return 0;
}
