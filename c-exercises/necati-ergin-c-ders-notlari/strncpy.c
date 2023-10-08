char *ft_strncpy(char *s1, const char *s2, unsigned int n)
{
    char *s = s1;
    while (n > 0 && *s2)
    {
        *s++ = *s2++;
        n--;
    }
    while (n--)
        *s++ = '\0';
    return s1;
}
