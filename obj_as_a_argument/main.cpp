#include <iostream>

using namespace std;


class add{

private:
    int a,b,sum=0,abs=0;

public:
    void input();


    // void fun(int a, int b)
    // return type function_name(int a, int b )  here a,b are parameter.
    // same type as a class name. it's represent as a data type like int, double //  and num1, num2 are objects. so first pass the class name and second amy variable name.. given below

     void output(add num1,add num2);
     // void output( let, add== int num1 , add==int num2)

};

int main()
{

// add =>is the class name
// ob1,ob2,ob3 are objects
  add ob1,ob2,ob3;

  ob1.input();
 ob2.input();

  //passing objects as a argument

  ob3.output(ob1,ob2);

    return 0;
}

 void add:: input(){
// taking input
 cout<<"Enter any two number: ";
 cin>> a>>b;

 }

  void add ::output(add num1, add num2){

      sum=num1.a + num1.b;
    abs=num1.a -  num2.b;

     cout<<"sum:" <<sum <<endl<<"abs: " <<abs<<endl;

  }
