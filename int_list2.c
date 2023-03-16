/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_list2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:51:00 by anvannin          #+#    #+#             */
/*   Updated: 2023/03/16 18:51:46 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_tintl_ordered(t_intl **list)
{
	t_intl	*tmp;

	tmp = (*list);
	while (tmp->next != NULL)
	{
		if (tmp->content > tmp->next->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	tintl_biggest(t_intl **list)
{
	t_intl	*tmp;
	int		n;

	tmp = (*list);
	n = tmp->content;
	while (tmp)
	{
		if (tmp->content > n)
			n = tmp->content;
		tmp = tmp->next;
	}
	return (n);
}

int	tintl_smallest(t_intl **list)
{
	t_intl		*tmp;
	int			n;

	tmp = (*list);
	n = tmp->content;
	while (tmp)
	{
		if (tmp->content < n)
			n = tmp->content;
		tmp = tmp->next;
	}
	return (n);
}

int	tintl_length(t_intl **list)
{
	t_intl	*tmp;
	int		n;

	tmp = (*list);
	n = 1;
	while (tmp->next)
	{
		tmp = tmp->next;
		n++;
	}
	return (n);
}

void	tintl_free(t_intl **list)
{
	t_intl	*tmp;

	while ((*list) != NULL)
	{
		tmp = (*list);
		(*list) = (*list)->next;
		free(tmp);
	}
}
