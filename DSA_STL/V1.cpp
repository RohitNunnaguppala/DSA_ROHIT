#include<bits/stdc++.h>
using namespace std;

void printvect(vector<pair<int,int>> &vec){
    cout<<"size:"<<" "<<vec.size()<<endl;
    for(int i=0;i<vec.size();i++){
        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }
    cout<<endl;
}

int main(){
    vector<pair<int,int>>v={{1,2},{2,3},{3,4}};
    printvect(v);
}