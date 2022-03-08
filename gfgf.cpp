#include<bits/stdc++.h>
using namespace std;
int main()
{
 class Solution{
    public:
        // Complete this function
    long long factorial(int N) {
        int sum=1;
        for(int i=2;i<=N;i++)
             sum=sum*i;
            return sum ;
    }
};
}
