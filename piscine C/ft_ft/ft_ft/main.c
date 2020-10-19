//
//  main.c
//  ft_ft
//
//  Created by Thomas Chastaingt on 19/10/2020.
//  Copyright © 2020 Thomas Chastaingt. All rights reserved.
//

#include <stdio.h>

void    ft_ft(int *nbr)
{
    *nbr = 42;
}

int     main(int argc, const char * argv[]) {
    int *nbr;
    int n;
    n = 1;
    nbr = &n;
    
    ft_ft(nbr);
    
    printf("\v",nbr);
    
}
