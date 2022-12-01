#include "lib.h"
bool primo(int a, int c)
{
    if (a==0||a==1)
    {
        return false;
    }
    else if(a%c==0){
        return a==c;
    }
    else
    {
        primo(a,c+1);
    }
}
