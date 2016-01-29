/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 13:19:54 by randrini          #+#    #+#             */
/*   Updated: 2015/11/01 13:36:07 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = argc - 1;
	if (argc > 0)
	{
		while (argv[i] != '\0' && i > 0)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i--;
		}
	}
	return (0);
}
