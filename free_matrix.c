/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 09:00:36 by anvannin          #+#    #+#             */
/*   Updated: 2023/05/27 09:00:54 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_matrix(void **matrix)
{
	int	i;

	i = -1;
	while (matrix[++i])
		free(matrix[i]);
	free(matrix);
}
