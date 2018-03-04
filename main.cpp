#include <iostream>
#include "Book.h"

using namespace std;
int main() {

    string a="Test1", t="Test2";
    Book e;
    cout << "e: "<< e << endl;
    Book b1 = {a, t};
    cout << "b1: "<< b1 << endl;
    Book b2 = {"Test21","Test22"};
    cout << "b2: "<< b2 << endl;
    Book b3 = b1;
    cout << "b3: "<< b3 <<endl<< "b1: " << b1 << endl;
    e = std::move(b2);
    cout << "e: "<< e <<endl<< "b2:" << b2 << endl;
    e.SetAuthor("Test31");
    cout << "e: "<< e << endl;
    e.SetTitle("Test32");
    cout << "e: "<< e << endl;

    return 0;
}