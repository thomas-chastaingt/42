//
//  main.c
//  ft_sort_params
//
//  Created by Thomas Chastaingt on 20/10/2020.
//  Copyright © 2020 Thomas Chastaingt. All rights reserved.
//

#include <stdio.h>

void    ft_putchar(char c);

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

int        ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
        i++;
    return (s1[i] - s2[i]);
}

int        main(int argc, char **argv)
{
    char    *tmp;
    int        find;
    int        i;

    find = 1;
    while (find)
    {
        find = 0;
        i = 0;
        while (++i < argc - 1)
        {
            if (ft_strcmp(argv[i], argv[i + 1]) > 0)
            {
                tmp = argv[i];
                argv[i] = argv[i + 1];
                argv[i + 1] = tmp;
                find = 1;
            }
        }
    }
    i = 0;
    while (++i < argc)
        ft_putstr(argv[i]), ft_putchar('\n');
    return (0);
}
