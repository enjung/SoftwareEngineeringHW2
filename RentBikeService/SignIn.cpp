#include "SignIn.h"
#include "Member.h"
//#include "Admin.h"

//디버깅용
#include <iostream>
using namespace std;

SignIn::SignIn(MemberRepo* repo) : memberRepo(repo) {}

Member* SignIn::isValidUser(const string& id, const string& pw) {
    
    Member* member = memberRepo->findMemberById(id);
    if (member != nullptr && member->getUserPassword() == pw) {
        loggedInId = id;
        return member;  // 로그인 성공
    }
    return nullptr;  // 로그인 실패
    
    /*
    //디버깅용
    cout << "[DEBUG] 로그인 시도 - ID: " << id << " PW: " << pw << endl;

    Member* member = memberRepo->findMemberById(id);
    if (member == nullptr) {
        cout << "[DEBUG] 해당 ID 없음!" << endl;
        return nullptr;
    }
    else {
        cout << "[DEBUG] 찾은 PW: " << member->getUserPassword() << endl;
    }

    if (member->getUserPassword() == pw) {
        return member;
    }
    return nullptr;
    */

}

string SignIn::getLoggedInId() const {
    return loggedInId;
}
