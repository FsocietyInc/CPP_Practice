// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to print the final array
// after reducing each array element
// by its next smaller element
void printFinalPrices(vector<int>& arr)
{
	// Stores the resultant array
	vector<int> ans;

	// Traverse the array
	for (int i = 0; i < arr.size(); i++) {
		int flag = 1;
		for (int j = i + 1; j < arr.size(); j++) {

			// If a smaller element is found
			if (arr[j] <= arr[i]) {

				// Reduce current element by
				// next smaller element
				ans.push_back(arr[i] - arr[j]);
				flag = 0;
				break;
			}
		}

		// If no smaller element is found
		if (flag == 1)
			ans.push_back(arr[i]);
	}

	// Print the answer
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";
}

// Driver Code
int main()
{
	// Given array
	vector<int> arr = { 8, 4, 6, 2, 3 };

	// Function Call
	printFinalPrices(arr);
	return 0;
}
