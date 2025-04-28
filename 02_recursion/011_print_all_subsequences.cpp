#include<bits/stdc++.h>
using namespace std;
void F(int ind, vector<int> &curr, vector<int> &vec){
	if(ind==vec.size()){
		cout<<"-";
		for(auto it:curr) cout<<it<<"-";
		cout<<endl;
		return;
	}
	curr.push_back(vec[ind]);
	F(ind+1,curr,vec);
	curr.pop_back();
	F(ind+1,curr,vec);
}
void fun(vector<int> &vec){
	vector<int>curr;
	F(0,curr,vec);
}
int main(){
	vector<int>vec={10,20,30};
	fun(vec);
	return 0;
}