#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return 1; // Character is lowercase
    }
    else
    {
        return 0; // Character is not lowercase
    }
}
