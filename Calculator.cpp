#include<iostream>
#include<cmath>


int main(){

char op;
double num1;
double num2;
double result;

 std::cout<<"********* CALCULATOR ********* \n";

 std::cout<<"Please enter your operator : \n";
 std::cin>>op;

 std::cout<<"please enter your number #1 :\n ";
 std::cin>>num1;

 std::cout<<"Please enter  your number #2 \n";
 std::cin>>num2;

 switch(op){
  case '+':
    result = num1 + num2;
    std::cout<<result;
    break;

  case '-':
    result = num1-num2;
    std::cout<<result;
    break;

  case '*':
    result = num1 * num2;
    std::cout<<result;
    break;

  case '/':
    result = num1 / num2;
    std::cout<<result;
    break;

  default:
  std::cout<<"Please enter a valid operator ! ";
  

 }

 std::cout<<"**************************** ";




  return 0;
}