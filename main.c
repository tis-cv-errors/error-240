#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int r = 0;

    r = recursive_fn(r);

    return 0;
}

int recursive_fn(int r) {
    r = recursive_fn(r) + 1;
}
