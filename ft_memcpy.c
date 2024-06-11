char *ft_memcpy(void *dest, const void *src, int n)
{
        int i;

        i = 0;
        unsigned char *ptr = (unsigned char *)src;
        while (i < n)
        {
                ptr[i] = (unsigned char)dest;
                i++;
        }
        return src;
}