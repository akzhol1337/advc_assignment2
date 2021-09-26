#include <bits/stdc++.h>

#ifndef ASS2_PERSON_H
#define ASS2_PERSON_H


class Person {
private:
    std::string name;
    int age;
    int luck;
public:
    Person();

    Person(const std::string &name, int age, int luck);

    const std::string &getName() const;

    void setName(const std::string &name);

    int getAge() const;

    void setAge(int age);

    int getLuck() const;

    void setLuck(int luck);

    void printPerson();
};


#endif //ASS2_PERSON_H
