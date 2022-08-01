// fonksiyon_ReturnKeyword.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

// Önceki örneklerde kullanılan voidanahtar sözcük, işlevin bir değer döndürmemesi gerektiğini belirtir. 
// İşlevin bir değer döndürmesini istiyorsanız, void yerine bir veri türü ( int, string, vb. gibi) kullanabilir 
// ve return işlevin içinde anahtar sözcüğü kullanabilirsiniz:

int myFunction(int x, int y) {
	return x + y;
}

int main() {
	int z = myFunction(5, 3);
	cout << z;
	return 0;
}