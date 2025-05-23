#ifndef MEMBERREPO_H
#define MEMBERREPO_H

#include "Member.h"
#include <vector>
#include <string>

#include <string>
#include <fstream>
using namespace std;

class MemberRepo {
private:
    vector<Member> members;

public:
    void addMember(const Member& member);
    Member* findMemberById(const string& id);
    vector<Member>& getAllMembers();

};

#endif
