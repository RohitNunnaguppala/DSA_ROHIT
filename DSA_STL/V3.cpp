#include<bits/stdc++.h>
using namespace std;

void printvect(vector<int> &vec){
    cout<<"size:"<<" "<<vec.size()<<endl;
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<endl;
    }
    cout<<endl;
}

int main(){
    int N;
    cin>>N;
    vector<int> v[N];
    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<N;i++){
        printvect(v[i]);
    }
return 0;
}