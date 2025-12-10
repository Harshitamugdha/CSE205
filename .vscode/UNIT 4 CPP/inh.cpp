#include<bits/stdc++.h>
using namespace std;

class area{
    public:
    int L,B;
    area(int a, int b){
        L=a;
        B=b;
    }
    void getarea(){
        cout<<L*B;
    }
};
class square: public area{
    public:
    int x;
    square(int y):area(y,y){
        cout<<y*y;
    }
};
int main(){
    area obj(2, 5);
    obj.getarea();
    cout<<endl;
    square obj1(6);
    
}