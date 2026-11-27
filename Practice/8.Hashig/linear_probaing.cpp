#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

#define SIZE 10

int table[SIZE];

int hashFunction(int key) {
    return key % SIZE;
}

void insert(int key) {
    int index = hashFunction(key);
    
    for (int i = 0; i < SIZE; i++) {
        int newIndex = (index + i) % SIZE;

        if (table[newIndex] == -1 || table[newIndex] == -2) {
            table[newIndex] = key;
            return;
        }
    }
    cout << "Hash table is full.";;
}

bool search(int key) {
    int index = hashFunction(key);
    
    for (int i = 0; i < SIZE; i++) {
        int newIndex = (index + i) % SIZE;

        if (table[newIndex] == -1) {
            return false;
        }
        if (table[newIndex] == key) {
            return true;
        }
    }
    return false;
}

void deletion(int key) {
    int index = hashFunction(key);
    
    for (int i = 0; i < SIZE; i++) {
        int newIndex = (index + i) % SIZE;

        if (table[newIndex] == -1) {
            return;
        }
        if (table[newIndex] == key) {
            table[newIndex] = -2; 
            cout<<"Value Deleted Successfully"<<endl;
            return;
        }
    }
    cout<<"Value not found in the hash table."<<endl;
}

void display() {
    cout << "Hash Table: "<<endl;
    for (int i = 0; i < SIZE; i++) {
        cout<<i<<"->";
        if (table[i] != -1) {
            cout << table[i] << " ";
        }
        else {
            cout << "Empty ";
        }
        cout << endl;
    }
}

int main() {
    for (int i = 0; i < SIZE; i++) {
        table[i] = -1; 
    }

    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    insert(60);
    insert(70);
    insert(80);
    insert(90);
    insert(100);

    display();

    int keyToSearch = 30;
    if (search(keyToSearch)) {
        cout << keyToSearch << " found in the hash table." << endl;
    } else {
        cout << keyToSearch << " not found in the hash table." << endl;
    }

    deletion(30);
    display();

    return 0;
}