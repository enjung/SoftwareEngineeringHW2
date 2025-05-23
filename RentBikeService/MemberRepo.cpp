#include "MemberRepo.h"

void MemberRepo::addMember(const Member& member) {
    members.push_back(member);
}

Member* MemberRepo::findMemberById(const string& id) {
    for (auto& member : members) {
        if (member.getUserId() == id) {
            return &member;
        }
    }
    return nullptr;
}

vector<Member>& MemberRepo::getAllMembers() {
    return members;
}
