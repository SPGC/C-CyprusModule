#include "../Include/CBook.hpp"


CBook::CBook ( std::string tile, std::string author ){
    mTitle = tile;
    mAuthor = author;
}
void CBook::SetDetails(std::string tile, std::string author ){
    mTitle = tile;
    mAuthor = author;
}
void CBook::GetDetails(std::string& tile, std::string& author ){
    tile = mTitle;
    author = mAuthor;
}