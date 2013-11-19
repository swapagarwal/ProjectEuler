/* Project Euler Problem 4: Largest palindrome product
 * A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 * Find the largest palindrome made from the product of two 3-digit numbers.
 */

#include <iostream>
#include <algorithm>

using namespace std;

bool isPalindrome(int i)
{
    int n=i,rev=0,digit;
    while(i>0)
    {
        digit=i%10;
        rev=rev*10+digit;
        i/=10;
    }
return n==rev;
}

int main()
{
    int m=0;
    for(int i=100;i<1000;i++)
    {
        for(int j=100;j<1000;j++)
        {
            if(isPalindrome(i*j)){
                m=max(m,i*j);
            }
        }
    }
    cout<<m<<endl;
return 0;
}
