#ifndef PRACTICES_CBOOK_HPP
#define PRACTICES_CBOOK_HPP

#include <string>


class CBook
{
private:
    std::string mTitle;
    std::string mAuthor;
public:
    CBook ( std::string tile, std::string author );
    void SetDetails(std::string tile, std::string author );
    void GetDetails(std::string& tile, std::string& author );
};


#endif //PRACTICES_CBOOK_HPP
