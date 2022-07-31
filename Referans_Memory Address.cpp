// Referans_Memory Address.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include<string>
using namespace std;

int main()
{ // Referans değişkeni, var olan bir değişkene "referanstır" ve & operatörle birlikte oluşturulur:
	string gida = "Lahmacun"; // gıda değişkeni
	string &yemek = gida;     // gıdaya referans

	cout << gida << "\n";
	cout << yemek << "\n";

    // bir değişken oluşturulduğunda, değişkene bir bellek adresi atanır. Değişkene bir değer atadığımızda ise 
	// bu hafıza adresine kaydedilir.
	cout << &yemek;

	return 0;
}