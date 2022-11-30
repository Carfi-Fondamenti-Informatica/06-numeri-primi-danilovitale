#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int n =0,e=2;
    bool f;
    cin >> n;
    f = primo(n,e);
    if (f)
    {
        cout<<"numero primo";
    }
    else
    {
        cout<<"numero non primo";
    }
    return 0;
}
