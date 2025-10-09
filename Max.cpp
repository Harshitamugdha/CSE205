#include <iostream>
using namespace std;
int main(){
    int a=10;
    int b=12;
    int c=30;
    int max=a;
    int smax;
    // if(b>max){
    //     smax=max;
    //     if(c>smax){
    //         smax=c;
    //     }
    //     max=b;
    // }
    // if(c>max){
    //     smax=max;
    //     if(b>smax){
    //         smax=b;
    //     }
    //     max=c;
    // }
    // cout<<"The Second maximum number is "<<smax<<endl;
    (a>b)?(a>c)?cout<<"Max :"<< a:cout<<"Max:"<<c:(b>c)?cout<<"Max:"<<b:cout<<"Max:"<<c;
    cout<<endl;
    (a>b)?(a>c)?cout<<"Second Max :"<< c:cout<<"Second Max:"<<a:(b>c)?cout<<"Second Max:"<<c:cout<<"Second Max:"<<b;
    return 0;
}