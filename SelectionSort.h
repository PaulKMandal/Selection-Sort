#include <iostream>

using namespace std;

int * SelectionSort(int arr[])
{
	if (sizeof(arr) == 0)
	{
		cout << "Could not sort array, 0 returned";
		return {0};
	}

	else
	{
		for (int x = 0; x < sizeof(arr); x++)
		{
			int LowestIndex = x;

			for (int y = x + 1; y < sizeof(arr); y++)
			{
				if (arr[y] < arr[x])
				{
					LowestIndex = y;
				}
			}

			int temp = arr[x];
			arr[x] = arr[LowestIndex];
			arr[LowestIndex] = temp;
		}

		return arr;
	}
}