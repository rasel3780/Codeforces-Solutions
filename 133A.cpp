#include<bits/stdc++.h>
using namespace std;

int main(){
    bool flag = false;
    char str[110];
    scanf("%s", str);

    ///HQ9 produce output and + increment value, so we have to check only HQ9
    for(int i=0; i<strlen(str); i++){
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9'){
            flag = true;
            break;
        }
    }
    if(flag) printf("YES\n");
    else printf("NO\n");

    return 0;
}
