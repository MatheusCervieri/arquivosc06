#include <unistd.h>

int main (int argc, char **argv)
{
    int i;

    i = 0;
    if (argc > 0)
    {
        while (argv[0][i] != '\0')
        {
        char c;

        c = argv[0][i];
        write(1, &c, 1);
        i++;
        }
        write(1, "\n", 1);
    }
    return(0);
}