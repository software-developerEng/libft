#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*subString;

	i = 0;
	j = 0;
	subString = malloc(sizeof(char) * (len + 1));
	if (!subString)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			subString[j] = s[i];
			j++;
		}
		i++;
	}
	subString[j] = '\0';
	return (subString);
}