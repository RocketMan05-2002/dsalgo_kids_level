#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(10); // wont cause any difference
    
    // set traversal method 1
    for(auto x:s) cout<<x<<" "; // 40 10 30 20 (unordered)
    cout<<endl;

    // set traversal method 2
    for(auto it=s.begin();it!=s.end();it++) cout<<(*it)<<" ";
    cout<<endl;

    // to know the size of unordered set
    cout<<s.size()<<endl;

    //searching for a element in an unordered set
    if(s.find(20)==s.end()) cout<<"not found"<<endl;
    else cout<<"found-"<<*(s.find(20))<<endl;

    //count returns 1/0 unlike find which returns the pointer to the value
    if(s.count(15)) cout<<"found"<<endl;
    else cout<<"not found"<<endl;

    //erasing one particular element by value or its pointer
    s.erase(20);
    auto it = s.find(20);
    s.erase(it);

    s.clear(); // wipes clean the entire unoredred set. :))
    s.size();
}