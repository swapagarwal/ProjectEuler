/* Project Euler Problem 15: Lattice paths
 * Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.
 * How many such routes are there through a 20×20 grid?
 */

#include <iostream>

using namespace std;

int main()
{
    long long ans=1;
    for(int i=0;i<20;i++)
    {
        ans*=(40-i);
        ans/=(i+1);
    }
    cout<<ans<<endl;
return 0;
}
