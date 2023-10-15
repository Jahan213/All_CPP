#include<iostream>
#include<conio.h>
using namespace std;
int main(){

    int num1, num2;

    cout<<"Enter 2 numbers: ";
    cin>>num1>>num2;

    int sum=num1+num2;
    cout<<"SUM is = "<<sum<<endl;


    int sub=num1-num2;
    cout<<"SUB is = "<<sub<<endl;

    int multi=num1*num2;
    cout<<"multi is = "<<multi<<endl;

    double div=(float)num1/num2;
    cout<<"DIV is = "<<div<<endl;

    int rim=num1%num2;
    cout<<"rim is = "<<rim<<endl;

    getch();
}
