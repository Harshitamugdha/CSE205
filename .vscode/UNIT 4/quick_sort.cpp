#include <bits/stdc++.h>
using namespace std;
void sort(int arr[], int low, int high){
    if(low>=high) return;
    int p=arr[high];
    int c=low-1;
    for(int i=low;i<high;i++){
        if(arr[i]<=p){
            c++;
            swap(arr[i],arr[c]);
        }
    }
    swap(arr[c+1],arr[high]);
    int pi=c+1;
    sort(arr,low,pi-1);
    sort(arr,pi+1,high);    
}