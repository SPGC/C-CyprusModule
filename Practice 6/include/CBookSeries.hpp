
#ifndef PRACTICES_CBOOKSERIES_HPP
#define PRACTICES_CBOOKSERIES_HPP

#include "CBook.hpp"


class CBookSeries : public CBook {
private:
    std::string mSeriesTitle;
    std::string mSeriesEditor;
public:
    CBookSeries(std::string author, std::string title, std::string seriesTitle, std::string editor);

    std::string getSeriesTitle();

    std::string getEditor();

    std::string getAuthor();

    std::string getTitle();
};


#endif //PRACTICES_CBOOKSERIES_HPP
