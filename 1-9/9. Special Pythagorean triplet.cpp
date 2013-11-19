/* Project Euler Problem 9: Special Pythagorean triplet
 * A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
 * a2 + b2 = c2
 * For example, 32 + 42 = 9 + 16 = 25 = 52.
 * There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 * Find the product abc.
 */

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int tmp,i_sqrt;
    double d_sqrt;
    for(int i=1;i<500;i++)
    {
        for(int j=i+1;j<1000-i;j++)
        {
            tmp=i*i+j*j;
            d_sqrt=sqrt(tmp);
            i_sqrt=d_sqrt;
            if(i_sqrt==d_sqrt)
            {
                if(i+j+i_sqrt==1000)
                {
                    cout<<i*j*i_sqrt<<endl;
                }
            }
        }
    }
return 0;
}
