#include<bits/stdc++.h>
#include<map>
using namespace std;
int fun(vector<int> &vec){
	int n = vec.size();
	map<int,int>m;
	for(int i=0;i<n;i++){
		m[vec[i]]++;
	}
	int sum=0;
	for(auto it:m){
		if(it.second>1){
			sum+=it.first*it.second;
		}
	}
	return sum;
}
int main(){
	vector<int> vec {1,1,2,1,3,3,3};
	cout<< fun(vec)<<endl;
	return 0;
}