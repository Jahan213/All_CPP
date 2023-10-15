#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Counter is = ";
    cin>>n;
    int sum;

   for(int counter=2; counter<=n;counter++){
     sum =sum+counter;
    cout<<sum<<endl;
   }

     cout<<"TOTAL SUM - "<<sum<<endl;

    return 0;

}
