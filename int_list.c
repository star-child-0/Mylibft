/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:37:01 by anvannin          #+#    #+#             */
/*   Updated: 2023/03/16 18:51:28 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	titl_node_index(t_intl **list, t_intl *node)
{
	t_intl	*tmp;
	int		i;

	tmp = (*list);
	i = 0;
	while (tmp->next)
	{
		if (node == tmp)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (-1);
}

void	tintl_print(t_intl **list)
{
	t_intl	*tmp;

	tmp = (*list);
	while (tmp)
	{
		if (tmp->next)
			ft_printf("%d, ", tmp->content);
		else
			ft_printf("%d\n", tmp->content);
		tmp = tmp->next;
	}
}

t_intl	*tintl_push(int content)
{
	t_intl	*new;

	new = (t_intl *)malloc(sizeof(t_intl));
	new->content = content;
	new->next = NULL;
	return (new);
	free(new);
}

int	tintl_smallest_pos(t_intl **list)
{
	t_intl	*tmp;
	int		n;
	int		pos;

	tmp = (*list);
	n = tmp->content;
	while (tmp->next)
	{
		if (tmp->content < n)
		{
			n = tmp->content;
			pos = titl_node_index(list, tmp);
		}
		tmp = tmp->next;
	}
	return (pos);
}

int	tintl_last(t_intl **lst)
{
	t_intl	*tmp;

	tmp = (*lst);
	while (tmp->next)
		tmp = tmp->next;
	return (tmp->content);
}
