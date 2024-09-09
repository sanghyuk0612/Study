#include<iostream>

using namespace std;

void merge(int* arr, int first, int mid, int last)
{
	int* sorted = new int[last - first + 1];
	int i, j, k;
	i = first;		// First arr idx
	j = mid + 1;	// Second arr idx
	k = 0;			// Sorted arr idx
	while (i <= mid && j <= last)
	{
		if (arr[i] <= arr[j]) sorted[k++] = arr[i++];
		else sorted[k++] = arr[j++];
	}
	if (i > mid)
		while (j <= last) sorted[k++] = arr[j++];
	else
		while (i <= mid) sorted[k++] = arr[i++];

	for (i = first, k = 0; i <= last; i++, k++) arr[i] = sorted[k];

	delete[] sorted;
}
void mergeSort(int* arr, int first, int last)
{
	if (first < last)
	{
		int mid = (first + last) / 2;
		mergeSort(arr, first, mid);
		mergeSort(arr, mid + 1, last);
		merge(arr, first, mid, last);
	}
}


int main(void) { 
	int n;
	cin >> n;
    int* arr = new int[n];
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
    }
    mergeSort(arr, 0, n-1);
	for (int i = 0;i < n;i++) {
        cout << arr[i] << "\n";
	}
}
