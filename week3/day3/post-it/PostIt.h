//
// Created by Jonas on 2019. 04. 17..
//

#ifndef POST_IT_POSTIT_H
#define POST_IT_POSTIT_H

#include <string>
#include <iostream>



class PostIt {
public:
    PostIt(std::string backgroundColor, std::string text, std::string textColor);

    void setBackgroundColor(const std::string &backgroundColor);

    void setText(const std::string &text);

    void setTextColor(const std::string &textColor);

    const std::string &getBackgroundColor() const;

    const std::string &getText() const;

    const std::string &getTextColor() const;

private:
    std::string _backgroundColor;
    std::string _text;
    std::string _textColor;

};


#endif //POST_IT_POSTIT_H
