void bzero(void *s, int n)
{
        int i;

        i = 0;
        unsigned char *ptr = (unsigned char *)s;
        while (i < n)
        {
                ptr[i] = 0;
        }
}