#include<bits/stdc++.h>
#define FILE freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)
using namespace std;

int main(){
    //FILE;
    int n;
    long long int a[100010];
    
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%lld", &a[i]);
    sort(a, a+n);

    int sp=0, serveTime=0;
    for(int i=0; i<n; i++){
        if(a[i]>=serveTime){
            sp++;
            serveTime += a[i];
        }
    }
    printf("%d\n", sp);
    return 0;
}