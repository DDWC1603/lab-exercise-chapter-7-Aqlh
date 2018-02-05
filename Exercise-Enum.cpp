

//aqilah syhairah a17dw2330
//if the day is sunday, what day is it?
//write your code using enum and Sunday is your default 'day'

#include<iostream>
using namespace std;

enum minggu_hariIni {isnin,selasa,rabu,khamis,jumaat,sabtu,ahad};

int main()

{
	minggu_hariIni hari;
	hari = isnin;
	cout<<"Hari ke-"<<hari+1;
  return 0;
}


