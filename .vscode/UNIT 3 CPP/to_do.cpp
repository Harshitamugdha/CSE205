#include <bits/stdc++.h>
using namespace std;
void show(vector<string> &todo, int &count) {
    ifstream file("to_do.txt");
    count = 0;
    string line;
    while (getline(file, line)) {
        todo.push_back(line);
        count++;
    }
    file.close();
}
void insert(vector<string> &todo, int &count) {
    cout << "Enter new task: ";
    string task;
    getline(cin, task);
    todo.push_back(task);
    count++;
    ofstream file("to_do.txt", ios::trunc);
    for (string &t : todo) {
        file << t << endl;
    }
    file.close();
    cout << "Task added"<<endl;
}
void del(vector<string> &todo, int &count) {
    if (count == 0) {
        cout << "No tasks to delete";
        return;
    }
    int pos;
    cout << "Enter task number to delete: ";
    cin >> pos;
    cin.ignore();
    if (pos < 1 || pos > count) {
        cout << "Invalid"<<endl;
        return;
    }
    int idx = pos - 1;
    for (int i = idx; i < count - 1; i++) {
        todo[i] = todo[i + 1];
    }
    count--;         
    todo.pop_back();
    ofstream file("to_do.txt", ios::trunc);
    for (int i = 0; i < count; i++) {
        file << todo[i] << endl;
    }
    file.close();
    cout << "Task deleted!"<<endl;
}
int main() {
    vector<string> todo;
    int count = 0;

    show(todo, count);

    while (true) {
        cout << "===== TO-DO LIST MENU ====="<<endl;
        cout << "1. Add Task"<<endl;
        cout << "2. Display Tasks"<<endl;
        cout << "3. Delete Task"<<endl;
        cout << "Enter choice: ";

        int choice;
        cin >> choice;
        cout<<endl;
        cin.ignore();

        if (choice == 1) {
            insert(todo, count);
        } 
        
        else if (choice == 2) {
            cout << "Your Tasks:"<<endl;
            for (int i = 0; i < count; i++) {
                cout << i + 1 << ". " << todo[i] << endl;
            }
        }

        else if (choice == 3) {
            del(todo, count);
        }
        else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
