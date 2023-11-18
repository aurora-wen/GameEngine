> 测试代码均在C++20版本，64位Win11系统下编译运行

# C++ vs Go
## 一、实际使用中的区别

     区别                          C++                                 Go
    大小写                       大小写敏感                          大小写极度敏感
     语句                      语句以分号结尾                        语句结尾可加分号
     内存                    手动控制内存使用释放                    系统控制内存使用释放
    类型定义                  类型在前，变量名在后                    变量名在前，类型在后
     IO                            #1                                



> #1：源文件入口引入C的库（#include <iostream>，其中`#include`是预处理编译指令），源文件编译时，预处理器处理`#include <iostream>`，将`#include <iostream>`取代为`iostream文件`的内容，原始文件没有被修改，而是将`源文件`和`iostream文件内容组合成一个复合文件`，编译的下一阶段将使用该复合文件;
>
> 使用编译指令（`using namespace std;`，使用`iostream`而不是`iostream.h`时需声明，表示可以使用std名称空间中定义的名称，而不必使用`std::`前缀，如可以直接使用`cout`而不是`std::cout`）；
> 名称空间：![name_space.png](..%2Fimage%2Fname_space.png)
> 名称空间更好的使用方式：![name_space_better_use.png](..%2Fimage%2Fname_space_better_use.png)
>
> C++使用`cin`、`cout`进行输入输出（使用`cin`、`cout`进行输入输出的程序必须包含`文件iostream`）；

> 补充知识：
> 
> 翻译器也是一种预处理器（处理源文件），即它处理名称以#开头的编译指令；不必执行任何特殊的操作来调用该预处理器，它会在编译程序时自动执行；

## 二、C++头文件

> 库文件中包含了函数的编译代码（即函数定义），而头文件中则包含函数了原型（即函数声明）；

### 2.1 头文件：![head_file.png](..%2Fimage%2Fhead_file.png)

### 2.2 头文件约定：![head_file_promise.png](..%2Fimage%2Fhead_file_promise.png)

## 三、处理数据





### 3.1 整型类型

bit（位、比特）：
* 计算机内存的基本单元；
* 8位的内存块可以设置出256中不同的组合，因此每一位都可以有两种设置；
  * 8位的总组合数为：`2 * 2 * 2 * 2 * 2 * 2 * 2 * 2`，即256；
  * 因此8位单元可以表示`0-255`（符号类型）或者`-128到127`（无符号类型）；
  * 同理16位单元可以表示`0-65535`（符号类型）或者`-32768到32767`（无符号类型）；

byte（字节）：
* 字节（byte）通常指的是8位的内存单元；
  * 从这个意义讲，字节指的就是描述计算机内存量的度量单位；
  * 1KB = 1024Byte；
  * 1MB = 1024KB；
  * 1GB = 1024MB；
  * 1TB = 1024GB；
> C++对字节的定义与此不同，C++字节由至少能够容纳实现的基本字符集的相邻位组成，也就是说，可能取值的数目必须等于或超过字符数目。

width（宽度）：
* 用于描述存储整数时使用的内存量；
  * 使用的内存越多，则越宽；
  * C++的基本整型（按宽度递增的顺序排序）分别是char（最常用来表示字节，而不是数字）、short、int、long、long long（C++11新增）；
  * 每种基本整型都有符号版本和无符号版本；

* short
    * 4 byte
* int
  * 4 byte
* long
  * 4 byte
* long long
  * 8 byte

头文件climits定义了符号常量来表示类型的限制，下图为对该文件中定义的符号常量进行了总结：
![symbolic_constants_01.png](..%2Fimage%2Fsymbolic_constants_01.png)
![symbolic_constants_02.png](..%2Fimage%2Fsymbolic_constants_02.png)

66 

















































    