/* stringi ters cevirir */

char *mystrrev(char *str)
{
    int i, temp;
    int length = strlen(str);
    for (i = 0; i < length / 2; ++i)
    {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    return str;
}