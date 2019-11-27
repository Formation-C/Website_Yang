#ifndef MEMBER_H
#define MEMBER_H

#include <User.h>


class Member : public User
{
    public:
        Member();
        virtual ~Member();

        int Getrole() { return role; }
        void Setrole(int val) { role = val; }
        string Getpassword() { return password; }
        void Setpassword(string val) { password = val; }
        string Getavatar() { return avatar; }
        void Setavatar(string val) { avatar = val; }

        int role;
        string password;
        string avatar;

    protected:

    private:
};

#endif // MEMBER_H
