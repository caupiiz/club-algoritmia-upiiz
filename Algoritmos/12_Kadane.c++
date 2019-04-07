// C++ program to print largest contiguous array sum
#include <iostream>
#include <climits>
using namespace std;

int maxSubArraySum(int a[], int size) {
	int abs_max = INT_MIN, local_max = 0;

	for (int i = 0; i < size; i++) {
		local_max = local_max + a[i];

		if (abs_max < local_max) abs_max = local_max;

		if (local_max < 0) local_max = 0;
	}
	return abs_max;
} 

/*Driver program to test maxSubArraySum */
int main() {
	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	int n = sizeof(a)/sizeof(a[0]);
	int max_sum = maxSubArraySum(a, n);
	cout << "Maximum contiguous sum is " << max_sum;
	return 0;
}
