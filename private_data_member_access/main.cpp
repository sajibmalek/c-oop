#include <iostream>

using namespace std;

class demo{

int a,b,c;

public:
    void setter(int i,int j);
    double getter();

};
void demo::setter(int i,int j){
a=i;
b=j;

}
double demo:: getter(){

//return a*b+10;
return  a+b;


}

int main()
{
    demo obj;
    obj.setter(10,20);
     cout<<obj.getter();


    return 0;
}
