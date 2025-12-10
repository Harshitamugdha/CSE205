#include <bits/stdc++.h>
using namespace std;
class A{
    public:
    int a=10;
    void display(){
        cout<<"Value of a: "<<a<<endl;
    }
};
class B: public A{
    public:
    int b=20;
    void display(){
        cout<<"Value of a: "<<a<<endl;
        cout<<"Value of b: "<<b<<endl;
    }
 };
 class C: public B{
    public:
    int c=30;
    void display(){
        cout<<"Value of a: "<<a<<endl;
        cout<<"Value of b: "<<b<<endl;
        cout<<"Value of c: "<<c<<endl;
    }
 };
 int main(){
    A obj1;
    obj1.display();
    B obj2;
    obj2.display();
    C obj3;
    obj3.display();
    return 0;}