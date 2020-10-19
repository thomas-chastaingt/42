//
//  main.c
//  ft_recursive_factorial
//
//  Created by Thomas Chastaingt on 19/10/2020.
//  Copyright © 2020 Thomas Chastaingt. All rights reserved.
//

#include <stdio.h>

int     ft_recursive_factorial(int nb)
{
    int result = 1;
    if(nb < 0) {
        return 0;
    }
    for(int i = 1; i <= nb; i++){
        result *= nb;
    }
    printf("La valeur est de : %d", result);
    ft_recursive_factorial(result);
    return result;
}

int main(int argc, const char * argv[]) {
    int nb = 5;
    ft_recursive_factorial(nb);
    return 0;
}
