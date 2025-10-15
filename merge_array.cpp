#include <bits/stdc++.h>
using namespace std;
int main(){
    int a1[5]={1,2,3,6,7};
    int a2[4]={4,5, 8,9};
    int ans[9];
   int p1=0;
   int p2=0;
   for(int i=0;i<9;i++){
    if(a1[p1]>a2[p2]){
        ans[i]=a2[p2];
        p2++;
    }
    else{
        ans[i]=a1[p1];
        p1++;
    }
   }
    for(int i=0;i<9;i++){
        cout<<ans[i]<<' ';
    }
}