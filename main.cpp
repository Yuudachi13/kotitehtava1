#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
   cout <<  "RANDMAX = " << RAND_MAX <<endl;
   cout << "Time = " << time(0) <<endl;
   srand(time(0)); //alustetaan numgen
   int alaraja = 1;
   int ylaraja = 20;
   int oikeaLuku = rand()%20;
   int arvaus;

   do {
           // Kysytaan pelaajan arvaus
           cout << "Anna arvauksesi: ";
           cin >> arvaus;

           // Tarkistetaan arvaus
           if (arvaus < alaraja || arvaus > ylaraja) {
               cout << "Arvauksesi ei ole annetulla valilla." << endl;
           } else if (arvaus < oikeaLuku) {
               cout << "Koitappa isompaa." << endl;
           } else if (arvaus > oikeaLuku) {
               cout << "Koitappa pienempaa." << endl;
           } else {
               cout << "Okein meni. Luku oli " << oikeaLuku << "." << endl;
           }
       } while (arvaus != oikeaLuku);



    return 0;
}
