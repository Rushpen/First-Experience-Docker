
#include "fcgi_stdio.h"
#include <stdio.h>

int main(void)
{
    while (FCGI_Accept() >= 0) {
        printf("Content-type: text/html\r\n\r\n");
        printf("Hello World!");
    }

    return 0;
}