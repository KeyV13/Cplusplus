// Loop_while_do-while_Dongu.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

int main()
{
	// Aşağıdaki örnekte, bir değişken ( i ) 5'ten küçük olduğu sürece döngüdeki kod tekrar tekrar çalışacaktır.
	int i = 0;
	while (i < 5) {
		std::cout << i << "\n";
		i++;   // Not: Koşulda kullanılan değişkeni artırmayı unutmayın, aksi takdirde döngü asla bitmez!
	}

	std::cout << "\n*****\n";

	// Aşağıdaki örnek bir do/whiledöngü kullanmaktadır. Kod bloğu koşul test edilmeden önce yürütüldüğünden, 
	// koşul yanlış olsa bile döngü her zaman en az bir kez yürütülür.

	int j = 0;
	do {
		std::cout << j << "\n";
		j++;
	} while (j < 5);

	return 0;
}