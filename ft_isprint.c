int ft_isprint(char *s1)
{
	int i = 0;

	while (s1[i])
	{
		if (!(s1[i] >= 32 && s1[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
