



#ifndef MENU_H
#define MENU_H
#define MAX 32

#include <stdio.h>
#include <stdlib.h>
#include "klienci.h"
#include "wypozyczenia.h"
#include "ksiazki.h"
#include "common.h"

void menu();
void menu_klientow();
void menu_glowne();
void menu_ksiazek();
void menu_wypozyczen();
void menu_usunedytuj_klient(Ksiazka* wpis);
void menu_zarzadzaj_klientem();
void menu_usunedytuj_ksiazke(Ksiazka* wpis);
void menu_zarzadzaj_ksiazkami();
void wyjscie();





#endif