#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    A(){
        cout<<"Constructor of A"<<endl;
    }
    ~A(){
        cout<<"Destructor of A"<<endl;
    }
};
class B: public A{
    public:
    B(){
        cout<<"Constructor of B"<<endl;
    }
    ~B(){
        cout<<"Destructor of B"<<endl;
    }
};
int main(){
    B objB;
    return 0;
}