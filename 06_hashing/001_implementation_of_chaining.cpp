// DEMO implementation ofchaining

#include<bits/stdc++.h>
using namespace std;
struct myhash{
    int bucket;
    list <int> *table;

    myhash(int b){
        bucket = b;
        table = new list<int>[b];
    }

    void insert(int key){
        int i = key%bucket;
        table[i].push_back(key);
    }

    void delete(int key){
        int i = key%bucket;
        // table[i].remove(key); - in short
        int index=0;
        for(int k=0;k<table[i].length();k++){
            if(table[i][k]==key) index=k;
        }
        //logic to remove element from given position
    }

    bool search(int key){
        int i = key%bucket;
        for(auto x:table[i]){
            if(x==key) return true;
        }
        return false;
    }
};