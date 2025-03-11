#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    vector<vector<int>> arr;
    arr.resize(n);
 // Create outer vector with 'n' rows

    // Resize each inner vector to the correct size
    for (int i = 0; i < n; i++) {
        arr[i].resize(i + 1); // Each row has 'i + 1' elements
    }

    // Populate the Pascal's Triangle
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                arr[i][j] = 1; // First and last elements of a row are 1
            } else {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
    }

    // Print Pascal's Triangle
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
