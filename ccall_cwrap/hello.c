#include <stdio.h>
#include <string.h>
#include <emscripten/emscripten.h>

int main(int argc, char ** argv) {
    printf("Hello World\n");
}

#ifdef __cplusplus
extern "C" {
#endif

char* EMSCRIPTEN_KEEPALIVE returnString(int vari, char * vars) {
    printf("我的函数已被调用:%d,%s\n",vari,vars);
    return vars;
}

int EMSCRIPTEN_KEEPALIVE add(int a,int b){
    return a+b;
}

void EMSCRIPTEN_KEEPALIVE printString(const char* str) {
	printf("C:print_string(): %s\n", str);
}

int EMSCRIPTEN_KEEPALIVE sum(uint8_t* ptr, int count) {
	int total = 0, temp;
	for (int i = 0; i < count; i++){
		memcpy(&temp, ptr + i * 4, 4);
		total += temp;
	}
	return total;
}

#ifdef __cplusplus
}
#endif