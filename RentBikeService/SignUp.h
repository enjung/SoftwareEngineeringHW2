#ifndef SIGNUP_H
#define SIGNUP_H

#include "MemberRepo.h"
#include <string>
using namespace std;

class SignUp {
private:
    MemberRepo* memberRepo;

public:
    SignUp(MemberRepo* repo);
    void addNewMember(const string& id, const string& pw, const string& phoneNumber);
    
    //µð¹ö±ë¿ë
    MemberRepo* getRepo();
};

#endif
