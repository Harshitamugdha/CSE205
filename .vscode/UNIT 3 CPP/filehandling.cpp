#include <bits/stdc++.h>
using namespace std;
int main() {
    ifstream file("file.txt");
    if (!file){
        cout << "File not found!";
        return 0;
    }
    else{
        cout << "File opened successfully"<<endl;
    }
    int arr[10];
    int num;
    int i=0;
    while(file >> num){
        arr[i]=num;
        //cout << arr[i] << " ";
        i++;
    }
    for (int j=0;j<i;j++){
        cout << arr[j] << " ";
    }
    cout<<endl;
    file.close();
    return 0;
}