#include <iostream>

using namespace std;

string balancedSums(int arr[], int n) {
    int left_sum = 0, right_sum = 0;
    for (int i = 1; i < n; i++)
        right_sum += arr[i]; 
    for (int i = 1; i < n && left_sum != right_sum; i++) {
        left_sum += arr[i-1];
        right_sum -= arr[i];
    }
    if (left_sum == right_sum) return "YES";
    else return "NO";
}

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << balancedSums (arr, n) << endl;
    }
    return 0;
}
