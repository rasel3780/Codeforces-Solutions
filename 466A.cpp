#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a, b, cost;
    scanf("%d %d %d %d", &n, &m, &a, &b);

    int spTicketPerRide = b/m;
    int minTicket = min(a, spTicketPerRide);
    if(minTicket>=a)
        cost = a*n;
    else
    {
        int mCoverCost = (n/m)*b;
        int minSingleRideCost = min ((n%m)*a, b);
        cost = mCoverCost+minSingleRideCost;
    }
    printf("%d\n", cost);
    return 0;
}
