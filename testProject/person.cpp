#include "person.h"
#include <iostream>

Person::Person() {}

const std::string &Person::getName() const {
    return name;
}

const std::string &Person::getBitrhYear() const {
    return bitrhYear;
}

const std::string &Person::getEmail() const {
    return email;
}

void Person::setName(const std::string &nameSurname) {
    this->name = nameSurname;
}

void Person::setBirthYear(const std::string &newBitrhYear) {
    this->bitrhYear = newBitrhYear;
}

void Person::setEmail(const std::string &email) {
    this->email = email;
}

void Person::displayPersonInfo() {
    std::cout << "Name and surname: " << name << "\n";
    std::cout << "Birthyear: " << bitrhYear << "\n";
    std::cout << "Email: " << email << "\n";
}

bool Person::validateName() {
    std::regex regular("^[A-Z]\\w{0,12}");
    if (std::regex_match(name.c_str(), regular)) {
        return true;
    } else {
        return false;
        }

}

bool Person::validateYear() {
    std::regex regular("\\d{4}");
    if (std::regex_match(bitrhYear.c_str(), regular)) {
        if (std::stoi(bitrhYear) > 1900 && std::stoi(bitrhYear) <= 2023) {
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }
}

bool Person::validateEmail() {
    std::regex regular("\\w{1,20}(@yahoo.com|@gmail.com|@mail.ru|@yandex.ru)");
    if (std::regex_match(email.c_str(), regular)) {
        return true;
    } else {
        return false;
    }
}

/////////////////new fragmeny///////////////
int Person::max(int a, int b) {
    if (a > b)
        return a;
    else return b;
}
