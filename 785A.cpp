#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tetrahedron=0;
    int cube=0;
    int octahedron=0;
    int dodecahedron=0;
    int icosahedron=0;
    int n;
    string polyhedrons;

    cin>>n;
    while(n--)
    {
        cin>>polyhedrons;
        if(polyhedrons=="Tetrahedron")
        {
            tetrahedron= tetrahedron+4;
        }
        else if(polyhedrons=="Cube")
        {
            cube=cube+6;
        }
        else if(polyhedrons=="Octahedron")
        {
            octahedron=octahedron+8;
        }
        else if(polyhedrons=="Dodecahedron")
        {
            dodecahedron = dodecahedron+12;
        }
        else
        {
            icosahedron= icosahedron+20;
        }
    }
    cout<<tetrahedron+cube+octahedron+dodecahedron+icosahedron<<"\n";
    return 0;
}
