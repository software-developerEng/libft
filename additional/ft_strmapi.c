static size_t str_len(char const *s)
{
    size_t i;
    i = 0;
    while (s[i])
        i++;
    return i;
}


static char *str_new(size_t  n)
{
    char *str;

    str = (char *)malloc (sizeof(char) * n +1);
    if (!str)
        return NULL;
    return str;
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t i;
    char *str;
    char *result;

    i = 0;
    if (!s)
        return NULL;
    str = str_new(str_len(s));
    	result = str;

    while(*s)
    {
        str[i] == f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return result;
}