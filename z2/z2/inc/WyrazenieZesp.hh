#ifndef WYRAZENIEZESP_HH
#define WYRAZENIEZESP_HH



#include "LZespolona.hh"


/*!
 * Modeluje zbior operatorow arytmetycznych.
 */
enum Operator { Op_Dodaj, Op_Odejmij, Op_Mnoz, Op_Dziel };



/*
 * Modeluje pojecie dwuargumentowego wyrazenia zespolonego
 */
struct WyrazenieZesp {
  LZespolona   Arg1;   // Pierwszy argument wyrazenia arytmetycznego
  Operator     Op;     // Opertor wyrazenia arytmetycznego
  LZespolona   Arg2;   // Drugi argument wyrazenia arytmetycznego
};


/*
 * Funkcje ponizej nalezy zdefiniowac w module.
 *
 */

bool Wczytaj(LZespolona &L1);
void Wyswietl(WyrazenieZesp  WyrZ);
LZespolona Dodaj(LZespolona L1, LZespolona L2);
LZespolona Odejmij(LZespolona L1, LZespolona L2);
LZespolona Pomnoz(LZespolona L1, LZespolona L2);

//LZespolona Oblicz(WyrazenieZe sp  WyrZ);


#endif
