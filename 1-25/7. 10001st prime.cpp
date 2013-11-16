/* Project Euler Problem 7: 10001st prime
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
 * What is the 10 001st prime number?
 */

#include <iostream>
#include <algorithm>

using namespace std;

bool isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)return false;
    }
return true;
}

int main()
{
    int cnt=0,i=1;
    while(cnt!=10001)
    {
        i++;
        if(isPrime(i))
        {
            cnt++;
        }
    }
    cout<<i<<endl;
return 0;
}
