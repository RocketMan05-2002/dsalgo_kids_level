#include<bits/stdc++.h>
#include<vector>
#include<list>
using namespace std;
class Hashing{
    private:
        vector<list<int>> hashTable;
        int buckets;
    public:
        Hashing(int size){
            buckets = size;
            hashTable.resize(size);
        }
        int hashValue(int key){
            return key%buckets; // division method of hashing
        }
        void addKey(int key){
            int idx = hashValue(key);
            hashTable[idx].push_back(key);
        }
        list<int>::iterator  searchKey(int key){
            int idx = hashValue(key);
            return find(hashTable[idx].begin(),hashTable[idx].end(),key);
        }
        void deleteKey(int key){
            int idx = hashValue(key);
            if(searchKey(key)!=hashTable[idx].end()){
                // key is present
                hashTable[idx].erase(searchKey(key));
                cout<<key<<" has been deleted"<<endl;
            }else{
                cout<<key<<" is not present in the hashmap, can't delete it"<<endl;
            }
        }
        void display(){
            for(int i = 0; i < buckets; i++){
                cout << "Bucket " << i << ": ";
                for(auto key : hashTable[i]){
                    cout << key << " -> ";
                }
                cout << "NULL" << endl;
            }
        }

};
int main(){
    Hashing h(10);
    h.addKey(1);
    h.addKey(2);
    h.addKey(3);
    h.addKey(4);
    h.addKey(5);
    h.addKey(6);
    h.display();
    return 0;
}