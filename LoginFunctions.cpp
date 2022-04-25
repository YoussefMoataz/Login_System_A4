#include "LoginFunctions.h"
#include <iostream>

using namespace std;

int sum(int x, int y) {
    return x + y;
}

struct User {

    string id = "20210";
    string name;
    string email;
    string password;
    string oldPasswords; // array separated by a delimiter

    User(string ID, string Name,string Email,string Password){
        id = ID;
        name = Name;
        email = Email;
        password = Password;
    }

    User(string Name,string Email,string Password){
        name = Name;
        email = Email;
        password = Password;
    }

};