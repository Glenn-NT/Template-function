//Glenn Monie
//CIS 1202
//5/1/2021

#include<iostream>

using namespace std;

template<class T>
T half(T num) {

	return num / 2;
}

int main() {

	double a = 5;
	float b = 7.0f;

	cout << half(a) << endl;
	cout << half(b) << endl;

	system("pause");
	return 0;
}