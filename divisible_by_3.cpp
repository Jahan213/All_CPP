#include<iostream>
using namespace std;

int main()
{
    int n=100;
    for(int i=0;i<=100; i++){
        if(i%3==0){
            cout<<"Divisible by 3 = "<<i<<endl<<endl;
            continue;

        }

        cout<<"       NOT DIVISIBLE BY 3 = "<<i<<endl<<endl;

    }


    return 0;

}

