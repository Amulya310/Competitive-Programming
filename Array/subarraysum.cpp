#include <iostream>
using namespace std;
int main() {
    
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

	int testCases;
	cin >> testCases;

	while (testCases --) {

		int n, s;
		cin >> n >> s;

		int* arr = new int[n];

		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		int start = 0;
		int end = 0;
		int sum = 0;

		bool found = false;

		sum = sum + arr[end];

		while (end < n) {
			cout<<sum<<endl;
			if (sum == s) {
				cout << start + 1 << " " << end + 1 << endl;
				found = true;
				break;
			}
			else if (sum < s) {
				sum = sum + arr[++ end];
			}
			else {
				sum = sum - arr[start ++];
			}

		}

		if (sum > s) {
			while (start != end) {
				sum = sum - arr[start ++];
				if (sum == s) {
					cout << start + 1 << " " << end + 1 << endl;
					found = true;
					break;
				}
				else if (sum < s) {
					break;
				}
			}
		}

		if (found == false) {
			cout << -1 << endl;
		}


	}

}

