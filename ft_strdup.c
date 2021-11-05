#include "libft.h"
#include <stdlib.h>

char
	*ft_strdup(const char *str)
{
	size_t	len;
	char	*res;

	len = ft_strlen(str);
	res = malloc(len + 1);
	if (res)
		ft_memcpy(res, str, len + 1);
	return (res);
}
