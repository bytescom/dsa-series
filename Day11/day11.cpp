int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<long long> L(N);

        for (int i = 0; i < N; ++i) {
            cin >> L[i];
        }

        Solution sol;
        int result = sol.minDaysToMakeStrictlyDecreasing(L);
        cout << result << endl;
    }

    return 0;
}
