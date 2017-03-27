#include <cstdio>
#include "malloc.h"

int          a = 1;
static int   b = 2;
extern int   c = 3;
volatile int d = 4;
const int    E = 5;

int foo( int a, const int * p, int * const g, int &h )
{
    static int s = 6;

    class CL
    {
        //static int x;
        const int y;

    protected:
        int z;

    public:
        CL( int v ):y(v){}

    //private:
        CL(void):y(0){}
    };

    CL * i = new CL(10);
    CL * j = new CL[10];
    CL * k = ( CL * ) malloc ( 10 * sizeof( CL ) );

    CL m(20);

    ++s;
    printf("%d",s);
}

int main(){
    int num = 12;
    foo(11, &num, &num, num);
    foo(11, &num, &num, num);
}