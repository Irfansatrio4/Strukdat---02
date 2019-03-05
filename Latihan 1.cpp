/*
nama : irfan satrio nugroho
npm : 140810180003
tanggal buat : 05/03/2019
*/

#include <iostream>
#include <string.h>

using namespace std;

struct Orang {
	int umur;
	char nama[30];
	char jk[2];
	char goldar[2];
};

int main ()
{
	Orang orang;
	orang.umur = 10;
	strcpy(orang.nama, "fahmi");
	strcpy(orang.goldar, "O");
	strcpy(orang.jk, "L");
	
	cout<<orang.umur<<endl;
	cout<<orang.nama<<endl;
	cout<<orang.goldar<<endl;
	cout<<orang.jk<<endl;
}
