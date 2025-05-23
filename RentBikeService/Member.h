#ifndef MEMBER_H
#define MEMBER_H

#include "User.h"
#include "MemberBikeCollection.h"
#include <string>
using namespace std;

class Member : public User {
private:
    string phoneNumber;
    MemberBikeCollection rentedBikeCollection;

public:
    Member(const string& id, const string& pw, const string& phoneNumber);
    string getPhoneNumber() const;
    MemberBikeCollection& getRentedBikeCollection();
};

#endif