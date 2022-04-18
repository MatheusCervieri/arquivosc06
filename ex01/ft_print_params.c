#include <unistd.h>
int main (int argc, char **argv)
{
    int i;
    int c; 

    i = 1;
    
    if(argc > 1)
    {
    while (i < argc)
    {
        c = 0;
        while (argv[i][c] != '\0')
        {
            write(1, &argv[i][c], 1);
            c++;
        }
        write(1, "\n", 1);

        i++;
    }
    }
    return(0);
}
