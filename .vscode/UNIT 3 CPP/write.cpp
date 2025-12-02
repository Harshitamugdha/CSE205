#include <bits/stdc++.h>
using namespace std;
int main(){
    ofstream file("file1.txt");
    string arr[3]={"This is line one.","This is line two.","This is line three."};
    for(int i=0;i<3;i++){
        file<<arr[i]<<endl;
    }
}