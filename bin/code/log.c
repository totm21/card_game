#include"log.h"
#include<process.h>
#include<stdlib.h>

bool log_debug_print_char(char c)
{
    printf("%c",c);
    return true;
}

bool log_debug_print_string(char* str)
{
    for(int i=0;str[i]!='\0';i++)
    {
        log_debug_print_char(str[i]);
    }
    return true;
}

bool log_debug_print_flag_string(log_debug_flag flag,char *str)
{
    switch(flag)
    {
        case cz:
            log_debug_print_string("cz | ");
            log_debug_print_string(str);
            break;
        default:
            return false;
    }
    return true;
}