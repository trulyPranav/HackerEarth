#include <iostream>
#define MAX 100000
using namespace std;

int main() {
	int testCases;
	cin >> testCases;
	while(testCases--){
		int n;
		cin >> n;
		int arr1[MAX],arr2[MAX];
		for(int i=0; i<n; i++)
			cin >> arr1[i];
		for(int i=0; i<n; i++)
			cin >> arr2[i];
		int min=-1,max=-1;
		for(int i=0; i<n; i++){
			if(arr1[i]!=arr2[i]){
				if(min==-1)
					min = i;
				max = i;
			}
		}
		int count = max-min;
		cout << count+1 << endl;
	}
	return 0;
}