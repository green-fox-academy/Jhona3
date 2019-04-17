//
// Created by Jonas on 2019. 04. 17..
//

#ifndef BLOG_POST_BLOGPOST_H
#define BLOG_POST_BLOGPOST_H

//#include "BlogPost.cpp"

#include <iostream>
#include <string>
class BlogPost {

public:
    BlogPost(std::string authorName, std::string title, std::string text, std::string publicationDate);

    const std::string &getAuthorName() const;

    const std::string &getTitle() const;

    const std::string &getText() const;

    const std::string &getPublicationDate() const;

    void setAuthorName(const std::string &authorName);

    void setTitle(const std::string &title);

    void setText(const std::string &text);

    void setPublicationDate(const std::string &publicationDate);

private:
    std::string _authorName;
    std::string _title;
    std::string _text;
    std::string _publicationDate;
};


#endif //BLOG_POST_BLOGPOST_H

