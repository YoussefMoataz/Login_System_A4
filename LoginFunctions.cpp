#include "LoginFunctions.h"
#include <iostream>

int sum(int x, int y) {
    return x + y;
}

struct User {

    string id = "20210";
    string name;
    string email;
    string password;
    string oldPasswords; // array separated by a delimiter

    //"20210#*#youssef#*#youssef@fcai.com#*#password#*#ggg#**#jjh"

    User(string ID, string Name, string Email, string Password){
        id = ID;
        name = Name;
        email = Email;
        password = Password;
    }

    User(string Name, string Email, string Password){
        name = Name;
        email = Email;
        password = Password;
    }

};