#ifndef PRACTICES_CPAYROLL_HPP
#define PRACTICES_CPAYROLL_HPP

#include <string>


struct SEmployee
{
    std::string name;
    int id;
};

class CPayRoll
{
private:
    SEmployee* mpEmployeeDetails;
public:
    CPayRoll( std::string name, int id );
    ~CPayRoll();
    void SetDetails( std::string name, int id );
    void GetDetails( std::string& name, int& id );
};


#endif //PRACTICES_CPAYROLL_HPP
