#ifndef LOGIN_H
#define LOGIN_H
#include <string>
#include "objectuser.h"

using namespace std;

class Login
{
private:
    static Login *login;
    ObjectUser *user;

    Login();

    public:
    Login(const Login &) = delete;
    void operator=(const Login &) = delete;

    static Login *getInstance();

    static void doLogin(ObjectUser *user);

    static bool verificaUser(ObjectUser *user);

    static void doLogoff();

    static ObjectUser *getUser();

    ~Login();
};

#endif