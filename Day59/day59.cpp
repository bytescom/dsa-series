// Aggressive Cows Problem
#include <bits/stdc++.h>
using namespace std;


bool isPossible(vector<int> &arr, int N, int C, int minDist) {
    int cows = 1;  
    int lastPos = arr[0];

    for (int i = 1; i < N; i++) {
        if (arr[i] - lastPos >= minDist) {
            cows++;
            lastPos = arr[i];
        }
        if (cows >= C) return true;
    }
    return false;
}


int getMaxMinDistance(vector<int> &arr, int N, int C) {
    sort(arr.begin(), arr.end());

    int low = 1;
    int high = arr[N - 1] - arr[0];
    int ans = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isPossible(arr, N, C, mid)) {
            ans = mid;
            low = mid + 1;  
        } else {
            high = mid - 1;
        }
    }

    return ans;
}

int main() {
    int N = 5, C = 3;
    vector<int> arr = {1, 2, 8, 4, 9};

    cout << getMaxMinDistance(arr, N, C) << endl;

    return 0;
}

