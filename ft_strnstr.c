#include "libft.h"

char
	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	i;
	size_t	str2len;

	i = 0;
	str2len = ft_strlen(str2);
	while (ft_strncmp(str1 + i, str2, str2len))
	{
		i += 1;
		if (i + str2len > len || !str1[i])
			return (0);
	}
	return ((char *) str1 + i);
}
