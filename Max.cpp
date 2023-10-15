#include<iostream>
using namespace std;
int main(){

  int a,b,c;
  cin>>a>>b>>c;

  if(a>b>c){

    if(a>c){
        cout<<"Largest number is A : "<<a<<endl;
    }
   else {
            cout<<"Largest number is C : "<<c<<endl;

}
}
 else{
    if(b>c){
        cout<<"Largest number is B : "<<b<<endl;
    }
    else{
        cout<<"Largest number is:"<<c<<endl;
    }
}
 return 0;
}
