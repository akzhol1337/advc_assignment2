#include "FirstPart.h"
#include <bits/stdc++.h>
#include "Person.h"

using namespace std;

 void FirstPart::findLuckiest(){
    vector<Person> persons;

    srand(NULL);

    persons.push_back(*new Person("Mark", 23, rand() % 100));
    persons.push_back(*new Person("Azamat", 23, rand() % 100));
    persons.push_back(*new Person("Petrick", 7, rand() % 100));
    persons.push_back(*new Person("Oliver", 16, rand() % 100));
    persons.push_back(*new Person("Andrew", 25, rand() % 100));


    // find luckiest
    int mx = INT_MIN;
    Person luckiest_person;
    for(const Person &person : persons){
        if(mx < person.getLuck()){
            luckiest_person = person;
            mx = person.getLuck();
        }
    }

    //output luckiest
    cout << "Luckiest person is: \n";
    luckiest_person.printPerson();
}

void FirstPart::changeLuck(Person &a, Person &b){

     // save old value of a's luck
    int luck_copy = a.getLuck();
    // update a's value to b's value
    a.setLuck(b.getLuck());
    // b's value is a's old value in variable lucky_cope
    b.setLuck(luck_copy);
}

void FirstPart::allocate(){
    // when we create variable with a new keyword, it means we dynamically allocated memory for that variable, dynamically it is when
    // we allocating memory during runtime of our program execution, by default when we create a variable it is allocated before program executiong

    // basically, when we creating a dynamic memory it is needed in some time and then becomes unused, to free up memory, we can delete it and
    // other dynamic variables can take this space, deleting implemented using delete keyword (delete[] for arrays).


    Person *person = new Person("Mike", 20, 69);
    // in this example we create a pointer called person with data type Person, and person's value is the newly created dynamic memory.

    person->printPerson();
    //test

    delete person;
    // we deleted person, and then we can use old person's space to allocate another variable

    // :)

}