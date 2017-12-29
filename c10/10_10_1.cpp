#include<iostream>
#include<string>
using namespace std;

class BankUser
{
public:
    BankUser(){};
    BankUser(const string s,const string a,const double m)
    {
        name = s;
        account = a;
        money = m;
    }
    ~BankUser(){};
    void disp() const
    {
        cout << name << ' ' << account << ' ' << money << endl;
    };
    void save(double m)
    {
        money += m;
    };
    void withdraw(double m)
    {
        if(m>money)
        {
            cout << "You don't have such money to withdraw!" << endl;
            return;
        }
        money -= m;
    };
private:
    string name;
    string account;
    double money;
};

int main(void)
{
    BankUser job("job","4215782",100);
    job.disp();
    job.save(25.6);
    job.disp();
    job.withdraw(56.3);
    job.disp();
    
    return 0;
}