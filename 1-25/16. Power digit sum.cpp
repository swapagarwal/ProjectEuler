/* Project Euler Problem 16: Power digit sum
 * 215 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
 * What is the sum of the digits of the number 21000?
 */

#include <iostream>

using namespace std;

int main()
{
    int n[1000],m,tmp,carry,sum=0;
    n[0]=1;m=1;tmp=0;carry=0;
    for(int i=0;i<1000;i++){
        for(int j=0;j<m;j++){
            tmp=n[j]*2+carry;
            n[j]=tmp%10;
            carry=tmp/10;
        }
        while(carry>0){
            n[m++]=carry%10;
            carry/=10;
        }
    }
    for(int i=0;i<m;i++)sum+=n[m-i-1];
    cout<<sum<<endl;
return 0;
}
