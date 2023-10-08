char ft_strcpy(char *dst, char *src)
{
    char *tmp = dst;
    while ((*src++ = *dst++) != '\0')
        ;
    return tmp;
}