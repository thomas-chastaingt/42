//
//  main.c
//  ft_iterative_factorial
//
//  Created by Thomas Chastaingt on 19/10/2020.
//  Copyright © 2020 Thomas Chastaingt. All rights reserved.
//

#include <stdio.h>

int     ft_iterative_factorial(int nb)
{
    int result = 1;
    if(nb < 0) {
        return 0;
    }
    for(int i = 1; i <= nb; i++) {
        result *= i;
    }
    printf("Le résultat est de : %d\n", result);
    return result;
}

int main(int argc, const char * argv[]) {
    int a = 5;
    ft_iterative_factorial(a);
    return 0;
}
