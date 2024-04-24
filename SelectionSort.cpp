#include <iostream>
using namespace std;

void print(int arr[], int n);
void selectionSort(int arr[], int n);

int main()
{
	int arr[] = {20,12,10,15,2}; //deklrasi variabel
	int i,j,n,temp;
	n = sizeof(arr)/sizeof(int);
	cout<<"Sebelym Array disorting : ";
	print(arr,n);
	selectionSort(arr,n); //memanggil fungsi selction sort
	cout<<"Setelah Array disorting : ";
	print(arr,n);
	return(0);
}

void print(int arr[], int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" "; cout<<endl;
}
void selectionSort(int arr[], int n)
{
	int i,j,min_in;
		for(i=0;i<n;i++) //satu persatu akan disorting data arraynya
		{
			min_in = i; //menemukan elemen min dalam array yang tidak disortir
			for(j=i+1;j<n;j++)
				if (arr[j] < arr[min_in])
					min_in = j;
			swap(arr[i],arr[min_in]); //menukar elemen min yg ditemukan dg elemen pertama
		}
}
