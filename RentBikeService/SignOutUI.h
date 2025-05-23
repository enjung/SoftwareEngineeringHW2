#ifndef SIGNOUTUI_H
#define SIGNOUTUI_H

#include "SignOut.h"
#include <fstream>
using namespace std;

class SignOutUI {
private:
    SignOut* signOutControl;

public:
    SignOutUI(SignOut* control);
    void signOutInterface();
    void confirmSignOut(ofstream& out_fp, const string& userId);
};

#endif
