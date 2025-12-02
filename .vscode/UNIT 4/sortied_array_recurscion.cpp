#include <bits/stdc++.h>
using namespace std;
int sort(int arr[], int i, int n){
    if(i>=n-1){
        return 1;
    }
    if(arr[i]>arr[i+1]){
        return 0;
    }
    i++;
    return sort(arr,i,n);
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    int result=sort(arr,i,n);
    if(result==1){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
    return 0;
}