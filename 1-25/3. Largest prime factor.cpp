/*Project Euler Problem 3: Largest prime factor
 *The prime factors of 13195 are 5, 7, 13 and 29.
 *What is the largest prime factor of the number 600851475143 ?
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPrime(long long n)
{
    bool flag=true;
    if(n==1)
    {
        return false;
    }
    else
    {
        for(long long i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                flag=false;
                break;
            }
        }
    }
    return flag;
}

int main()
{
    long long n=600851475143;
    vector<long long> factors;
    factors.push_back(1);
    factors.push_back(n);
    for(long long i=2;i*i<=n;++i){
        if(n%i==0){
            factors.push_back(i);
            if(i*i!= n)factors.push_back(n/i);
        }
    }
    sort(factors.begin(), factors.end());
    for(int i=factors.size()-1;i>=0;i--)
    {
        if(isPrime(factors[i]))
        {
            cout<<factors[i]<<endl;
            break;
        }
    }
return 0;
}
