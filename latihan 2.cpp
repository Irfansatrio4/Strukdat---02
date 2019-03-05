/*
nama : irfan satrio nugroho
npm : 140810180003
tanggal buat : 05/03/2019
*/

#include <iostream>
#include <string.h>

using namespace std;

struct Theater
{
	int room;
	char seat[3];
	char movieTitle [30];
};

int main ()
{
	Theater nobar;
	nobar.room = 7;
	strcpy(nobar.seat, "j9");
	strcpy(nobar.movieTitle, "Adit & sopo");
	
	cout<<nobar.room<<endl;
	cout<<nobar.seat<<endl;
	cout<<nobar.movieTitle<<endl;
	
}


