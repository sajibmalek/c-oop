#include <iostream>

using namespace std;

  string n1 ;
   string n2  ;
   char space [3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row,column;
 char token='x';
string error="Invalid input";
bool tie=false;

void userUi();
void userInput();
bool logics();

int main()
{

    cout<< "Enter the name of first player: \n";
   getline(cin,n1);
   cout<<"Enter the name of second player: \n";
   getline(cin,n2);

    while(!logics()){

         userUi();
 userInput();
  logics();

}

     if(token=='x' && tie == false){
    cout<<n2<<" "<<"Won!!the gamne"<<endl;
}
else if(token=='0' && tie==false){
    cout<<n1<<" "<<"Won!!the gamne"<<endl;
}
else{
    cout<<"It's a draw "<<endl;
}

    return 0;
}
void userUi(){





  // cout<<n1<<" is the player 1 so he/she will play first\n";
   //cout <<n2 <<" is the player 2 so he/she will play second\n\n";


   // 3/3 design

     cout<< "    |     |   \n" ;
     cout<<" "<< space[0][0]<<"  |   "  <<space[0][1]<<" |  " <<space[0][2]<<"\n";
     cout<< "    |     |   \n" ;
     cout<<"____|_____|____\n";
     cout<< "    |     |   \n" ;
      cout<<" "<< space[1][0]<<"  |   "  <<space[1][1]<<" |  " <<space[1][2]<<"\n";
     cout<< "    |     |   \n" ;
     cout<<"____|_____|____\n";
     cout<< "    |     |   \n" ;
      cout<<" "<< space[2][0]<<"  |   "  <<space[2][1]<<" |  " <<space[2][2]<<"\n";
     cout<< "    |     |   \n" ;
     cout<< "    |     |   \n" ;

}



 void userInput(){

int digit;
if(token=='x'){
    cout<<n1<<" Please enter number: ";
    cin>>digit;
}
if(token=='0'){
    cout<<n2<<" Please enter number: ";
     cin>>digit;
}

if(digit==1){
    row=0;
    column=0;
}

if(digit==2){
    row=0;
    column=1;
}

if(digit==3){
    row=0;
    column=2;
}

if(digit==4){
    row=1;
    column=0;
}

if(digit==5){
    row=1;
    column=1;
}

if(digit==6){
    row=1;
    column=2;
}

if(digit==7){
    row=2;
    column=0;
}

if(digit==8){
    row=2;
    column=1;
}
if(digit==9){
    row=2;
    column=2;
}

else if(digit <1 || digit>9){
    cout<<error<<endl;
}

if(token=='x' && space[row][column] !='x' && space[row][column] !='0'){

    space[row][column]='x';
    token='0';
}
else if(token=='0' && space[row][column] !='x' && space[row][column] !='0'){
   space[row][column]='0';
    token='x';

}

     else{
    cout<<"There is no empty space!"<<endl;
     userInput();
 }
   //userUi();
 }



bool logics(){

for(int i=0; i<3;i++){


    if(space[i][0]==space[i][1] && space[i][0]==space[i][2] || space[0][i]==space[1][i] && space[0][i]==space[2][i]){
         return true;
    }

}
if(space[0][0]==space[1][1] && space[1][1]==space[2][2] || space[0][2]==space[1][1] && space[1][1]==space[2][0]){
        return true;

}

for(int i=0;i<3;i++){

    for(int j=0;i<3;j++){
        if(space[i][j] !='x' && space[i][j] !='0'){
            return false;
        }


    }

}
  tie=true;
    return false;

}


