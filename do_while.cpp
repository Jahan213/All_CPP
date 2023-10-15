#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of N = ";
    cin>>n;

   do{    /// min 1 time loop willbe run in false case

    cout<<"Number is - "<<n<<endl;
    cin>>n;
   }while(n>0);   ///when condition was false then loop will break

    return 0;

}
