#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    int n=5;
    // for(int i=n-1;i>0;i--){
    //     if(i==0){
    //         arr[i]=0;
    //     }
    //     else{
    //          arr[i]=arr[i-1];
    //     }
    // }
    // for(int i=0;i<n-1;i++){
        
    //     arr[i]=arr[i+1];
    // }
    for(int i=2;i<n-1;i++){
            arr[i]=arr[i+1];
    }
    arr[n-1]=0;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}