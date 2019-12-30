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
