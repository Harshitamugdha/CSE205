#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[3]={1,2,3};
    // for(int i=0;i<3;i++){
    //     for(int j=i;j<3;j++){
    //         int c=0;
    //         for(int k=i;k<=j;k++){
    //             c+=arr[k];
    //         }
    //         cout<<c<<" ";
    //         cout<<endl;
    //     }
    //     }
    for(int i=0;i<3;i++){
        int c=0;
       for(int j=i;j<3;j++){
           c+=arr[j];
           cout<<c<<endl;

       }
    }
}


    