# 第12章 动态内存

## 练习 12.1

b1 有4个元素，b2已经度过生命周期。

## 练习 12.2

[str_blob.h](str_blob.h) | [str_blob.cpp](str_blob.cpp)

## 练习 12.3

可以定义 `const` 版本，但是不需要

`StrBlob` 的成员为 `shared_ptr`，此时 `const` 是顶层 `const`，与底层容器的操作无关。

## 练习 12.4

i 的类型为 `size_type` 不可能为负数。它是`unsigned`

## 练习 12.5

使此类使用方便，可以使用复制形式的 {} 列表初始化，但是程序会变得不易懂。（编译器会执行自动转换）

## 练习 12.6

[c12e06.cpp](c12e06.cpp)

## 练习 12.7

[c12e07.cpp](c12e07.cpp)

## 练习 12.8

~~p所指向的int未被初始化，是未定义的，不能使用。~~

内存泄漏，p 被转换为 bool， 无法被 delete。

## 练习 12.9

* r 和 q 均指向自由空间中 42 的 int 值，但是原来 r 指向的 100 的 int 值内存泄漏。

* r2 原来指向的内存被释放，现在 r2 和 q2 都指向原来 q2 指向的内存。

## 练习 12.10

~~不正确~~

正确

`process(p);`

## 练习 12.11

使 p 变为空悬指针。

## 练习 12.12

(a) 正确；sp本身不会被释放

(b) 错误；普通指针不能向shared_ptr自动转换

(c) 错误；同上

(d) ~~错误；p指向的内存会被释放，空悬指针~~

正确，但是不建议这样操作。

## 练习 12.13

sp空悬指针

## 练习 12.27

[主函数](e27/testquery.cpp) | [TextQuery](e27/text_query.h) | [QueryResult](e27/query_result.h)

## 练习 12.28

[c12e28.cpp](e28/c12e28.cpp)

## 练习 12.29

[do while & while](e27/testquery.cpp)

## 练习 12.30

[主函数](e30/c12e30.cpp) | [头文件](e30/text_query.h) | [实现](e30/text_query.cpp)

与Ex27相区分：

*  只把必需的内容共享
*  直接通过智能指针操作，而不是容器
*  空智能指针不能操作，空容器可以操作

## 练习 12.31

使用vector会有重复的行号出现，set更好。

## 练习 12.32

[主函数](e32/c12e32.cpp) | [text_query.h](e32/text_query.h) | [text_query.cpp](e32/text_query.cpp) | [str_blob.h](e32/str_blob.h) | [str_blob.cpp](e32/str_blob.cpp)

## 练习 12.33

同练习30  [主函数](e30/c12e30.cpp) | [头文件](e30/text_query.h) | [实现](e30/text_query.cpp)
