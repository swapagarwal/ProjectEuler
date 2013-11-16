/* Project Euler Problem 14: Longest Collatz sequence
 * The following iterative sequence is defined for the set of positive integers:
 * n → n/2 (n is even)
 * n → 3n + 1 (n is odd)
 * Using the rule above and starting with 13, we generate the following sequence:
 * 13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
 * It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.
 * Which starting number, under one million, produces the longest chain?
 * NOTE: Once the chain starts the terms are allowed to go above one million.
 */

#include <iostream>

using namespace std;

int main()
{
    int m=0,ans,cnt;
    long long tmp;
    for(int i=2;i<1000000;i++)
    {
        tmp=i;cnt=1;
        while(tmp!=1)
        {
            if(tmp&1)tmp=3*tmp+1;
            else tmp/=2;
            cnt++;
        }
        if(cnt>m)
        {
            m=cnt;
            ans=i;
        }
    }
    cout<<ans<<endl;
return 0;
}
