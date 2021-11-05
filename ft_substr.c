#include "libft.h"
#include <stdlib.h>

char
	*ft_substr(const char *str, unsigned int idx, size_t max)
{
	size_t	len;
	char	*res;

	len = ft_strlen(str);
	if (idx >= len)
		idx = len;
	if (idx + max >= len)
		max = len - idx;
	res = malloc(max + 1);
	if (!res)
		return (0);
	ft_memcpy(res, str + idx, max);
	res[max] = '\0';
	return (res);
}
