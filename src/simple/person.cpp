//
// Created by Bui Thanh Tung on 07/11/2023.
//
#include "person.h"

using namespace std;

person::person(string name, int age) : name_(name), age_(age) {}

person::person() : age_(0) {}

void person::setName(string name) {
    name_ = name;
}

string person::getName() const {
    return name_;
}

void person::setAge(int age) {
    age_ = age;
}

int person::getAge() const {
    return age_;
}

