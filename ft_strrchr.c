#include "libft.h"

char
	*ft_strrchr(const char *str, int ch)
{
	char	*res;

	res = 0;
	while (1)
	{
		if (*str == (char) ch)
			res = (char *) str;
		if (!*str)
			return (res);
		str += 1;
	}
}
