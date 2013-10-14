/*Project Euler Problem 5: Smallest multiple
 *2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 *What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 */

#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a,int b)
{
    if(b==0)return a;
    else return gcd(b,a%b);
}

int main()
{
    int ans=1,tmp;
    for(int i=1;i<=20;i++){
        tmp=gcd(ans,i);
        ans=max(ans*i/tmp,ans);
    }
    cout<<ans<<endl;
return 0;
}
