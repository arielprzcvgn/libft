/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 13:48:33 by ariperez          #+#    #+#             */
/*   Updated: 2018/11/25 13:44:33 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int		main(int argc, char **argv)
{
	char	small[] = "abcdefgh";
	char	str[] = "abcdefghijklmnopqrstuvwxyz";
	char	str2[] = "abcdefghijklmnopqrstuvwxyz";
	char	*test;

	printf("Test de %s\n", argv[1]);

	if (argc == 1)
	{
		printf("Aucune fonction a tester.\n");
		return (8);
	}
	else if (strcmp(argv[1], "memset") == 0)
	{
		printf("Originale : %s\n", str);
		ft_memset(str, 'X', 7);
		memset(str2, 'X', 7);
		printf("Ma fonction : %s\nFonction de base : %s\n", str, str2);
	}
	else if (strcmp(argv[1], "bzero") == 0)
	{
		printf("Originale : %s\n", str);
		ft_bzero(str, 7);
		bzero(str2, 7);
		printf("Ma fonction : %s\nFonction de base : %s\n", str, str2);
	}
	else if (strcmp(argv[1], "memcpy") == 0)
	{
		printf("Originale : %s\n", str);
		ft_memcpy(str + 6, str + 4, 10);
		memcpy(str2 + 6, str2 + 4, 10);
		printf("Ma fonction : %s\nFonction de base : %s\n", str, str2);
	}
	else if (strcmp(argv[1], "memccpy") == 0)
	{
		printf("Originale : %s\n", str);
		ft_memccpy(str + 6, str + 4, 'f', 10);
		memccpy(str2 + 6, str2 + 4, 'f', 10);
		printf("Ma fonction : %s\nFonction de base : %s\n", str, str2);
	}
	else if (strcmp(argv[1], "memmove") == 0)
	{
		printf("Originale : %s\n", str);
		ft_memmove(str + 4, str + 16, 10);
		memmove(str2 + 4, str2 + 16, 10);
		printf("Ma fonction : %s\nFonction de base : %s\n", str, str2);
	}
	else if (strcmp(argv[1], "memchr") == 0)
	{
		printf("Originale : %s\n", str);
		ft_memchr(str, 'f', 10);
		memchr(str2, 'f', 10);
		printf("Ma fonction : %s\nFonction de base : %s\n", str, str2);
	}
	else if (strcmp(argv[1], "memcmp") == 0)
	{
		printf("Ma fonction : %d\n", ft_memmove(str, small, 10)
		printf("Fonction de base : %d\n", memmove(str2, small, 10));
	}
	else if (strcmp(argv[1], "strlen") == 0)
	{
		printf("Ma fonction : %zu\n", ft_strlen(small));
		printf("Fonction de base : %zu\n", strlen(small));
	}
	else if (strcmp(argv[1], "strdup") == 0)
	{
		printf("Ma fonction : %s\n", ft_strdup(str));
		printf("Fonction de base : %s\n", strdup(str2));
	}
	else if (strcmp(argv[1], "strcpy") == 0)
	{
		printf("Ma fonction : %s\n", ft_strcpy(test, str));
		printf("Fonction de base : %s\n", strcpy(test, str));
	}
	else if (strcmp(argv[1], "strncpy") == 0)
	{
		printf("Ma fonction: %d\n", ft_strcmp(str, small));
		printf("Fonction de base : %d\n", strcmp(str, small));
	}
	//ARANGER A PARTIR DE LA !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	else if (strcmp(argv[1], "strcat") == 0)
	{
		printf("Avant : %s\n", small);
		ft_strcat(small, str);
		printf("Apres : %s\n", small);
	}
	else if (strcmp(argv[1], "strncat") == 0)
	{
		printf("Found : %s\n", ft_strncat(str, small, 10));
		printf("Strings : %s\n%s\n", str, small);
	}
	else if (strcmp(argv[1], "strlcat") == 0)
	{
		printf("Avant : %s\n", small);
		ft_strlcat(small, str, 37);
		printf("Apres : %s\n", small);
	}
	else if (strcmp(argv[1], "strstr") == 0)
	{
		printf("Found : %s\n", ft_strstr(str, small));
		printf("Strings : %s\n%s\n", str, small);
	}
	else if (strcmp(argv[1], "strnstr") == 0)
	{
		printf("Found : %s\n", ft_strnstr(str, small, 15));
		printf("Strings : %s\n%s\n", str, small);
	}
	else if (strcmp(argv[1], "atoi") == 0)
	{
		printf("String : %s\n", argv[2]);
		printf("Integer : %d\n", ft_atoi(argv[2]));
	}
	else if (strcmp(argv[1], "strsplit") == 0)
	{
		char    **splited;
		int     i;

		i = 0;
		splited = (char **)malloc(sizeof(*splited) * 11);
		splited = ft_strsplit(argv[1], ' ');
		while (i < 10)
		{
			printf("%s\n", splited[i]);
			i++;
		}
	}
	else
		printf("Nom de fonction invalide.\n");
	return (8);
}
