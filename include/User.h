#ifndef USER_H
#define USER_H

using namespace std;

#include <iostream>
#include "Event.h"

class User
{
    public:
        User();
        virtual ~User();

        int Getid() { return id; }
        void Setid(int val) { id = val; }
        string Getemail() { return email; }
        void Setemail(string val) { email = val; }
        string Getname() { return name; }
        void Setname(string val) { name = val; }

        int id;
        string email;
        string name;

        virtual getEvent() = 0;
        virtual addEvent(Event _event) = 0;
        virtual hasEvent(Event _event) = 0;
        virtual delEvent(Event _event) = 0;

    protected:

    private:
};

#endif // USER_H
