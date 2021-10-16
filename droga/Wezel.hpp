#pragma once

#include <memory>

using namespace std;

class Wezel {
    string W_UID; // Wezel_UniqueIdentification
public:
    Wezel(string ID) : W_UID(ID) {}
};

typedef shared_ptr<Wezel> spWezel;