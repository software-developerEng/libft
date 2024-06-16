void ft_putendl_fd(char *s, int fd)
{
    if (!s)
        return NULL;
    while (*s)
    {
        write (fd, &s, 1);
        s++;
    }
    write (1, "\n", 1);
}