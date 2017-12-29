#include<iostream>
#include<string>
using namespace std;

class Person
{
private:
    static const int LIMIT = 25;
    string lname;
    char fname[LIMIT];
public:
    Person(){lname = "";fname[0] = '\0';};
    Person(const string & ln,const char * fn = "Heyyou")
    {
        lname = ln;
        int i = 0;
        while(*fn)
        {
            fname[i++] = *fn;
            fn++;
        }
        fname[i] = '\0';
    };
    ~Person(){};
    void show() const
    {
        cout << fname << ' ' << lname <<endl;
    };
    void formatshow() const
    {
        cout << lname << ',' << fname <<endl;
    };
};

int main(void)
{
    Person one;
    Person two("Smythecraft");
    Person three("Dimwidth","Sam");
    one.show();
    one.formatshow();
    two.show();
    two.formatshow();
    three.show();
    three.formatshow();
    return 0;
}