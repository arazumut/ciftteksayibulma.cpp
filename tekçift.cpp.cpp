#include <iostream>

using namespace std;

int main() {
    int sayi;
    int tekSayilar = 0, ciftSayilar = 0;
    int tekToplam = 0, ciftToplam = 0;

    for (int i = 0; i < 10; ++i) {
        cout << i + 1 << ". sayıyı girin: ";
        cin >> sayi;

        if (sayi % 2 == 0) { // Çift sayı kontrolü
            ciftSayilar++;
            ciftToplam += sayi;
        }
        else { // Tek sayı kontrolü
            tekSayilar++;
            tekToplam += sayi;
        }
    }

    cout << "Girilen sayılardan " << tekSayilar << " adedi tek sayıdır." << endl;
    cout << "Tek sayıların toplamı: " << tekToplam << endl;

    cout << "Girilen sayılardan " << ciftSayilar << " adedi çift sayıdır." << endl;
    cout << "Çift sayıların toplamı: " << ciftToplam << endl;

    return 0;
}
