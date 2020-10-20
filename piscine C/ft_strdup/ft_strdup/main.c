//
//  main.c
//  ft_strdup
//
//  Created by Thomas Chastaingt on 20/10/2020.
//  Copyright © 2020 Thomas Chastaingt. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char *res;
    int i;
    int s;
    i = 0;
    s = 0;
    
    while (src[s] != '\0') {
        s++;
    }
    
    res = (char *)malloc(sizeof(*res) * s+1);
    
    while(i < s){
        res[i] = src[i];
        i++;
    }
    
    return res;
}

int     main(int argc, const char * argv[]) {
    printf("%s\n", ft_strdup("hello"));
}
