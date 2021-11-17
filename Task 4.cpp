#include<iostream>
#include<vector>
using namespace std;

int Partition(vector<int>& v, int start, int end) 
{
	int p = end;
	int j = start;
	for (int i = start; i < end; ++i) 
	{
		if (v[i] < v[p]) 
		{
			swap(v[i], v[j]);
			++j;
		}
	}
	swap(v[j], v[p]);
	return j;
}
void Quicksort(vector<int>& v, int start, int end) 
{
	if (start < end) 
	{
		int p = Partition(v, start, end);
		Quicksort(v, start, p - 1);
		Quicksort(v, p + 1, end);
	}
}

int main()
{
	int n;
	vector<int> v;

	cout << "Enter Size of Vector : ";
	cin >> n;
	v = vector<int>(n);
	cout << "Enter Elements of Vector : ";
	for (int i = 0; i < n; ++i) 
	{
		cin >> v[i];
	}
	Quicksort(v, 0, v.size() - 1);
	cout << "Vector After Sorting: ";
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	return 0;
}
