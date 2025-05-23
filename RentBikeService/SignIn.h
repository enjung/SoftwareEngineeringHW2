#ifndef SIGNIN_H
#define SIGNIN_H

#include "MemberRepo.h"

class SignIn {
private:
    MemberRepo* memberRepo;
    string loggedInId;

public:
    SignIn(MemberRepo* repo);
    Member* isValidUser(const string& id, const string& pw);
    string getLoggedInId() const;
};

#endif
