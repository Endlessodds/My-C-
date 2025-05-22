#include <iostream>
using namespace std;
int main(){
   int a,b,c;
    cout<<"enter a number ";
    cin>>a;
    cout<<"enter a number ";
    cin>>b;
    cout<<"enter a number ";
    cin>>c;
    
    if (a!=b&&b!=c){
        if (a>b && a>c){
            cout<<a;
            }
         else if(b>a && b>c ){
             cout<<b;
         }
         else{
             cout<<c;
             }
    }
    else{          
        cout<<"try another number";
    }
      return 0;
      
}
