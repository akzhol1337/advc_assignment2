#include "Person.h"

Person::Person() {}

Person::Person(const std::string &name, int age, int luck) : name(name), age(age), luck(luck) {}

const std::string &Person::getName() const {
    return name;
}

void Person::setName(const std::string &name) {
    Person::name = name;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

int Person::getLuck() const {
    return luck;
}

void Person::setLuck(int luck) {
    Person::luck = luck;
}

void Person::printPerson() {
    std::cout<<"Name: " << name << ", age: " << age << ", luck: " << luck << "\n";
}
