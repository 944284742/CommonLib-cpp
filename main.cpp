#include <iostream>
#include <memory>

using namespace std;

int main(int, char**) {
    std::cout << "Hello, world!\n";
    shared_ptr<string> p1 = make_shared<string>(10, '9'); 
    unique_ptr<int> iPtr = make_unique<int>(10);
    cout<<*iPtr << endl << *p1 << endl;    //输出：8
}