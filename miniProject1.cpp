#include<iostream>

int main(){

    char unit;
    double temp;


    std::cout<<"**********Temperature Converter********** \n";
    std::cout<<" Fahrenheit F  \n";
    std::cout<<" Celsius C  \n";
    std::cout<<"Enter the unit which would you like to convert: ";
    std::cin>>unit;

    if(unit == 'F' || unit == 'f'){
        std::cout<<"Enter the temperature: ";
        std::cin>>temp;

        std::cout<<"The converted temperature is : "<<1.8*temp+32<<"F"<<'\n';

    }
    else if(unit =='C'||unit =='c'){
        std::cout<<"Enter the temperature: ";
        std::cin>>temp;

        std::cout<<"The converted temperature is : "<<(temp-32)/1.8<<"C"<<'\n';


    }
    else{
        std::cout<<"Please enter valid unit to convert the Temperature ! \n";
    }
    std::cout<<"****************************************";









}