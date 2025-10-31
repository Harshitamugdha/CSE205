#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={10,6,4,5,3};
    int counter=1;
    // for(int i=0;i<5;i++)
    while(counter<5){
        for(int j=0;j<5-counter-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        for(int k=0;k<5;k++){
            cout<<arr[k]<<' ';
        }cout<<endl;
                counter++;

    }
for(int i=0;i<5;i++){
    cout<<arr[i]<<' ';
}
}