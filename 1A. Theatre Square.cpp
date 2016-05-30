#include<bits/stdc++.h>
int main()
{
    long long int n,m,o,a,p=1,l=1;
    scanf("%lld %lld %lld",&n,&m,&a);
    if((n%a)!=0)
    {
        o=(n/a)+1;
        if(a>=m)
            {printf("%lld",o);return 0;}
        else
            {
                if((m%a)!=0)
                    {
                    l=(m/a)+1;
                    printf("%lld",o*l);}
                else
                    {
                    l=m/a;
                    printf("%lld",o*l);return 0;}
                    }
            }
        else
            {
            o=(n/a);
            if(a>=m)
                {printf("%lld",o);return 0;}
            else
                {
                if((m%a)!=0)
                    {
                    l=(m/a)+1;
                    printf("%lld",o*l);return 0;}
                else
                    {
                    l=m/a;
                    printf("%lld",o*l);return 0;}
                }
        }
        return 0;
}
