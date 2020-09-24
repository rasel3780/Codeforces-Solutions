#include<bits/stdc++.h>
using namespace std;

int LuckyCounter(long long int num){
    int cnt=0;
    while(num){
        if(num%10==7 || num%10==4){
            cnt++;
        }
        num = num/10;
    }
    return cnt;
}
int main(){
    long long int n;
    scanf("%lld", &n);
    int ans = LuckyCounter(n);
    if(ans==4 || ans==7)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
