
#include<iostream>

using namespace std;
int a(int n);

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "S =  " << a(n);
    return 0;
}

int add(int n)
{
    if(n != 0)

        return n + a(n - 1);

    return 0;

}
