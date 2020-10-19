//
//  main.c
//  ft_swap
//
//  Created by Thomas Chastaingt on 19/10/2020.
//  Copyright © 2020 Thomas Chastaingt. All rights reserved.
//

#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int tmp_a = *a;
    *a = *b;
    *b = tmp_a;
}

int      main(int argc, const char * argv[])
{
    int a = 1;
    int b = 100;
    int *adrr = &a;
    int *bdrr = &b;
    
    ft_swap(adrr,bdrr);
    printf("%d\n", a);
    printf("%d\n", b);
    
    return 0;
    
}
