#include<bits/stdc++.h>
using namespace std;

int main(){
    char c[110];
    scanf("%s", &c);
    /// binary representation of 64 = 1000000 , 128 = 10000000, 192 = 11000000 , 256=100000000
    int cnt=0;

    for(int i=0; i<strlen(c); i++){
        if(c[i]=='1'){
            for(int j=i; j<strlen(c); j++){
                if(c[j]=='0') cnt++;  /// if we can get 1 and after 1 minimum 6 zeros
            }                         /// we can say that number is divisible by 64
            if(cnt<6) cnt=0;
        }
    }
    if(cnt>=6) printf("yes\n");
    else printf("no\n");

    return 0;
}
