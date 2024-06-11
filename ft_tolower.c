char *ft_tolower(char *s1)
{
        int i;

        i = 0;
        while (s1[i])
        {
                if (s1[i] >= 'A' && s1[i] <= 'Z')
                        s1[i] += 32;
                i++;
        }
        return (s1);
}