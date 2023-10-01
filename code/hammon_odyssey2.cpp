#include<iostream>
#include<vector>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;

    while (test_cases--) {
        int array_size;
        cin >> array_size;
        vector<int> array(array_size);

        for (int i = 0; i < array_size; i++) {
            cin >> array[i];
        }

        int mx = 0x3FFFFFFF; 

        int min_val = mx;
        for (int i = 0; i < array_size; i++) {
            min_val &= array[i];
        }

        int count = 0;
        int current_val = mx;

        for (int i = 0; i < array_size; i++) {
            current_val &= array[i];
            if (current_val == 0) {
                count += 1;
                current_val = mx;
            }
        }

        count += min_val > 0;
        
        cout << count << "\n";
    }
    return 0;
}