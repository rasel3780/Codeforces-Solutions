#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[1010];
    int cnt=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int maxx = a[0];
    int minn = a[0];
    for(int i=1; i<n; i++){
        if(a[i]>maxx){
            cnt++;
            maxx = a[i];
        }
        else if(a[i]<minn){
            cnt++;
            minn = a[i];
        }
    }
    printf("%d\n", cnt);
    return 0;
}
