/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matheusms1 <matheusms1@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 18:52:44 by matheusms1        #+#    #+#             */
/*   Updated: 2026/05/28 11:58:50 by matheusms1       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	i = 0;
	ptr1 = s1;
	ptr2 = s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("a diferenca e: %d\n", ft_memcmp("abC", "abd", 4));
// 	return (0);
// }
