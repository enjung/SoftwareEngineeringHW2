#include "Bike.h"

Bike::Bike(const string& id, const string& model)
    : id(id), model(model), isRented(false), rentUserId("") {
}

string Bike::getBikeModel() const {
    return model;
}

void Bike::setRentState(bool state) {
    isRented = state;
}

bool Bike::getRentState() const {
    return isRented;
}

void Bike::setRentUserId(const string& userId) {
    rentUserId = userId;
}

string Bike::getRentUserId() const {
    return rentUserId;
}

string Bike::getId() const {
    return id;
}

string Bike::getModel() const {
    return model;
}
