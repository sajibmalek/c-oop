#include<iostream>
using namespace std;
int main(){

int count=1,sum=0, value;
cout<<"Enter a number" <<endl;
cin>> value;
while (count<= value)
{
    sum +=count;
    count +=1;
}
cout<< "Sum of 1 to " <<" " << value <<" " <<"=" <<" "<<sum <<endl;
return 0;



}