#include <iostream>
#include <map>
using namespace std;

int main() {

    map<int, string> student;

    student[1] = "Jacqueline";
    student[3] = "Denise";
    student[4] = "Aaron";
    student[2] = "Blake";

    // declare map iterator
    map<int, string>::iterator iter;

    // use iterator to display map elements
    for (iter = student.begin(); iter != student.end(); ++iter) {
        cout << iter->first << " - " << iter->second << endl;
    }

    return 0;  
}