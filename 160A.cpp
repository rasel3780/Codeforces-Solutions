#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, ans, a[110];
    scanf("%d", &n);

    int total=0;
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        total = total+a[i];
    }
    sort(a, a+n);
    int sum=0, cnt=1, rem;

    for(int i=n-1; i>=0; i--){
        sum = sum+a[i];
        rem = total-sum;
        if(sum>rem){
            printf("%d\n", cnt);
            break;
        }
        else cnt++;
    }
    return 0;
}
