#include<stdio.h>
#include<stdbool.h>
#include<string.h>

enum log_debug_flag
{
    cz, //第一个标志
};

//字符打印
bool log_debug_print_char(char c);

//字符串打印
bool log_debug_print_string(char* str);

//打印对应标志信息
bool log_debug_print_flag_string(char* flag,char *str);

