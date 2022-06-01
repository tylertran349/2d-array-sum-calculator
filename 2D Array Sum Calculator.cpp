#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	int nums[2][5] = {{1,2,3,4,5},{6,7,8,9,10}};
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 5; j++) {
			sum += nums[i][j];
		}
	}
	cout << "Sum of the 2D array: " << sum << endl;
}
