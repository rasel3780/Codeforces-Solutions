#include<bits/stdc++.h>
using namespace std;

int main(){
    bool check = true;
    string s1, s2, s3, s4;

    cin>>s1>>s2>>s3;
    s4 = s1+s2;
    sort(s3.begin(), s3.end());
    sort(s4.begin(), s4.end());
    if(s3==s4) printf("YES\n");
    else printf("NO\n");

    return 0;
}
