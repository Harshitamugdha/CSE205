#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={8,11,25,23,9,10};
    int max, Smax,Tmax, min=arr[0];
    for(int i=0;i<6;i++){
        if(arr[i]>max){
            Tmax=Smax;
             Smax=max;
            max=arr[i];}
        else if(arr[i]>=Smax){
            Tmax=Smax;
            Smax=arr[i];
        }
        else if(arr[i]>=Tmax){
            Tmax=arr[i];
        }
        if(arr[i]<=min){
            min=arr[i];
        }
        
    }
    cout<<max;
    cout<<endl;
    cout<<min;
    cout<<endl;
    cout<<Smax;

    cout<<endl;
     cout<<Tmax;
    return 0;
}