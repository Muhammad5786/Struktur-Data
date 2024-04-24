#include <iostream>
using namespace std;

void printArray(int arr[], int n); //fungsi untuk mencetak array
void insertionSort(int arr[], int n); //fungsi insertion sort

int main()
{
	int arr[] = {9, 5, 1, 4, 3}; //deklarasi variabel
	int n = sizeof(arr) / sizeof(int);
	cout<<"Sebelum Array disorting : ";
	printArray(arr,n);
	insertionSort(arr, n); //memanggil fungsi insertion sort
	cout<<"Setelah Array disorting : ";
	printArray(arr, n);
	return(0);
}

void printArray(int arr[], int n)
{
	for (int i=0; i<n; i++)
	{
		cout << arr[i] << " ";
	}
	cout<<endl;
}

void insertionSort(int arr[], int n)
{
	for (int i=1; i<n; i++)
	{
		int key = arr[i];
		int j = i - 1;
			while (key < arr[j] && j >= 0)
			{
				arr[j+1] = arr[j];
				--j;
			}
			arr[j+1] = key;
	}
}
