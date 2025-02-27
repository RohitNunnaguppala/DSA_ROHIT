class Solution {
    public:
        int finalValueAfterOperations(vector<string>& op) {
            int n=op.size();
            int sum=0;
            for(int i=0;i<n;i++){
                if(op[i]=="X++"||op[i]=="++X"){
                    sum+=1;
                }
                else{
                    sum-=1;
                }
            }
            return sum;
        }
    };