#include "SignIn.h"
#include "Member.h"
//#include "Admin.h"

//������
#include <iostream>
using namespace std;

SignIn::SignIn(MemberRepo* repo) : memberRepo(repo) {}

Member* SignIn::isValidUser(const string& id, const string& pw) {
    
    Member* member = memberRepo->findMemberById(id);
    if (member != nullptr && member->getUserPassword() == pw) {
        loggedInId = id;
        return member;  // �α��� ����
    }
    return nullptr;  // �α��� ����
    
    /*
    //������
    cout << "[DEBUG] �α��� �õ� - ID: " << id << " PW: " << pw << endl;

    Member* member = memberRepo->findMemberById(id);
    if (member == nullptr) {
        cout << "[DEBUG] �ش� ID ����!" << endl;
        return nullptr;
    }
    else {
        cout << "[DEBUG] ã�� PW: " << member->getUserPassword() << endl;
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
