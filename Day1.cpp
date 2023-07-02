#include<iostream>
using namespace std;
int main()
{// single line comment
cout<<"Hallo!\t Guten Tag"<<endl;// \t used for tab and \\ used for slash,endl also used for break line
cout<<"Ich lerne \"C language\" \n";// \"____\" double inverted comma word
cout<<"Ciao\n";
/* double line comment by/*______*/
/*variable int-whole no.,double-1.99 decimal no.,char-'a','1',string-"Hallo Welt!" text,bool-true or false*/
// type variableName= value
int a=5;int b=2;
int sum=a+b;
int area;

int sub=a-b;int mul=a*b;
float div=a/b;
cout<<sum<<endl<<sub<<endl<<mul<<endl<<div<<endl;
cout<<"area of square or rec is \t"<<mul<<endl;
int r=10;int ac=r*r;
cout<<"area of circle is \t"<<ac;


return 0;
}
