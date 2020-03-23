#include <iostream>
#include "BazaTestu.hh"

using namespace std;




/*int main(int argc, char **argv)
{

  if (argc < 2) {
    cout << endl;
    cout << " Brak opcji okreslajacej rodzaj testu." << endl;
    cout << " Dopuszczalne nazwy to:  latwy, trudny." << endl;
    cout << endl;
    return 1;
  }


  BazaTestu   BazaT = { nullptr, 0, 0 };

  if (InicjalizujTest(&BazaT,argv[1]) == false) {
    cerr << " Inicjalizacja testu nie powiodla sie." << endl;
    return 1;
  }


  
  cout << endl;
  cout << " Start testu arytmetyki zespolonej: " << argv[1] << endl;
  cout << endl;

  WyrazenieZesp   WyrZ_PytanieTestowe;
  
  while (PobierzNastpnePytanie(&BazaT,&WyrZ_PytanieTestowe)) {
    cout << " Czesc rzeczywista pierwszego argumentu: ";
    cout << WyrZ_PytanieTestowe.Arg1.re << endl;
  }

  
  cout << endl;
  cout << " Koniec testu" << endl;
  cout << endl;

  }*/

int main(){
  
  LZespolona L1, L2, Wynik;
  char znak;
  
  cout << "Podaj liczbe zespolona" << endl; 

  Wczytaj(L1);
  //  Wyswietl(L1);

  cin >> znak;
  
  Wczytaj(L2);
  // Wyswietl(L2);

  switch(znak){
  case '+':
    Wynik=Dodaj(L1,L2);   
    break;

  case '-':
    Wynik=Odejmij(L1,L2);
    break;

  case '*':
    Wynik=Pomnoz(L1,L2);
    break;

    /*  case '/':
    Wynik=Podziel(L1,L2);
    break;*/
  }

  cout << " = " << Wyswietl(Wynik);
      
    /*    DodajIPodstaw(&Wynik, Z1);
    operator+= (&Wynik, Z1);
    &Wynik += Z1;
    */
}
