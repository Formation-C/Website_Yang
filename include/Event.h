#ifndef EVENT_H
#define EVENT_H

#include <iostream>
using namespace std;

//namespace space_event{
class Event
{
    public:
        Event();
        virtual ~Event();

        int Getid() { return id; }
        void Setid(int val) { id = val; }
        string Getname() { return name; }
        void Setname(string val) { name = val; }
        int Getdate() { return date; }
        void Setdate(int val) { date = val; }
        string Getdescription() { return description; }
        void Setdescription(string val) { description = val; }

        int id;
        string name;
        int date;
        string description;

    protected:

    private:
};
//};

#endif // EVENT_H
