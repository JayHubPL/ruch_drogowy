#pragma once

#include <vector>
#include <memory>
#include "uczestnik/Uczestnik.hpp"

using namespace std;

class ElementDrogi {
protected:
    vector<spUczestnik> vUczestnicy;
};

typedef shared_ptr<ElementDrogi> spElementDrogi;