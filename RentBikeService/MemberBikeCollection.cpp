#include "MemberBikeCollection.h"

void MemberBikeCollection::addRentedBike(const Bike& bike) {
    rentedBike.push_back(bike);
}

Bike* MemberBikeCollection::getNext() {
    if (!rentedBike.empty()) {
        return &rentedBike.back();
    }
    return nullptr;
}

vector<Bike>& MemberBikeCollection::getAllRentedBikes() {
    return rentedBike;
}
