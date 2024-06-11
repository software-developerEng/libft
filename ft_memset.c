char *ft_memset(void *s, int c, int n)
{
        int i;

        i = 0;
        unsigned char *ptr = (unsigned char *)s;
        while (i < n)
        {
                ptr[i] = (unsigned char)c;
        }
        return s;
}