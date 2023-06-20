#include<iostream>
#include<string>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int totalFaces = 0;
    for(int i = 0; i < n; i++) {
        string polyhedron;
        cin >> polyhedron;
        
        if(polyhedron == "Tetrahedron") {
            totalFaces += 4;
        } else if(polyhedron == "Cube") {
            totalFaces += 6;
        } else if(polyhedron == "Octahedron") {
            totalFaces += 8;
        } else if(polyhedron == "Dodecahedron") {
            totalFaces += 12;
        } else if(polyhedron == "Icosahedron") {
            totalFaces += 20;
        }
    }
    
    cout << totalFaces << endl;
    
    return 0;
}

