#include <iostream>
#include "LoginFunctions.cpp"

using namespace std;

int main() {

    cout << sum(5, 6) << endl;

    User user1 = User("Youssef", "youssef@fcai.com", "password");

    cout << user1.id;

    return 0;
}
