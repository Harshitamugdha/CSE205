#include <bits/stdc++.h>
using namespace std;
int push(int *arr, int &f, int &r,int val){
    if(r==9){
        cout<<"Stack Overflow";
        return -1;
    }
    if(f==-1){
        f=0;
    }
    r++;
    arr[r]=val;
}
int pop(int *arr, int &f, int &r){
    if(f==-1 || f>r){
        cout<<"Stack underflow";
        return -1;
    }
    return arr[f];
    f++; 
}
int main(){
    int arr[10];
    int f=-1;
    int r=-1;
    return 0;
}