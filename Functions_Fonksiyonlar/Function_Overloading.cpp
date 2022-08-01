// Function_Overloading.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

int plusFunc(int x, int y) {
	return x + y;
}

double plusFunc(double x, double y) {
	return x + y;
}

int main() {   // Parametrelerin sayısı ve/veya türü farklı olduğu sürece, birden çok işlev aynı ada sahip olabilir.
	int myNum1 = plusFunc(8, 5);
	double myNum2 = plusFunc(4.3, 6.26);
	cout << "Int: " << myNum1 << "\n";
	cout << "Double: " << myNum2;
	return 0;
}