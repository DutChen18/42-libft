#include "libft.h"

void
	*ft_memcpy(void *dst, const void *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		size -= 1;
		((unsigned char *) dst)[size] = ((unsigned char *) src)[size];
	}
	return (dst);
}
