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
    vector<pair<int,int>> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cout<<"enter x and y:"<<endl;
        cin>>x>>y;
        v.push_back({x,y});
    }
    printvect(v);
    return 0;
}