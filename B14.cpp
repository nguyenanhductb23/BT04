#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int A[n], B[n+1];
    int sumA = 0, sumB = 0;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        sumA += A[i];
    }
    for (int i = 0; i <= n; i++) {
        cin >> B[i];
        sumB += B[i];
    }
    int ans = sumB - sumA;
    cout << ans;
    return 0;
}
