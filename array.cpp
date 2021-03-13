#include <iostream>
using namespace std;

int main()
{
   int p[5];
   cout << "Enter elements: ";

   for(int i = 0; i < 5; ++i)
      cin >> p[i];

   cout << "You entered: ";
   for(int i = 0; i < 5; ++i)
      cout << endl << *(p + i);

   return 0;
}
