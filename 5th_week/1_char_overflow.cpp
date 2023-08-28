#include <iostream>

using namespace std;

int main()
{
  //Following code has errors
  char name1[6] = "taZan";
  char name2[] = "taZan";
 
  cout << name1 << " " << sizeof(name1) << endl;
  cout << name2 << " " << sizeof(name2) << endl;
}

