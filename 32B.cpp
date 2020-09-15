#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[210];
    scanf("%s", c);
    for(int i=0; i<strlen(c); i++){
        if(c[i]=='.') {
            printf("0");
        }
        else if(c[i]=='-' && c[i+1]=='-'){
            printf("2");
            i++;
        }
        else{
            printf("1");
            i++;
        }
    }
    printf("\n");
    return 0;
}
