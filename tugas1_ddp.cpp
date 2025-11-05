#include <iostream>
using namespace std;

int main() {
    long totdetik;
    float jam, menit, detik;

    cout << "Masukkan Waktu (detik): ";
    cin >> totdetik;

    jam   = (totdetik / 3600) % 24;
    menit = ((totdetik / 60) % 60);
    detik = totdetik % 60;

    cout << endl;
    cout << totdetik << " detik = "
         << jam << " jam "
         << menit << " menit "
         << detik << " detik." << endl;

    return 0;
}
