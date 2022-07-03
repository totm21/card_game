#ifndef LOG_ME
#define LOG_ME
/*
    此处为日志打印业务
    @auther:    程智
    @date:      2022.7.3
    @alter:     2022.7.3

*/

#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<lua.h>
#include<lauxlib.h>
#include<lualib.h>


//此处为打印类型标记 打印前请先在此处注册
typedef enum LOG_DEBUG_FLAG
{
    cz,
}log_debug_flag;

//字符打印
bool log_debug_print_char(char c);

//字符串打印
bool log_debug_print_string(char* str);

//打印对应标志信息
bool log_debug_print_flag_string(log_debug_flag flag,char *str);

//提供给lua的打印接口
bool log_debug_print_admin_lua(lua_State* lua);


#endif

