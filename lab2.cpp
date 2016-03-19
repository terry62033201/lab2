#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include"bmi.h"
using namespace std;
int main()
{
	float height, mass;
	string detail;

	ofstream fileout("file.out", ios::out);
	if(!fileout){
		cerr << "failed opening" << endl;
		exit(1);
	}
	ifstream filein("file.in", ios::in);
	if(!filein){
		cerr << "failed opening" << endl;
		exit(1);
	}
	Bmi tmr1;
	while(filein >> height >> mass){
		if(height == 0 && mass == 0)
			{
				exit(1);
			}
		else{
		tmr1.set_h(height);
		tmr1.set_m(mass);
		tmr1.cal();
		tmr1.set_cate();

		fileout << tmr1.get_bmi() << tmr1.get_cate() << endl;
		}
	}
}
