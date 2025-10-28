#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[7]={10,20,30,40,50,60,70};
    int k=3;
    int sum=0;
    int ans[7];
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    ans[0]=sum;
    for(int i=1;i<7;i++){
        sum=sum-arr[i-1]+arr[i+k];
        ans[i]=sum;
    }
    sort(ans,ans+7);
    cout<<ans[6];
}