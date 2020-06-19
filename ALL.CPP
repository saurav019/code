#include<iostream.h>
#include<conio.h>
void print()
{
clrscr();
cout<<"hello my name is saurav budhathoki"<<endl;
cout<<"we are student of class-9"<<endl;
cout<<"we are learning c++ programmin"<<endl;
cout<<"my name is saurav budhathoki"<<endl;
cout<<"i leave in damak-1,jhapa"<<endl;
cout<<"i read in shree Himalaya secondary school "<<endl;
cout<<"********************************"<<endl;
cout<<"The main"<<endl;
cout<<"\t our service"<<endl;
cout<<"\t\t computer lab"<<endl;
cout<<"\t\t library"<<endl;
cout<<"\t\t ground"<<endl;
cout<<"*********************************"<<endl;
getch();
}
void input_print(float a,float b,float c,int d,int e)
{

clrscr();
cout<<"*****************-To sum any two number-****************** \n Enter any two number\n";
cin>>a>>b;
cout<<"Sum = "<<a+b<<endl;
a=0;
b=0;
cout<<"*****************-To sum any three number-****************** \n";
cout<<"Enter any three number: "<<endl;
cin>>a>>b>>c;
cout<<"Sum = "<<a+b+c<<endl;
a=0;
b=0;
c=0;
cout<<"*****************-To multiply Two number -****************** \n";
cout<<"Enter any two number: "<<endl;
cin>>a>>b;
cout<<"Multiply = "<<a*b<<endl;
a=0;
b=0;
cout<<"*****************-To divide two number -****************** \n";
cout<<"Enter any two number: "<<endl;
cin>>a>>b;
cout<<"Division = "<<a/b<<endl;
a=0;
b=0;
cout<<"*****************-To find the modules -****************** \n";
cout<<"Enter any two number: "<<endl;
cin>>d>>e;
cout<<"Modules = "<<d%e<<endl;
d=0;
e=0;
getch();
}
void different_calculatioOf_maths(float r,float l,float b,float p,float t)
{
clrscr();
cout<<"*****************-To find the area of circle -****************** \n";
cout<<"Enter the value of radious:"<<endl;
cin>>r;
cout<<"Area of circle = "<<3.14*r*r;
r=0;
cout<<"*****************-To find area of rectangle -****************** \n";
cout<<"Enter length and breadth of rectangle: "<<endl;
cin>>l>>b;
cout<<"Area of rectangle = "<<l*b<<endl;
l=0;
b=0;
r=0;
cout<<"*****************-To find simple interest -****************** \n";
cout<<"Enter the value of principle,time and rate: "<<endl;
cin>>p>>t>>r;
cout<<"Simple interest = "<<p*t*r/100<<endl;
p=0;
t=0;
r=0;
getch();
}
void main()
{
clrscr();
float a,b,c,f,g;
int d,e;
     print();
     input_print(a,b,c,d,e);
     different_calculatioOf_maths(a,b,c,f,g);
getch();
}