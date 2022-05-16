//Take three numbers and calculate mean 
#include<iostream>
int main(){
    std::cout<< "Enter three number" <<std::endl;
    double n1,n2,n3,mean; //variable declaration 
    std::cin >> n1>>n2>>n3; //taking input from users
    mean=(n1+n2+n3)/3;// simplify for calculation 
    std:: cout<< "Mean of three numbers " <<mean <<std::endl; // output 
    return 0;
}