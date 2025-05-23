#ifndef MEMBERBIKECOLLECTION_H
#define MEMBERBIKECOLLECTION_H

#include "Bike.h"
#include <vector>
using namespace std;

class MemberBikeCollection {
private:
    vector<Bike> rentedBike;

public:
    void addRentedBike(const Bike& bike);
    Bike* getNext();
    vector<Bike>& getAllRentedBikes();
};

#endif
