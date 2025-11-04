#include <bits/stdc++.h>
using namespace std;
int Demo(){
    int a=10;
    *p=&a;
}
int main(){
    // int m=20;
    // int n=30;
    // int *p=&m;
    // void *a=&n;
    //cout<<*(int*)a;
    //cout<<*static_cast<int*>(a);
    // int arr[5]={10,20,30,40,50};
    // int *p=arr;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // p++;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // int sum=0;
    // for(int i=0;i<5;i++){
    //     sum+=*p;
    //     p++;
    // }
    // cout<<sum<<endl;
    // int x=10;
    // int *y=&x;
    // int **l=&y;
    // cout<<**l<<endl;
    int *p=NULL;
    *p=10;
    cout<<*p;

}