#ifndef BIKE_H
#define BIKE_H

#include <string>
using namespace std;

class Bike {
private:
    string id;
    string model;
    string rentUserId;
    bool isRented;

public:
    Bike(const string& id, const string& model);

    string getBikeModel() const;
    void setRentState(bool state);
    bool getRentState() const;

    void setRentUserId(const string& userId);
    string getRentUserId() const;

    string getId() const;
    string getModel() const;
};

#endif
