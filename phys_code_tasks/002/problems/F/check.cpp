#include "testlib.h"
#include <stdio.h>
#include <math.h>

double EPS = 1E-6;

int main(int argc, char * argv[])
{
    setName("compare two doubles, maximal absolute or relative error = %.10f", EPS);
    registerTestlibCmd(argc, argv);

    double ja = ans.readDouble();
    double pa = ouf.readDouble();

    EPS = ja * 0.000002;

    if (!doubleCompare(ja, pa, EPS))
        quitf(_wa, "expected %.10f, found %.10f", ja, pa);

    quitf(_ok, "answer is %.10f", ja);
}
