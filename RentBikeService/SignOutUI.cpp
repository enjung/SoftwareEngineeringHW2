#include "SignOutUI.h"

SignOutUI::SignOutUI(SignOut* control) : signOutControl(control) {}

void SignOutUI::signOutInterface() {
}

void SignOutUI::confirmSignOut(ofstream& out_fp, const string& userId) {
    signOutControl->signOut();
    out_fp << "2.2. ·Î±×¾Æ¿ô\n";
    out_fp << "> " << userId << "\n";
    out_fp << "\n";
}
