char *mstrncat(char *s1, const char *s2, unsigned int n)
{
    char *ptr;
    for (ptr = s1; *ptr != '\0'; ++ptr)
        ;
    while (n-- && *s2 != '\0')
        *ptr++ = *s2++;
    *ptr = '\0';
    return s1;
}