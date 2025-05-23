#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
using namespace std;

class User {
    protected:
        string id;
        string password;
    public:
        User(const string& id, const string& pw);
        string getUserId() const;
        string getUserPassword() const;
};

#endif
