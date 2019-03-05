/*
Nama : irfan satrio nugroho
NPM : 140810180003
Tanggal buat : 05/03/18
*/

#include <iostream>

using namespace std;

void moveZeroToEnd (int arr[], int n){
}
void input (int (&arr)[100], int& n)
{
	arr 	data;
	int n;
	cout<<"Masukan nilai data : ";
	cin>>n;
		for (int i=0; i<n; i++)
			if (arr[i] != 0)
            swap(arr[count++], arr[i]);
}
void output (int (arr[],int n)){
	  cout << "Hasil  : ";
    for (int i = 0;i<n;i++)
    cout << arr[i] << " ";
}

int main ()
{
	int arr[100];
	int n;
	input (arr,n);
	moveZeroToEnd(arr,n);
	output (arr,n);
}
