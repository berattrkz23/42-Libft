/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sturkoz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:40:17 by sturkoz           #+#    #+#             */
/*   Updated: 2022/03/09 15:26:03 by sturkoz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*mlst;

	mlst = *lst;
	if (!new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		while (mlst->next != NULL)
		{
			mlst = mlst->next;
		}
		mlst->next = new;
	}
}

int main(void)
{
	t_list *liste1 = ft_lstnew(ft_strdup("berat"));
	t_list *liste2 = ft_lstnew(ft_strdup("trkz"));
	liste1->next = liste2;
	int a = ft_lstsize(liste1);
	printf("%d\n",a);
	t_list *liste3 = ft_lstnew(ft_strdup("u"));
	ft_lstadd_back(&liste1,liste3);
	int b = ft_lstsize(liste1);
	printf("%d",b);
	
}
