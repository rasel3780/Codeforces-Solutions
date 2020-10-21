#include<bits/stdc++.h>
#define FILE freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)
using namespace std;

int digitCounter(int n){
    int cnt = 0;
    while(n>0){
        n = n/10;
        cnt++;
    }
    return cnt;
}
int main(){
    //FILE;
    int t, x;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &x);
        int digit = digitCounter(x);
        int app = x%10;
        int sum = 0;

        for(int i=1; i<app; i++){
            sum = sum+10;
        }
        if(digit==1)
            sum+=1;
        else if(digit==2)   //1+2=3
            sum+=3;
        else if(digit==3)   //1+2+3=6
            sum+=6;
        else
            sum+=10;        //1+2+3+4=10
        printf("%d\n", sum);
    }
    return 0;
}
