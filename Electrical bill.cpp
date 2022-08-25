#include <iostream>
#include <string>
using namespace std;

int main()

{
char name[50] ;
int id , punit , cunit , unit , charge ,choose;
cout<<"*  Enter the following information correctly  *\n\n";

cout<<" Enter the customer name :";
cin.getline(name,50);

cout<<"\n Enter customer ID :";
cin>>id;

cout<<"\n Enter previous unit :";
cin>>punit;

cout<<"\n Enter current unit :";
cin>>cunit;

unit=cunit-punit;
if(unit<=100)
    charge=unit*2;
    else if(unit<=200)
    charge=unit*3;
           else if(unit<=300)
           charge=unit*4;
                  if (unit>300)
                  charge=unit*5;
charge = charge + 200 ; //Extra Charges
cout<<"\n\n\n\n $*$ Customer information and Bill $*$";
cout<<"\n\n Customer name:"<<name;
cout<<"\n\n Customer ID :"<<id;
cout<<"\n\n Previous unit :"<<punit;
cout<<"\n\n Current unit :"<<cunit;
cout<<"\n\n Total bill charge :"<<charge;

return 0;
}


