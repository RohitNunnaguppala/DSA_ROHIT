#include <bits/stdc++.h>
using namespace std;

void pattern14(int N)
{
      for(int i=0;i<N;i++){
          for(char ch = 'A'; ch<='A'+i;ch++){
              cout<<ch<<" ";
              
          }
          cout<<endl;
          
      }
}

int main()
{   
    int N = 5;
    pattern14(N);

    return 0;
}