#include <bits/stdc++.h>
using namespace std;
//i is initialized to low - 1 to indicate that initially there are no elements smaller than the pivot, and to correctly maintain the partition boundary.
int partition(int arr[],int l, int h){
    int p=arr[h];
    int i=l-1;
    for(int j=l;j<h;j++){
        if(arr[j]<p){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}
void quicksort(int arr[], int l,int h){
    int pi=partition(arr,l,h);
    quicksort(arr,l,pi-1);
    quicksort(arr,pi+1,h);
}