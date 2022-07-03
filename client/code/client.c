#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include"../../bin/code/log.h"
#include"../../bin/code/register.h"

int main()
{
    lua_State* lua=lua=luaL_newstate();
    luaL_requiref(lua, "CFuncName", luaopen_C_Func_Name, 1);/*将C语言函数库注册到Lua环境中*/
    luaL_openlibs(lua);
    luaL_dofile(lua, "../client/lua/test.lua");
	lua_close(lua);
    log_debug_print_flag_string(cz,"zheshishenm\n");
    system("pause");
    return 0;
}