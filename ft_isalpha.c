/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sturkoz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:38:43 by sturkoz           #+#    #+#             */
/*   Updated: 2022/03/14 15:38:45 by sturkoz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int str)
{
	if ((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z'))
		return (1);
	return (0);
}
