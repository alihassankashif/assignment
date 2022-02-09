#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "enter the size of array : ";
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	int	INT_MIN = -999;
	int larnum = INT_MIN;
	int seclarnum = INT_MIN;

	for (int i = 0; i < n; i++)
	{
		if (arr[i > larnum])
		{
			seclarnum = larnum;
			larnum = arr[i];
		}
		else
		{
			if (arr[i] > seclarnum && arr[i] < larnum)
			{
				seclarnum = arr[i];
			}
		}
	}

	cout << "the second largest number in an array is : " << seclarnum << endl;



	return 0;
}