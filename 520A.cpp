#include<bits/stdc++.h>
using namespace std;
int main(){

    string lang = "abcdefghijklmnopqrstuvwxyz";
    int arr[26] = {0};
    int n;
    scanf("%d", &n);
    string str;
    cin>>str;

    //transform(str.begin(), str.end(), str.begin(), ::tolower);

    for(int i=0; i<n; i++){
        if(str[i]>='A' && str[i]<='Z')
            str[i] = str[i]+32;
        for(int j=0; j<26; j++){
            if(str[i]==lang[j]){
                arr[j]++;
                j=26;
            }
        }
    }
    bool flag=true;
    for(int i=0; i<26; i++){
        if(arr[i]<1){
            flag=false;
            break;
        }
    }
    if(flag==true)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
