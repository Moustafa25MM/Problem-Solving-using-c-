#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>


using namespace std; //785A-Anton and Polyhedrons




int main()
{
    int n,x=0;
    cin >> n;
    string name;
    for (int i=0;i<n;i++){
        cin >> name;
        if (name == "Tetrahedron")x = x+ 4;
        else if (name == "Cube")x = x+ 6;
        else if (name == "Octahedron")x = x+ 8;
        else if (name == "Dodecahedron")x = x+ 12;
        else if (name == "Icosahedron")x = x+ 20;
    }
    cout << x;
    return 0;
}

