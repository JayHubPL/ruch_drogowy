#pragma once

#include <vector>
#include <memory>
#include "ElementDrogi.hpp"
#include "Wezel.hpp"

using namespace std;

class Droga {
    string D_UID; // Droga_UniqueIdentification
    double dlugosc;
    vector<spElementDrogi> vElemDrogi;
    spWezel wezelPoczatek, wezelKoniec;
public:
    Droga(string id, double dlugosc, int elementy, spWezel pocz, spWezel kon);
};

typedef shared_ptr<Droga> spDroga;