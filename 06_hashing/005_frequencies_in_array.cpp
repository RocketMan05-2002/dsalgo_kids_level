#include<bits/stdc++.h>
using namespace std;
void frequencies(vector <int> &vec){
    //check if the element has been seen before
    int n=vec.size();
    for(int i=0;i<n;i++){
        bool flag = false;
        for(int j=0;j<i;j++){
            if(vec[j]==vec[i]){
                flag = true;
                break;
            }
        }
        if(flag == true) continue;
        // didn't go out of this iteration so far? means its a first occurance
        int freq = 0;
        for(int j=i;j<n;j++){
            if(vec[j]==vec[i]) freq++;
        }
        cout<<vec[i]<<"->"<<freq<<endl;
    }
}
int main(){
    vector<int>vec={10,12,10,15,10,20,12,12};
    frequencies(vec);
    return 0;
}