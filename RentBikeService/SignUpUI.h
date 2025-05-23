#ifndef SIGNUPUI_H
#define SIGNUPUI_H

#include "SignUp.h"
#include <fstream>
using namespace std;

class SignUpUI {
private:
    SignUp* signUpControl;

public:
    SignUpUI(SignUp* control);
    void signUpInterface();
    void submitSignUpData(ifstream& in_fp, ofstream& out_fp);
};

#endif
