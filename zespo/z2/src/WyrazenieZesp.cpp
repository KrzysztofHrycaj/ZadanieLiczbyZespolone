#include "WyrazenieZesp.hh"


/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */

void Wyswietl(LZespolona L3){
  int a,b;
  a=L3.re;
    b=L3.im;
    cout << "(" << a << showpos <<  b << noshowpos << "i" << ")";

}

LZespolona oblicz(WyrazenieZesp Wyrz)

/*bool wczytaj(LZespolona & L1){
  char zna
