#include<bits/stdc++.h>
using namespace std;
int a[10];

void yearFinder(int n){
    int i=0;
    while(n>0){
        a[i] = n%10;
        n = n/10;
        i++;
    }
}
int main(){
    int year;
    scanf("%d", &year);
    year = year+1;

    while(1){
        yearFinder(year);
        if(a[0]!=a[1] && a[0]!=a[2] && a[0]!=a[3] && a[1]!=a[2]
           && a[1]!=a[3] && a[2]!=a[3]){
            printf("%d\n", year);
            break;
        }
        else{
            year++;
        }
    }
    return 0;
}
