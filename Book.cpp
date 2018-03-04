//
// Created by scavenger on 04.03.18.
//

#include "Book.h"

Book::Book()
        :author("Unknown"),title("Unknown")
{
}
Book::Book(std::string& author, std::string& title)
{
this->author = author;
this->title = title;

}
Book::Book(std::string&& author, std::string&& title)
{
this->author = std::move(author);
this->title = std::move(title);
}
Book::Book(Book& other)
{
    author=other.author;
    title = other.title;

}
Book::Book(Book&& other)
{
    author=std::move(other.author);
    title = std::move(other.title);

}
std::string Book::GetAuthor()
{
    return this->author;
}
std::string Book::GetTitle()
{
    return this->title;
}

void Book::SetAuthor(std::string& author)
{
    this->author = author;
}
void Book::SetTitle(std::string& title)
{
    this->title=title;

}

void Book::SetAuthor(std::string&& author)
{
    this->author = std::move(author);
}
void Book::SetTitle(std::string&& title)
{
    this->title = std::move(title);
}
Book& Book::operator=(const Book& other)
{
    Book tmp;
    tmp = other;

    std::swap(author,tmp.author);
    std::swap(title,tmp.title);

    return *this;

}
Book& Book::operator=(Book&& other) noexcept
{

    std::swap(author,other.author);
    std::swap(title,other.title);
    other.author = "0";
    other.title = "0";

    return *this;

}
std::ostream& operator<<(std::ostream& out,const Book& book)
{
    out << "Autor: "<<book.author<<"   Tytul: "<<book.title;
    return out;
}
