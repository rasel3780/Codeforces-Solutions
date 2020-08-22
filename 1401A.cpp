#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &n, &k);
        if(n==k)
        {
            printf("0\n");
        }
        else if(n<k)
        {
            printf("%d\n", k-n);
        }
        else if (n>k)
        {
            if(n%2==1 && k%2==0)printf("1\n");
            else if(n%2==0 && k%2==1)printf("1\n");
            else printf("0\n");
        }
    }
}
