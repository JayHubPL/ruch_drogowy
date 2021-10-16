#pragma once

#include "ElementDrogi.hpp"

using namespace std;

class PasRuchu : public ElementDrogi {
    int numerPasa;
public:
    PasRuchu(int numerPasa) : numerPasa(numerPasa) {}
};