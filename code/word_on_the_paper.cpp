#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string grid[8];
        for(int i = 0; i < 8; i++) {
            cin >> grid[i];
        }

        for(int col = 0; col < 8; col++) {
            string word = "";
            for(int row = 0; row < 8; row++) {
                if(grid[row][col] != '.'){
                    word += grid[row][col];
                } else if (!word.empty()) {
                    break;
                }
            }
            
            if(!word.empty()) {
                cout << word << endl;
                break;
            }
        }
    }
    
    return 0;
}

