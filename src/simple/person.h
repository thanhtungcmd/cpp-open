//
// Created by Bui Thanh Tung on 07/11/2023.
//

#ifndef CPP_ONE_PERSON_H
#define CPP_ONE_PERSON_H

#include <string>

using namespace std;

class person {

public:
    person();
    person(string name, int age);

    void setName(string name);
    string getName() const;
    void setAge(int age);
    int getAge() const;

private:
    string name_;
    int age_;
};

#endif //CPP_ONE_PERSON_H
