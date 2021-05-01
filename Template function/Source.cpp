//Glenn Monie
//CIS 1202
//5/1/2021

#include<cmath>
#include<iostream>

using namespace std;


//template fot half function used for doubles and floats
template<class T>
T half(T num) {

	return num / 2;
}

//this half function accepts an int and returns half of the value rounded to the nearest whole number
int half(int num) {

	return round(static_cast<double>(num) / 2);
}

int main() {

	double a = 5;
	float b = 7.0f;
	int c = 7;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

	system("pause");
	return 0;
}