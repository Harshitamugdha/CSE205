#include <bits/stdc++.h>
using namespace std;
class Mystack{
    int * arr;
    int n;
    int top;
    public:
    Mystack(){
        n=10;
        arr= new int[n];
        top=-1;
    }
    void push(int x){
        if(top==n){
            cout<<"stack overflow"<<endl;
            return;
        }
    top++;
    arr[top]=x;
    }
void pop(){
    if(top<0){
        cout<<"stack underflow"<<endl;
        return;
    }
     cout<<arr[top--]<<endl;
    }
    void peek(){
        cout<<arr[top]<<endl;
    }
    void isempty(){
        if(top==-1){
            cout<<"true";
        }else{
        cout<<"false";
        }
        cout<<endl;
    }
};
int main(){
    Mystack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    s.peek();
    s.pop();
    s.isempty();
    s.pop();
    s.isempty();
}