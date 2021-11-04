#include "libft.h"

void
	*ft_memmove(void *dst, const void *src, size_t size)
{
	size_t	i;

	i = 0;
	if (src < dst)
	{
		while (i < size)
		{
			size -= 1;
			((unsigned char *) dst)[size] = ((unsigned char *) src)[size];
		}
	}
	else
	{
		while (i < size)
		{
			((unsigned char *) dst)[i] = ((unsigned char *) src)[i];
			i += 1;
		}
	}
	return (dst);
}
