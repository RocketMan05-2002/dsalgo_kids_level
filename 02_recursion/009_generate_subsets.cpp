#include<iostream>
using namespace std;
void sets(int ind, string curr, string &str){
    if(ind==str.length()){
        cout<<curr<<endl;
        return;
    }
    sets(ind+1,curr,str);
    sets(ind+1,curr+str[ind],str);
}
int main(){
    string str="ABC";
    sets(0,"",str);
    return 0;
}