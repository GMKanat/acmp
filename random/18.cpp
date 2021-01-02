#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include<bits/stdc++.h>
using namespace std;


void multiply(vector<int> &result, int number);


int main()
{
	int number;
	vector<int> result(1, 1);
	for(cin >> number; number > 0; multiply(result, number--));
	transform(result.rbegin(), result.rend(), ostream_iterator<char>(cout), bind2nd(plus<int>(), '0'));

	return 0;
}


void multiply(vector<int> &result, int number)
{
	transform(result.begin(), result.end(), result.begin(), bind2nd(multiplies<int>(), number));
	for(vector<int>::size_type i = 0; i < result.size() - 1; i++)
	{
		result[i + 1] += result[i] / 10;
		result[i] %= 10;
	}
	while(result.back() > 9)
	{
		result.push_back(result.back() / 10);
		result[result.size() - 2] %= 10;
	}
}