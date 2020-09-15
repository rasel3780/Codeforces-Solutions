#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[60];
    int n, t;
    scanf("%d %d", &n, &t);
    scanf("%s", c);

    for(int i=0; i<t; i++){
        for(int i=0; i<n; i++){
            if(c[i]=='B' && c[i+1]=='G'){
                swap(c[i], c[i+1]);
                i++;
            }
        }
    }
    printf("%s\n", c);
    return 0;
}
