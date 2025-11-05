#include <iostream>
using namespace std;

int main() {
    long totdetik;
    float hari, jam, menit, detik;

    cout << "Masukkan Waktu (detik): ";
    cin >> totdetik;

    hari  =totdetik / 86400;
    jam   = (totdetik / 3600) % 24;
    menit = ((totdetik / 60) % 60);
    detik = totdetik % 60;

    cout << endl;
    cout << totdetik << " detik = "
         << hari << " hari "
         << jam << " jam "
         << menit << " menit "
         << detik << " detik." << endl;

    return 0;
}
