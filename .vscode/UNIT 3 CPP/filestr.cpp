#include <bits/stdc++.h>
using namespace std;
int main() {
    ifstream file("file1.txt");
    if (!file){
        cout << "File not found!";
        return 0;
    }
    else{
        cout << "File opened successfully"<<endl;
    }
    string s;
    while(getline(file, s)){
         cout <<  s<<endl;
    }
    return 0;
}