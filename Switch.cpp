// Switch.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
// break anahtar bloğundaki kodun geri kalanının yürütülmesini "yok saydığı" için çok fazla yürütme süresi kazandırabilir.
// Anahtar default, büyük/küçük harf eşleşmesi olmadığında çalıştırılacak bazı kodları belirtir

#include <iostream>
using namespace std;

int main()
{
    int gun = 4;

	switch (gun)
	{
	  case 1:
		  cout << "Pazartesi"; 
          break;
      case 2:
          cout << "Sali";
          break;
      case 3:
          cout << "Carsamba";
          break;
      case 4:
          cout << "Persembe";
          break;
      case 5:
          cout << "Cuma";
          break;
      case 6:
          cout << "Cumartesi";
          break;
      case 7:
          cout << "Pazar";
          break;

	default:
        cout << "Hafta sonunu dort gozle bekliyorum.";
		break;
	}

    return 0;
}