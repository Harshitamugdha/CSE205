#include <bits/stdc++.h>
using namespace std;
class B;
class A{
    private:
        int a;
    public:
     A(int x) {
        a = x;
    }
        friend void Compare(A,B);
};
class B{
    private:
        int b;
    public:
    B(int y) {
        b = y;
    }

        friend void Compare(A,B);
};
void Compare(A x, B y){
    if(x .a > y.b){
        cout<<"A"<<endl;
    }
    else{
        cout<<"B"<<endl;
    }
}
int main(){
    A obj1(30);
    B obj2(20);
    Compare(obj1, obj2);
    return 0;
}