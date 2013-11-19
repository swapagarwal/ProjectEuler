/* Project Euler Problem 17: Number letter counts
 * If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.
 * If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?
 * NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20 letters. The use of "and" when writing out numbers is in compliance with British usage.
 */

#include <iostream>

using namespace std;

int main()
{
    string unit[]={"one","two","three","four","five","six","seven","eight","nine"};
    string ex[]={"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string ten[]={"ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    string hundred="hundred";
    string a="and";
    string thousand="thousand";
    string ans;
    for(int i=1;i<=1000;i++){
        if(i<10)ans+=unit[i-1];
        else if(i<100){
            if(i%10==0)ans+=ten[i/10-1];
            else{
                if(i<20)ans+=ex[i-11];
                else ans+=ten[i/10-1]+unit[i%10-1];
            }
        }
        else if(i<1000){
            if(i%100==0)ans+=unit[i/100-1]+hundred;
            else{
                ans+=unit[i/100-1]+hundred+a;
                if((i%100)<10)ans+=unit[i%100-1];
                else{
                    if(i%10==0)ans+=ten[(i%100)/10-1];
                    else{
                        if((i%100)<20)ans+=ex[(i%100)-11];
                        else ans+=ten[(i%100)/10-1]+unit[(i%100)%10-1];
                    }
                }
            }
        }
        else ans+=unit[0]+thousand;
    }
    cout<<ans.size()<<endl;
return 0;
}
