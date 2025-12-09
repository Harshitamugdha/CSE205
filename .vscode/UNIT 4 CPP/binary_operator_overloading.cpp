#include<bits/stdc++.h>
using namespace std;    
class A{
    int a,b;
    public:
    A(int x=0,int y=0){
        a=x;
        b=y;
    }
    A operator+(A obj){
        A temp;
        temp.a=a+obj.a;
        temp.b=b+obj.b;
        return temp;
    }
};