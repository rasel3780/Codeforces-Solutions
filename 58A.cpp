#include<bits/stdc++.h>
#define FILE freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)
using namespace std;

int main(){
    //FILE;
    char str[110];
    char match[6] = "hello";
    scanf("%s", str);
    
    int j=0;
    for(int i=0; i<strlen(str); i++){
        if(str[i]== match[j])
            j++;
        if(j>=5) break;
    }
    if(j>4)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}