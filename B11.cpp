#include <iostream>

using namespace std;

bool isReverse (string str1, string str2)
{
    int len = str1.length();
    if (len != str2.length()) return false;
    for (int i = 0; i <= len/2; i++) {
	if (str1[i] != str2[len-1-i]) return false;
    }
    return true;
}

int main()
{
    int N;
    cin >> N;
    string arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            if (isReverse(arr[i], arr[j])) {
		int len = arr[i].length();                
		cout << len << ' ' << arr[i][len/2];
                return 0;
            }
        }
    }
    return 0;
}
