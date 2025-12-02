#include <bits/stdc++.h>
using namespace std;
class Demo{
    public:
    Demo(){
        cout<<"Object Created"<<endl;
    }
    ~Demo(){
        cout<<"Object Destroyed"<<endl;
    }
};
int main(){
    Demo obj1;
    Demo* obj2 = new Demo();
    
}