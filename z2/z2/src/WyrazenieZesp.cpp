#include "WyrazenieZesp.hh"
#include <iostream>
using namespace std;


/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */

void Wyswietl(LZespolona L1){
  cout << "(" << L1.re << std::showpos << L1.im << std::noshowpos << "i" << ")";

}

bool Wczytaj(LZespolona Z1){
  char znak;
  cin>>znak;
  if(znak!='(')
    return false;
  cin>>Z1.re;
  cin>>znak;
  cin>>Z1.im;
  if(znak=='-')
    Z1.im=(-Z1.im);
  cin>>znak;
  if(znak!='i')
    return false;
  cin>>znak;
  if(znak!=')')
    return false;
  else return true;
}

LZespolona Dodaj(LZespolona L1, LZespolona L2){
  LZespolona Wynik;
  Wynik.re=L1.re+L2.re;
  Wynik.im=L1.im+L2.im;
  return Wynik;
}

LZespolona Odejmij(LZespolona L1, LZespolona L2){
  LZespolona Wynik;
  Wynik.re=L1.re-L2.re;
  Wynik.im=L1.im-L2.im;
  return Wynik;
}

LZespolona Pomnoz(LZespolona L1, LZespolona L2){
  LZespolona Wynik;
  Wynik.re=(L1.re*L2.re)-(L1.im*L2.im);
  Wynik.im=(L1.re+L2.im)+(L1.im*L2.re);
  return Wynik;
}



/* LZespolona oblicz(WyrazenieZesp Wyrz)
 */

