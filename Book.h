//
// Created by scavenger on 04.03.18.
//
#include<string>
#ifndef LAB2_BOOK_H
#define LAB2_BOOK_H
#include<iostream>

class Book {

    std::string author, title;

public:
    Book();
    Book(std::string& author, std::string& title);
    Book(std::string&& author, std::string&& title);
    Book(Book& other);
    Book(Book&& other);
    std::string GetAuthor();
    std::string GetTitle();
    void SetAuthor(std::string& author);
    void SetTitle(std::string& title);
    void SetAuthor(std::string&& author);
    void SetTitle(std::string&& title);
    Book& operator=(const Book& other);
    Book& operator=(Book&& other) noexcept;
    friend std::ostream& operator<<(std::ostream& out, const Book& book);









};


#endif //LAB2_BOOK_H
