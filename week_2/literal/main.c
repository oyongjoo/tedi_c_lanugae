#include <stdio.h>
#include <stdlib.h>

int main()
{
    const unsigned long long con1 = 10;
    //const float con2 = 3.2f;
    const double con2 = 3.2;
    const char con3 = 't';
    
    printf("%llu %f %c\n", con1, con2, con3);

    return 0;
}
