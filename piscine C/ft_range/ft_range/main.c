//
//  main.c
//  ft_range
//
//  Created by Thomas Chastaingt on 20/10/2020.
//  Copyright © 2020 Thomas Chastaingt. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int min, int max)
{
    int *tab;
    int i;
    i=0;
    
    if(min > max){
        return NULL;
    }
    
    tab = (int*)malloc(sizeof(*tab)*(min - max));
    
    
    while(min < max)
    {
        tab[i] = min;
        min++;
        i++;
    }
    return tab;
}

int     main(int argc, const char * argv[]) {
    ft_range(3, 6);
}
