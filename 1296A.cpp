#include<bits/stdc++.h>
#define size 3000
using namespace std;
int main()
{

    int a[size];
    int t,t2,sum;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&t2);
        sum=0;
        int even=0, odd=0;
        for(int j=0;j<t2;j++)
        {
            scanf("%d",&a[j]);
            if(a[j]%2==0)
                even++;
            else
                odd++;
            sum=a[j]+sum;
        }
        if(sum%2==0)
        {
            if(even==t2 || odd==t2)
                printf("NO\n");
            else
                printf("YES\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}
