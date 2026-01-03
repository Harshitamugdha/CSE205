#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={7,8,9,10,2,3};
    for(int i=1;i<6;i++){
        int k=arr[i];
        int j=i-1;
       while(j>=0 && arr[j]>k){
            arr[j+1]=arr[j];
            j--;
       }
 arr[j+1]=k;
    }
    for(int m=0;m<6;m++){
        cout<<arr[m]<<endl;
    }
}