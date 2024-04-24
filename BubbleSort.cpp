#include <iostream>

using namespace std;

void bubbleSort(int n, int arr []) // fungsi bubble sort
{
	int i, j;
	bool flag;
	for(i = 0;i < n;i++)
	{
		flag = false;
		for(j = 0; j<n-i-1; j++)
		{
			//membandingkan nilai array
			if(arr[j] > arr[j+1])
			{
				swap(arr[j],arr[j+1]); //menukar elemen yang ditemukan
				flag = true;
			}
		}
	}
}

int main()
{
	int arr[] = {-2,45,0,11,-9};
	int n = sizeof(arr)/sizeof(int);
	cout<<"Sebelum Array disorting :";
	for(int i=0; i<n; i++) //mencetak array sebelum disorting
		cout<<arr[i]<<" ";
	cout << endl;
	bubbleSort(n,arr); //memanggil fungsi bubble sort
	cout<<"Setelah Array disorting :";
	for(int i=0;i<n;i++) //mencetak array setelah disorting
		cout<<arr[i]<<" ";
	return(0);
}
