#include "Member.h"

Member::Member(const string& id, const string& pw, const string& phoneNumber)
    : User(id, pw), phoneNumber(phoneNumber) {
}

string Member::getPhoneNumber() const {
    return phoneNumber;
}

MemberBikeCollection& Member::getRentedBikeCollection() {
    return rentedBikeCollection;
}
