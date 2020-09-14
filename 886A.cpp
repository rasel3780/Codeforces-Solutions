#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6];
    bool check = false;
    int triSum, sum=0;

    for(int i=0; i<6; i++){
        scanf("%d", &a[i]);
        sum = sum+a[i];
    }
    if(sum%2==0){
        for(int i=0; i<6; i++){
            for(int j=i+1; j<6; j++){
                for(int k=j+1; k<6; k++){
                    triSum = a[i]+a[j]+a[k];
                    if(triSum == sum/2){
                        check = true;
                        break;
                    }
                }
            }
        }
    }
    if (check) printf("YES\n");
    else printf("NO\n");
    return 0;
}

