#include <bits/stdc++.h>
using namespace std;

class FileHandler{
    public:
    vector<int> readFile(const string& path) {
        vector<int> numbers;
        ifstream file(path);
        int num;
        while (file >> num) {
            numbers.push_back(num);
        }
        file.close();
        return numbers;
    }
};

int main() {
    FileHandler fileHandler;
    string path = "numbers.txt";
    vector<int> numbers = fileHandler.readFile(path);
    
    cout << "Numbers read from file:" << endl;
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}