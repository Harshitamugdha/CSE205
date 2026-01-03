//selection sort
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={2,5,4,7,3,9};
    for(int i=0;i<6;i++){
        int min=i;
        for(int j=i+1;j<6;j++){
        if(arr[j]<arr[min]){
            min=j;
        }
    }
    swap(arr[i],arr[min]);
}
    for(int i=0;i<6;i++){
        cout<<arr[i]<<' ';
    }
}