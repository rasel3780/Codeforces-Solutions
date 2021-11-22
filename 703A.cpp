#include<bits/stdc++.h>
#define FILE freopen("input.txt","r",stdin), freopen("output.txt","w",stdout)
using namespace std;

int main(){
   //FILE;
    int n,m,c;
    int mishka=0;
    int chris=0;
    scanf("%d", &n);
    while(n--){
        scanf("%d %d", &m, &c);
        if(m>c){
             mishka++;
        }
        else if(m<c){
            chris++;
        }
    }
    
    if(mishka>chris){
        printf("Mishka\n");
    }
    else if(mishka<chris){
        printf("Chris\n");
    }
    else{
        printf("Friendship is magic!^^\n");
    }
}