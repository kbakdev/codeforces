#include <iostream>
#include <algorithm>

using namespace std;

int pathTogethers(int xA, int yA, int xB, int yB, int xC, int yC) {
    int pathXB = 0, pathXC = 0, pathYB = 0, pathYC = 0;
    
    if (xB > xA){
        if(xC > xA){
            pathXB = xB - xA;
            pathXC = xC - xA;
        }
    } else if(xC < xA){
        pathXB = xA - xB;
        pathXC = xA - xC;
    }
    
    if (yB > yA){
        if(yC > yA){
            pathYB = yB - yA;
            pathYC = yC - yA;
        }
    } else if(yC < yA){
        pathYB = yA - yB;
        pathYC = yA - yC;
    }
    
    return (min(pathXB,pathXC) + min(pathYB,pathYC) + 1);
}

int main() {
    int t, xA, yA, xB, yB, xC, yC;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> xA >> yA;
        cin >> xB >> yB;
        cin >> xC >> yC;
        cout << pathTogethers(xA, yA, xB, yB, xC, yC) << endl;
    }
    return 0;
}
