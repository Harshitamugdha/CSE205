#include <bits/stdc++.h>
using namespace std;

int main() {
    int a1[5] = {1, 2, 3, 6, 7};
    int a2[4] = {4, 5, 8, 9};
    int ans[9];
    
    int p1 = 0, p2 = 0, i = 0;

    // Merge both arrays until one ends
    while (p1 < 5 && p2 < 4) {
        if (a1[p1] < a2[p2]) {
            ans[i++] = a1[p1++];
        } else {
            ans[i++] = a2[p2++];
        }
    }
    while (p1 < 5) ans[i++] = a1[p1++];
    while (p2 < 4) ans[i++] = a2[p2++];
    for (int j = 0; j < 9; j++) {
        cout << ans[j] << ' ';
    }
}
