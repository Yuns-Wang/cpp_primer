#ifndef ACCOUNT
#define ACCOUNT

#include <string>

class Account
{
public:
    Account() = default;
    Account(std::string n, double a) : name(n), amount(a) {}
    double calcu() const {return amount + amount * rate;}
    static double get_rate() {return rate;}
    static void set_rate(double r) {rate = r;}
private:
    std::string name;
    double amount;
    static double rate;
    static constexpr double today_rate = 0.313;
    static double initial_rate() {return today_rate;};
};

double Account::rate = initial_rate(); 
#endif