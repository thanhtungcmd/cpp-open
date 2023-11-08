#include <iostream>
#include <zlib.h>
#include "simple/person.h"

using namespace std;

int main() {

    person().setAge(5);
    cout << "Hello, World!" << endl;
    cout << zlibVersion() << endl;

    person person("Resend", 30);
    cout << person.getAge() << endl;
    return 0;
}
