#include <bits/stdc++.h>
#include "Person.h"
#include "FirstPart.h"

using namespace std;

int main() {

    FirstPart::findLuckiest();

    printf("\n");

    Person a = *new Person("RandomName", 19, 11);
    Person b = *new Person("RandomName", 15, 99);

    printf("Old Luck's: %d and %d\n", a.getLuck(), b.getLuck());

    FirstPart::changeLuck(a, b);

    printf("New Luck's: %d and %d\n", a.getLuck(), b.getLuck());


    // see method implementation for details...
    FirstPart::allocate();

}
