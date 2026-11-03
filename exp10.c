#include <stdio.h>
#include <unistd.h>

int main()
{
    int x = 10;

    printf("PID: %d\n", getpid());
    printf("Address of x: %p\n", (void *)&x);

    while (1)
    {
        sleep(1);
    }

    return 0;
}
