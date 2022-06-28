#include <iostream>

using namespace std;

void fun(int a){
cout<<a<<endl;
}

void fun(double a){
cout<<a<<endl;
}
void fun(int a,int b){

cout<<a+b <<endl;
}

void fun(int a,double b){

cout<<a+b <<endl;

}

void fun(string a){

cout<<a <<endl;

}

int main()
{
    //call function and overloading those function
     fun(10);
     fun(90.99);
     fun(10,20);
     fun("huha");
    return 0;
}
