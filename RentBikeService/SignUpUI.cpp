#include "SignUpUI.h"

SignUpUI::SignUpUI(SignUp* control) : signUpControl(control) {}

void SignUpUI::signUpInterface() {

}

void SignUpUI::submitSignUpData(ifstream& in_fp, ofstream& out_fp) {
    string id, pw, phoneNumber;
    in_fp >> id >> pw >> phoneNumber;

    signUpControl->addNewMember(id, pw, phoneNumber);


    out_fp << "1.1. 회원가입\n";
    out_fp << "> " << id << " " << pw << " " << phoneNumber << "\n";
    out_fp << "\n";

}
