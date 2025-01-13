#include<bits/stdc++.h>
using namespace std;

int characterReplacement(string s, int k) {
    int n=s.length();
    vector<int> freq(26,0);
    int l=0;
    int maxfreq=0;
    int maxwin=0;
    int r=0;

    for(r=0;r<n;r++){
        freq[s[r]-'A']++;
        maxfreq=max(maxfreq,freq[s[r]-'A']);
        int winlen=r-l+1;
        if(winlen-maxfreq>k){
            freq[s[r]-'A']--;
            l++;
        }
        maxwin=max(maxwin,r-l+1);
    }
    return maxwin;       
}

int main(){
    string s="ABABBBABB";
    int k=2;
    cout<<characterReplacement(s,k)<<endl;
}