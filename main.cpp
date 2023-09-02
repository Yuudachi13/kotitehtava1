#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int ArvoSatunnainenLuku(int maxnum) {
    return rand() % maxnum + 1;
}

int game() {
    srand(time(0));
    int maxnum;
    cout << "Syota korkein arvattava luku: ";
    cin >> maxnum;
    int oikeaLuku = ArvoSatunnainenLuku(maxnum);
    int arvaus;
    int arvaustenMaara = 0;

    do {
        cout << "Anna arvauksesi (1 - " << maxnum << "): ";
        cin >> arvaus;
        arvaustenMaara++;

        if (arvaus < 1 || arvaus > maxnum) {
            cout << "Arvauksesi ei ole annetulla välillä." << endl;
        } else if (arvaus < oikeaLuku) {
            cout << "Koitappa isompaa." << endl;
        } else if (arvaus > oikeaLuku) {
            cout << "Koitappa pienempaa." << endl;
        } else {
            cout << "Oikein meni. Luku oli " << oikeaLuku << "." << endl;
        }
    } while (arvaus != oikeaLuku);

    return arvaustenMaara;
}

int main() {
    int arvaustenMaara = game();
    cout << "Arvasit oikein " << arvaustenMaara << " yrityksella." << endl;

    return 0;
}
