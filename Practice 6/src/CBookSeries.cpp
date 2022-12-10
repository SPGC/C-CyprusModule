#include "../include/CBookSeries.hpp"


CBookSeries::CBookSeries(std::string author, std::string title, std::string seriesTitle, std::string editor) : CBook(
        title, author) {
    mSeriesEditor = editor;
    mSeriesTitle = seriesTitle;
}

std::string CBookSeries::getSeriesTitle() {
    return mSeriesTitle;
}

std::string CBookSeries::getEditor() {
    return mSeriesEditor;
}

std::string CBookSeries::getAuthor() {
    std::string *author = new std::string;
    std::string *title = new std::string;
    this->CBook::GetDetails(*title, *author);
    std::string buffer = *author;
    delete author;
    delete title;
    return buffer;
}

std::string CBookSeries::getTitle() {
    std::string *author = new std::string;
    std::string *title = new std::string;
    this->CBook::GetDetails(*title, *author);
    std::string buffer = *title;
    delete author;
    delete title;
    return buffer;
}