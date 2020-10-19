//
//  main.c
//  ft_div_mod
//
//  Created by Thomas Chastaingt on 19/10/2020.
//  Copyright © 2020 Thomas Chastaingt. All rights reserved.
//

#include <stdio.h>


void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a/b;
    *mod = a%b;
}

int main(int argc, const char * argv[]) {
    int a = 4;
    int b = 2;
    int div = 0;
    int mod = 0;
    int *divp = &div;
    int *modp = &mod;
    
    ft_div_mod(a, b, divp, modp);
    printf("Le résultat est : %d\n", div);
    printf("Le modulo est : %d\n", mod);
    
}
