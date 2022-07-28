// Conditions_If_Statements.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

int main()
{
    //if
    int x = 20;
    int y = 18;
    if (x > y) {
        cout << "x,y'den buyuk.";
    }

    cout << "\n\n";

    // if else
    int zaman = 20;
    if(zaman < 18) {
        cout << "Iyi gunler.";
    } else{
      cout << "Iyi aksamlar.";
    }

    cout << "\n\n";


    // else if
    int time = 22;
    if (time < 10) {
        cout << "Gunaydin.";
    }
    else if (time < 20) {
        cout << "Iyi gunler.";
    }
    else {
        cout << "Iyi aksamlar.";
    }

    cout << "\n\n";

    // Birden çok kod satırını tek bir satırla değiştirmek için kullanılabilir
    // degisken = (koşul) ? ifade Doğru: ifade Yanlış;
    int timer = 20;
    string result = (timer > 18) ? "Iyi gunler." : "Iyi aksamlar.";
    cout << result;

    return 0;
}

