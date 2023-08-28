#include <iostream>
using namespace std;

namespace A{
void printAll() {
    cout << "printAll A 함수" << endl;
}
}

namespace B{
void printAll() {
    cout << "printAll B 함수" << endl;
}
}

int main(void)
{
    //printAll 함수 호출
    A::printAll();
    B::printAll();
 
    return 0;
}