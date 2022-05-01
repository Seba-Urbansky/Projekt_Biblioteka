

#ifndef KSIAZKI_H
#define KSIAZKI_H

#include <stdio.h>
#include <stdlib.h>
#include "common.h"
typedef struct KsiazkaStruktura
{

    int ID;
    int rok;
    int liczba_egzemplarzy;
    char *tytul[MAX];
    char *autor[MAX];
    char *gatunek[MAX];

    struct KsiazkaStruktura *poprzedni, *nastepny;

} Ksiazka;

void wyswietl_baze_ksiazek();
void dodaj_ksiazke();
void edytuj_ksiazke();
void usun_ksiazke();
void menu_ksiazek();
void wczytaniepliku_ksiazki();
void zapispliku_ksiazki();
void ksiazka_do_zarzadzania();
void wydrukuj_ksiazke(Ksiazka *wpis);
void edytuj_tytul_ksiazki(Ksiazka *wpis);
void edytuj_gatunek_ksiazki(Ksiazka *wpis);
void edytuj_autora(Ksiazki *wpis);
void edytuj_rok(Ksiazki *wpis);
void wyswietl_baze_ksiazek();
Ksiazka *wyszukaj_ksiazke(int ID);
int znajdz_najwyzsze_ID_ksiazki();
void edytuj_ksiazki_ID_ksiazki(Ksiazka *wpis);
void usuniecie_liczby_egzemplarzy();

#endif
