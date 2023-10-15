#include<iostream>
using namespace std;

int main()
{
    int pocketmoney=6000;
    for(int date=1; date<=30; date++){
        if(date%2==0){
            cout<<"ODD DATE TODAY! DATE = "<<date<<endl<<endl;
            continue;

        }
        if (pocketmoney==0)
        {
            break;
        }
        cout<<"        GO OUT TODAY! DATE = "<<date<<endl<<endl;
        pocketmoney=pocketmoney-1000;
    }


    return 0;

}
