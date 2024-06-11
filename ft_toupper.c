char *ft_toupper(char *s1)
{
        int i;

        i = 0;
        while (s1[i])
        {
                if (s1[i] >= 'a' && s1[i] <= 'z')
                        s1[i] -= 32;
                i++;
        }
        return (s1);
}