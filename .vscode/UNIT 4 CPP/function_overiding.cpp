#include <bits/stdc++.h>
using namespace std;
class A{
    public:
    void show(){
        cout<<"A";
    }
};
class B:public A{
    public:
    void show(){
        cout<<"B";
    }
};
int main(){
    B obj;
    obj.show();

    return 0;
}