#include "Droga.hpp"
#include "Chodnik.hpp"
#include "SciezkaRowerowa.hpp"
#include "PasRuchu.hpp"

enum ElemDrogiBitmask {
    CHODNIK = 1,
    SCIEZKA_ROWEROWA = 2,
    PAS_RUCHU = 4,
};

Droga::Droga(string id, double dlugosc, int elementy, spWezel pocz, spWezel kon)
    : D_UID(id), dlugosc(dlugosc), wezelPoczatek(pocz), wezelKoniec(kon)
{
    int liczba_pasow = (elementy >> 3);
    int elementy_info = (elementy & 0b111);

    if (elementy_info & CHODNIK)
        vElemDrogi.emplace_back(make_shared<Chodnik>());
    else if (elementy_info & SCIEZKA_ROWEROWA)
        vElemDrogi.emplace_back(make_shared<SciezkaRowerowa>());
    else if (elementy_info & PAS_RUCHU)
        for (int i = 1; i <= liczba_pasow; ++i)
            vElemDrogi.emplace_back(make_shared<PasRuchu>(i));
}