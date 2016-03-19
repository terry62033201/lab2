#include<iostream>
#include<string>
using namespace std;

class Bmi{
	public:
		void set_h(float h);
		void set_m(float m);
		float get_bmi();
		void cal();
		void set_cate();
		string get_cate();
	private:
		float height, mass, bmi;
		string cate;
};
