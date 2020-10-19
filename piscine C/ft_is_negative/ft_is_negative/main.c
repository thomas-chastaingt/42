//
//  main.c
//  ft_is_negative
//
//  Created by Thomas Chastaingt on 19/10/2020.
//  Copyright © 2020 Thomas Chastaingt. All rights reserved.
//

#include <stdio.h>


void    ft_is_negative(int n)
{
    if(n >= 0) {
        printf("P\n");
    } else {
        printf("N\n");
    }
    
}

int main(int argc, const char * argv[]) {
    int n = 0;
    
    ft_is_negative(n);
}
