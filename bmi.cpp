#include<iostream>
#include<cmath>
#include"bmi.h"

void Bmi::set_h(float h){
	height = h;
	}
void Bmi::set_m(float m){
	mass = m;
}
void Bmi::cal(){
	bmi = mass / pow(height / 100, 2);

}
float Bmi::get_bmi(){
	return bmi;
}

void Bmi::set_cate(){
	if(bmi < 15.0)
		 cate = "\tVery severely underweight";
	else if(15.0 < bmi && bmi < 16.0)
		 cate = "\tSeverely underweight";
	else if(16.0 < bmi && bmi < 18.5)
		 cate = "\tUnderweight";
	else if(18.5 < bmi && bmi < 25)
		 cate = "\tNormal";
	else if(25 < bmi && bmi < 30)
		 cate = "\tOverweight";
	else if(30 < bmi && bmi < 35)
		 cate = "\tObese Class I(Moderately obese)";
	else if(35 < bmi && bmi < 40)
		 cate = "\tObese Class II(Severely obese)";
	else if(bmi >= 40)
		 cate = "\tObese Class III(Very severely obese)";
}
string Bmi::get_cate(){
	return cate;
}
