#pragma once

#include <memory>

using namespace std;

class Droga;

class Uczestnik {
protected:
    string U_UID; // Uczestnik_UniqueIdeantification
    shared_ptr<Droga> droga;
    shared_ptr<Droga> elemDrogi;
    int odlOdPocz;
};

typedef shared_ptr<Uczestnik> spUczestnik;