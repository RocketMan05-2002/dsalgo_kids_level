#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int>m;
    m["gfg"] = 10;
    m["ide"] = 20;
    m.insert({"courses",30});
    
    for(auto x:m) cout<<x.first<<" "<<x.second<<endl;

    if(m.find("ide")!=m.end())cout<<"found";
    else cout<<"not found";

    auto it = m.find("ide");
    if(it!=m.end())cout<<it->second<<" ";
    cout<<endl;

    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    if(m.count("ide"))cout<<"found";
    else cout<<"not found";

    cout<<m.size();
    m.erase("ide");
    m.erase(m.begin());
    m.erase(m.begin(),m.end());
}