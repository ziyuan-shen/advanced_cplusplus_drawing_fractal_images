#include <iostream>
#include <map>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person(): name(""), age(0) {

    }
    Person(const Person &other) {
        cout << "Copy constructor running!" << endl;
        name = other.name;
        age = other.age;
    }
    Person(string name, int age): name(name), age(age) {

    }
    void print() const {
        cout << name << ": " << age << flush;
    }

    bool operator<(const Person &other) const {
        return name < other.name;
    }
};

int main() {

    string test1 = "Mike";
    string test2 = "Bob";
    
    bool test = test1 < test2;

    map<Person, int> people;

    people[Person("Mike", 40)] = 40;
    people[Person("Sue", 30)] = 30;

    for(map<Person, int>::iterator it = people.begin(); it != people.end(); it++) {
        cout << it->second << ": " << flush;
        it->first.print();
        cout << endl;
    }

    return 0;
}