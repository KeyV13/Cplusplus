// Siniflar_OOP.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

class myClass {
public:
	int numaram;
	string stringim;
};

int main() {
	myClass nesnem;
	nesnem.numaram = 15;
	nesnem.stringim = "C++ nesne yönelimli bir programlama dilidir.";
	cout << nesnem.numaram << "\n";
	cout << nesnem.stringim;
	return 0;

}