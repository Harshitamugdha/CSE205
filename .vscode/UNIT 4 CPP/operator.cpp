#include <bits/stdc++.h>
using namespace std;
class counter{
    public:
     int c;
    counter(int cx=0){
        c=cx;
    }
    void operator++(){
        c++;
    }
};
int main(){
    counter c1;
   ++c1;
   cout<<c1.c;
    return 0;
}