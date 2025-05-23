#include "SignUp.h"
#include "Member.h"

SignUp::SignUp(MemberRepo* repo) : memberRepo(repo) {}

void SignUp::addNewMember(const string& id, const string& pw, const string& phoneNumber) {
    Member newMember(id, pw, phoneNumber);
    memberRepo->addMember(newMember);
}