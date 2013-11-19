/* Project Euler Problem 20: Factorial digit sum
 * n! means n × (n − 1) × ... × 3 × 2 × 1
 * For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
 * and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.
 * Find the sum of the digits in the number 100!
 */

#include <iostream>

using namespace std;

int main()
{
    int n=100,a[200],m,tmp,carry,ans=0;
    a[0]=1;m=1;tmp=0;carry=0;
    for(int i=2;i<n+1;i++){
        for(int j=0;j<m;j++){
            tmp=a[j]*i+carry;
            a[j]=tmp%10;
            carry=tmp/10;
        }
        while(carry>0){
            a[m++]=carry%10;
            carry/=10;
        }
    }
    for(int i=0;i<m;i++)ans+=a[m-i-1];
    cout<<ans<<endl;
return 0;
}
