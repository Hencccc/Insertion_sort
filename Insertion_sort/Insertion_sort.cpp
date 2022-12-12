using namespace std;
#include <iostream>
#include <vector>

vector<int> InsertionSort(vector<int> v, int n);

int main()
{
	vector<int> items = { 5, 3 ,11, 10, 7, 2, 20, 11,11,11, 12, 800,800, -1, 639, 69 };
	items = InsertionSort(items, items.size());

	printf("\ncontents of items after sorting:\n");
	for (int i = 0; i < items.size(); i++)
	{
		printf("%d  ", items[i]);
	}
}

vector<int> InsertionSort(vector<int> v, int n) {
	int temp;
	for (int i = 1; i < n; ++i)
	{
		for (int j = i; (j >= 1) && (v[j - 1] > v[j]); --j)
		{
			temp = v[j];
			v[j] = v[j - 1];
			v[j - 1] = temp;
		}
	}

	return v;
}