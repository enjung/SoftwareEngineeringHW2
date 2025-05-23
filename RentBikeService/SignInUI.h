#ifndef SIGNINUI_H
#define SIGNINUI_H

#include "SignIn.h"
#include <fstream>
using namespace std;

class SignInUI {
private:
    SignIn* signInControl;

public:
    SignInUI(SignIn* control);
    void signInInterface();
    void submitSignInData(ifstream& in_fp, ofstream& out_fp);
};

#endif
