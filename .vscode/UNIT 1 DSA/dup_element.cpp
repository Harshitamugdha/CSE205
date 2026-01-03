#include <bits/stdc++.h>
using namespace std;
int main(){
    int nums[7]={1,2,5,4,3,5,7};
    int maxE=nums[0];
        for(int i=0;i<7;i++){
            if(nums[i]>maxE){
                maxE=nums[i];
            }
        }
        vector <int> freq(maxE+1,0);
        for(int i=0;i<7;i++){
            freq[nums[i]]++;
        }
        for(int i = 0 ; i<maxE+1;i++){
            if(freq[i]>1){cout<<i<<" ";} 
        }
}