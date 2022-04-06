#include <bits/stdc++.h> 
using namespace std; 
void generateSubsets(int start, int setSize, int S[], 
									vector<int>& res) 
{ 
	unsigned int pow_setSize = pow(2, setSize); 
	int sum; 
	for (int counter = 0; counter < pow_setSize; counter++) { 
		sum = 0; 

		for (int j = 0; j < setSize; j++) { 
			if (counter & (1 << j)) 
				sum += S[j + start]; 
		} 
		res.push_back(sum); 
	} 
} 

int numberOfSubsets(int S[], int N, int A, int B) 
{ 
	vector<int> S1, S2; 
	generateSubsets(0, N / 2, S, S1); 
	if (N % 2 != 0) 
		generateSubsets(N / 2, N / 2 + 1, S, S2); 
	else
		generateSubsets(N / 2, N / 2, S, S2); 
	sort(S2.begin(), S2.end()); 

	vector<int>::iterator low, high; 
	int ans = 0; 

	for (int i = 0; i < S1.size(); i++) { 

		low = lower_bound(S2.begin(), S2.end(), A - S1[i]); 
		high = upper_bound(S2.begin(), S2.end(), B - S1[i]); 
		ans += (high - low); 
	} 
	return ans; 
} 
int main() 
{ 
	int S[] = { 1, -2, 3 }; 
	int N = sizeof(S) / sizeof(S[0]); 

	int A = -1, B = 2; 

	cout << numberOfSubsets(S, N, A, B) << endl; 
	return 0; 
} 
