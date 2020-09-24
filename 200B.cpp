#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, p;
    double sum = 0.0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &p);
        sum = (p/100.0)+sum;
    }
    double ans = (sum/n)*100;
    printf("%.15lf\n", ans);

    return 0;
}
