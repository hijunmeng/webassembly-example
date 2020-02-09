#include <stdio.h>
#include <emscripten/emscripten.h>

int  EMSCRIPTEN_KEEPALIVE main() { 
  return 42;
}

int EMSCRIPTEN_KEEPALIVE sum(int a,int b){
  return a+b;
}

void EMSCRIPTEN_KEEPALIVE alert(){
 EM_ASM({ 
     alert("Hello!"); //js代码
     });
}






