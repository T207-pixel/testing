#pragma once
#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <regex>

class Person
{
private:
    std::string name;
    std::string bitrhYear;
    std::string email;

public:
    Person();

    void setName(const std::string &name);
    void setBirthYear(const std::string &bitrhYear);
    void setEmail(const std::string &email);
    const std::string &getName() const;
    const std::string &getBitrhYear() const;
    const std::string &getEmail() const;

    void displayPersonInfo();
    bool validateName();
    bool validateYear();
    bool validateEmail();

    //////////////////new fragment///////////
    int max(int a, int b);
};

#endif // PERSON_H
