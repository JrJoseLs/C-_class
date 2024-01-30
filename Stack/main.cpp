#include <cstdlib>
#include <iostream>
using namespace std;
struct nodo
int main(int argc, char *argv[])
{

  stack<char> s;
  for (int i='A'; i <= 'Z'; i++)
    s.push(i);

  while (! s.empty() )
  {
    cout << s.top() << " " ;
    s.pop();
  }

  cout << endl;
  system("PAUSE");
  return EXIT_SUCCESS;
}
