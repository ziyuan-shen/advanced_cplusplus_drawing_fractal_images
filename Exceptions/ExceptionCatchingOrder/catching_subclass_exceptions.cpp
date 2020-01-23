#include <iostream>
#include <exception>
using namespace std;

void goesWrong() {
    bool error1Detected = true;
    bool error2Detected = false;

    if(error1Detected) {
        throw bad_alloc();
    }

    if (error2Detected) {
        throw exception();
    }

}

int main() {

    try {
        goesWrong();
    }
    catch(bad_alloc &e) {          // subclasses should be before parent classes
        cout << "Catching bad_alloc:" << e.what() << endl;  // bad_alloc is a subclass of exception
    }
    catch(exception &e) {
        cout << "Catching exception:" << e.what() << endl;
    }

    return 0;
}