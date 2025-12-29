#include <bits/stdc++.h>
using namespace std;
#define EMPTY -1
#define DELETED -2
#define SIZE 7
class HashTable {
    int table[SIZE];

public:
    HashTable() {
        for (int i = 0; i < SIZE; i++)
            table[i] = EMPTY;
    }

    void insert(int key) {
        int index = key % SIZE;

        while (table[index] != EMPTY && table[index] != DELETED)
            index = (index + 1) % SIZE;
            //index = (hashFunction(key) + i * i) % SIZE;

        table[index] = key;
    }

    bool search(int key) {
        int index = key % SIZE;
        int start = index;

        while (table[index] != EMPTY) {
            if (table[index] == key)
                return true;

            index = (index + 1) % SIZE;
            if (index == start)
                break;
        }
        return false;
    }

    void remove(int key) {
        int index = key % SIZE;

        while (table[index] != EMPTY) {
            if (table[index] == key) {
                table[index] = DELETED;
                return;
            }
            index = (index + 1) % SIZE;
        }
    }
};
