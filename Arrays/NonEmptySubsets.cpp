#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
            cin >> arr[i];
        for(int i=0; i<n; i++)
            arr[0] = min(arr[0], arr[i]);

        cout << arr[0] << endl;
    }
    return 0;
}