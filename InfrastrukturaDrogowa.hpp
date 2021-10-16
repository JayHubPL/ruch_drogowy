#pragma once

#include <unordered_map>
#include "droga/Droga.hpp"
#include "droga/Wezel.hpp"
#include "uczestnik/Uczestnik.hpp"

using namespace std;

class InfrastrukturaDrogowa {
    unordered_map<string, spDroga> drogi;
    unordered_map<string, spUczestnik> uczestnicy;
    unordered_map<string, spWezel> wezly;
public:
    void wczytaj_dane();
    InfrastrukturaDrogowa();
};