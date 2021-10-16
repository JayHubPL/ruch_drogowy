#include "InfrastrukturaDrogowa.hpp"

#include <fstream>
#include <memory>

void InfrastrukturaDrogowa::wczytaj_dane() {
    ifstream inputWezly("input/wezly.txt");
    string id, id_pocz, id_kon;
    int dlugosc, elementy_bity;
    while (inputWezly.good()) {
        inputWezly >> id;
        wezly.emplace(id, make_shared<Wezel>(id));
    }
    ifstream inputDrogi("input/drogi.txt");
    while (inputDrogi.good()) {
        inputDrogi >> id >> dlugosc >> id_pocz >> id_kon;
        drogi.emplace(id, make_shared<Droga>(id, dlugosc, elementy_bity, wezly.at(id_pocz), wezly.at(id_kon)));
    }
    ifstream inputUczestnicy("input/uczestnicy.txt");
    while (inputUczestnicy.good()) {
        uczestnicy.emplace(id, make_shared<Uczestnik>());
    }
}

InfrastrukturaDrogowa::InfrastrukturaDrogowa() {
    wczytaj_dane();
}