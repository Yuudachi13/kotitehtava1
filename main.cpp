#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


   void rngpeli (int alaraja, int ylaraja){
   int oikeaLuku = rand()%(ylaraja - alaraja + 1) + alaraja;
   int arvaus;
   int yritykset = 0;
   cout << "Arvaa numero 0-20 valilta" << endl;
   do {
           // Kysytaan pelaajan arvaus
           cout << "Anna arvauksesi: ";
           cin >> arvaus;

           yritykset++; //lasketaan yritykset

           // Tarkistetaan arvaus
           if (arvaus < alaraja || arvaus > ylaraja) {
               cout << "Arvauksesi ei ole annetulla valilla." << endl;
           } else if (arvaus < oikeaLuku) {
               cout << "Koitappa isompaa." << endl;
           } else if (arvaus > oikeaLuku) {
               cout << "Koitappa pienempaa." << endl;
           } else {
               cout << "Okein meni. Luku oli " << oikeaLuku << "." << endl;
               cout <<"Tarvitsit " << yritykset << " yritysta." << endl;
           }
       } while (arvaus != oikeaLuku);





}
   int main()
   {
      cout <<  "RANDMAX = " << RAND_MAX <<endl;
      cout << "Time = " << time(0) <<endl;
      srand(time(0)); //alustetaan numgen
      int alaraja = 0;
      int ylaraja = 20;

      rngpeli (alaraja, ylaraja);    //randompelin kutsuminen


      return 0;
   }
