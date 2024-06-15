
static size_t str_len(char const *str)
{
    size_t i;
    i = 0;
    while (*(str + i))
        i++;
    return (i);
}

static char *str_new(size_t n)
{
        char *str;

    str = (char *)malloc(sizeof(char) * (n + 1));
    if(!str)
        return  (NULL);
    return str;
}


char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    char *str_ptr;

    if (!s1 || !s2)
        return Null;
    str = str_new(str_len(s1) + str_len(s2));
    str_ptr = str;
    while (*s1)
        *str++ s1++

    
}