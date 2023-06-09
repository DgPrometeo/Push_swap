/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:09:22 by danielga          #+#    #+#             */
/*   Updated: 2023/06/08 19:23:56 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	main(int argc, char **argv)
{
	char	**stack_argv;
	int		i;

	if (argc < 2)
		return (0);
	if (argc == 2)
		stack_argv = ft_split(argv[1], 32);
	if (argc > 2)
	{
		i = 0;
		stack_argv = malloc(sizeof(char *) * argc);
		if (!stack_argv)
			return (NULL);
		while (i < (argc - 1))
		{
			stack_argv[i] = ft_strdup(argv[1+i]);
			i++;
		}
	}
	i = 0;
	while (stack_argv[i] != '\0')
	{
		if (ft_isdigit(stack_argv[i]) == 0)
			return (0);
		i++;
	}
	return (0);
}

/*
- Tenemos que revisar que nos dé los elementos a ordenar y que no se encuentren
repetidos. 
- Los indexamos para simplificar todo el programa dando la posición correcta
que debería de tener.

/si son dos argumentos. eso quiere decir que vienen comillados, por lo que 
lo enviamos a un split, con el delimitador de un espacio.
si son más de dos argumentos, tenemos que establecer un malloc del tamaño de argc
y enviarlo a un strdup para que vaya metiendo cada argumento en una celda del
mismo.
 */