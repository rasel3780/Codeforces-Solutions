#include<bits/stdc++.h>
#define FILE freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)

using namespace std;
int a[110];

void bubble_sort(int len){
    for(int i=0; i<len; i++){
        for(int j=0; j<len-1; j++){
            if(a[j]>a[j+1]){
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i=0; i<len; i++)
        printf("%d ", a[i]);
    printf("\n");
    
}
int main(){
   // FILE;
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++) 
        scanf("%d", &a[i]);
    //sort(a, a+n);
    bubble_sort(n);   

    return 0;
}