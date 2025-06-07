class Solution {
public:
    bool lemonadeChange(vector<int>& a) {
        int f=0;
        int t=0;
        for(int i=0;i<a.size();i++){
        if(a[i]==5){
            f+=1;
        }
        else if(a[i]==10){
            if(f){
                f-=1;
                t+=1;
            }
            else return false;
        }
        else {
            if(t&&f){
                t-=1;
                f-=1;
            }
            else if(f>=3){
                    f-=3;
            }
            else {
                    return false;
                }
        }
        }
        return true;
    }
};