# 本例演示了ccall的用法
## ccall
### 语法

var result = Module.ccall(ident, returnType, argTypes, args);

### 参数

* ident ：C导出函数的函数名（不含“_”下划线前缀）；
* returnType ：C导出函数的返回值类型，可以为'boolean'、'number'、'string'、'null'，分别表示函数返回值为布尔值、数值、字符串、无返回值；
* argTypes ：C导出函数的参数类型的数组。参数类型可以为'number'、'string'、'array'，分别代表数值、字符串、数组；
* args ：参数数组

### 其他
* ccall的好处是可以在于可以直接使用字符串/Uint8Array/Int8Array作为参数

## cwrap
### 语法

var func = Module.cwrap(ident, returnType, argTypes);

### 参数

* ident ：C导出函数的函数名（不含“_”下划线前缀）；
* returnType ：C导出函数的返回值类型，可以为'boolean'、'number'、'string'、'null'，分别表示函数返回值为布尔值、数值、字符串、无返回值；
* argTypes ：C导出函数的参数类型的数组。参数类型可以为'number'、'string'、'array'，分别代表数值、字符串、数组；
### 返回值

* 封装方法

### 其他
* cwrap是对ccall的进一步封装，使其使用起来更方便，不用重复地写参数类型等

## 参考： https://wasm.zcopy.site/cppwasm/ch2-07-ccall-cwrap.html