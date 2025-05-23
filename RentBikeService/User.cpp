#include "User.h"

User::User(const string& id, const string& pw) : id(id), password(pw) {}

string User::getUserId() const {
    return id;
}

string User::getUserPassword() const {
    return password;
}