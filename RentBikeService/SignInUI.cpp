#include "SignInUI.h"

SignInUI::SignInUI(SignIn* control) : signInControl(control) {}

void SignInUI::signInInterface() {

}

void SignInUI::submitSignInData(ifstream& in_fp, ofstream& out_fp) {
    string id, pw;
    in_fp >> id >> pw;

    Member* member = signInControl->isValidUser(id, pw);

    out_fp << "2.1. 로그인\n";
    if (member != nullptr) {
        out_fp << "> " << id << " " << pw << "\n";
        out_fp << "\n";
    }
    else {
        out_fp << "> 로그인 실패\n";
        out_fp << "\n";
    }
}
