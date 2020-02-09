
#include  "common.h"
#include <stdio.h>

//第一种，由单独的js文件负责实现
int js_add(int a, int b);//由js负责实现，放在pkg.js中
void js_console_log_int(int param);//由js负责实现，放在pkg.js中

EM_PORT_API(void) print_the_answer() {
    int i = js_add(21, 21);
    js_console_log_int(i);
}

EM_PORT_API(void) alert(){
 EM_ASM(
     alert("Hello!"); //第二种，直接在EM_ASM中调用js的api
     );

    //EM_ASM_支持传递参数
    char buf[32];
    const double pi = 3.14159;
    EM_ASM_(
        {
            console.log('addr of buf:', $0);
            console.log('pi:', $1);
        },
        buf, pi
    );
}



//第三种，函数由js动态实现
EM_PORT_API(int) show_me_the_answer();

EM_PORT_API(void) func() {
    printf("show_me_the_answer=%d\n", show_me_the_answer());//可以在控制台看到此行打印
}