#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<string> strings;

    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");

    for(int i=0; i<strings.size(); i++) {
        cout << strings[i] << endl;
    }

    vector<string>::iterator it = strings.begin();

    it++;

    cout << *it << endl;

    for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++){
        cout << *it << endl;
    }

    return 0;
}