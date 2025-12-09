#include <bits/stdc++.h>
using namespace std;
class A{
    public:
    int a=10;
    void display(){
        cout<<"Value of a: "<<a<<endl;
    }
};
class B: public A{ };