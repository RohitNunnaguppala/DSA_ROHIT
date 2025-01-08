//(NlogN)
#include <bits/stdc++.h>
using namespace std;

int searchmin(vector<int> nums){
    sort(nums.begin(),nums.end());
    return nums[0];
}
int main() {
   vector<int> nums={4,5,6,7,0,1,2};
   bool minele=searchmin(nums);
   cout<<minele;

    return 0;
}

//(NlogN)
#include <bits/stdc++.h>
using namespace std;

int searchmin(vector<int> nums){
    int n=nums.size();
    int l=0;
    int h=n-1;
    while(l<h){
        int m=(l+h)/2;
        if(nums[m]>nums[h]){
            l=m+1;
        }
        else{
            h=m;
        }
    }
    return nums[l];
}
int main() {
   vector<int> nums={4,5,6,7,0,1,2};
   bool minele=searchmin(nums);
   cout<<minele;

    return 0;
}