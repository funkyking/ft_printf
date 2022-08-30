#include "libft.h"

char	*ft_uitoa(unsigned int	n)
{
	char		*num;
	int			len;

	len = ft_num_scope(n);
	num = ft_calloc((len + 1), sizeof(char));
	if (!num)
        return (NULL);
	num[len] = '\0';
	while (len)
	{
		num[--len] = n % 10 + 48;
		n = n / 10;
	}
	return (num);
}