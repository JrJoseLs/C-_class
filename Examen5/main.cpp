
#include <iostream>

using namespace std;

int f(int);

int main()

{
    int n;

    cout<<"Entre un numero : ";
    cin >> n;
    cout << "F " << n <<" = " << f(n);

    return 0;

}


int f(int n)

{
    if (n > 1)
    {

        return n*f(n-1);

    }

    else

    {

        return 1;

    }

}
