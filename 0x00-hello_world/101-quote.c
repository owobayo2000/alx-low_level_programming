#include <unistd.h>

#define STDERR_FILENO 2

/**
 * main - Entry point
 *
 * Description: Prints a message to the standard error stream
 *
 * Return: Always 1 (Error code)
 */
int main(void)
{
        const char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
        ssize_t len = 59;

        write(STDERR_FILENO, msg, len);
        return (1);
}
