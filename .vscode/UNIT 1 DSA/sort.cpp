#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> nums={2,0,2,1,1,0};
   int s=0;
   int e=nums.size()-1;
   int m=0;
   while(m<=e){
    if(nums[m]==2){
        swap(nums[m],nums[e]);
        e--;
    }
    else if(nums[m]==1){
        m++;
    }
    else if(nums[m]==0){
        swap(nums[m],nums[s]);
        s++;
        m++;
    }
   }
     for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}