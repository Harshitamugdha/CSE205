#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1="Harshita";
    string s2 = "Mugdha";
    string s3= s1 +" "+ s2;
    // cout<<s3<<endl;
    // s3.append(" Sinha");
    // cout<<s3<<endl;
    // cout<<s3.size()<<endl;
    // cout<<s3.length()<<endl;
    // for(int i=0;i<s3.size();i++){
    //     cout<<s3.at(i)<<' ';
    // }
    cout<<s3.substr(2,7)<<endl;
    cout<<s3.find("ugdh")<<endl;
    cout<<s3.empty()<<endl;
    cout<<s3.insert(0,"itsss ")<<endl;
}