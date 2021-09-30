#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{	
	int p, k, t, o;
	float h;
	cout<<"<==================================>\n";
	cout<<"Masukkan Nilai Pemograman Dasar ";
	cin>>p;
	cout<<"<==================================>\n";
	cout<<"Masukkan Nilai Kalkulus ";
	cin>>k;
	cout<<"<==================================>\n";
	cout<<"Masukkan Nilai PTI ";
	cin>>t;
	cout<<"<==================================>\n";
	cout<<"Masukkan Nilai Orkom ";
	cin>>o;
	cout<<"<==================================>\n";
	h =(p+k+t+o)/ 4;
		
	if(h>=75)
	{
		cout<<"Kamu Lulus!!\n";
	}
	else
	{
		cout<<"Kamu Gagal!!\n";
	}
	cout<<"<====================================>\n";
	
	
	

	}