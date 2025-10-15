#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={10,6,4,5,3};
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
for(int i=0;i<5;i++){
    cout<<arr[i]<<' ';
}
}