#include "libft.h"

#include <stdlib.h>

char str_len(char const *str)
{
	int i = 0;
	while (str[i])
		i++;
	return i;
}


static size_t characterCheck(const char *set, const char s1)
{
	int i = 0;
	while (set[i])
	{
		if (s1 == set[i])
			return (1);
	
		i++;
	}
	return (0);
}

char	*ft_strtim(char const *s1, char const *set)
{
	char *trim;
	size_t start;
	size_t end;
	size_t i;

	start = 0;
	end = str_len(s1) -1;
	i = 0;

	if (!s1 || !set)
		return NULL;
	
	while (s1[start] != '\0' && characterCheck(set, s1[start]))
		start++;
	while (end > start && characterCheck(set, s1[end]))
		end--;
	trim = (Char *)malloc( sizeof(char) * (end  - start) );
	if (!trim) 	return NULL;
	while ( start + i < end)
	{
		trim[i] = s1[start + i];
		i++;
	}
	trim[i] = '\0';
	return trim;
}