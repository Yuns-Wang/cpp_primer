# 第10章 泛型算法

## 练习 10.1

[c10e01.cpp](c10e01.cpp)

* `count()` 和 `std::count()` 都可以使用，定义在 `<algorithm>` 中。

## 练习 10.2

[c10e02.cpp](c10e02.cpp)

* `std::count(it1, it2, val)`
* `std::find(it1, it2, val)`

## 练习 10.3

[c10e03.cpp](c10e03.cpp)

## 练习 10.4

[c10e04.cpp](c10e04.cpp)

出现由`double`到`int`的转换导致精度降低。

***`accumulate` 的第三个参数决定函数中使用哪个加法运算符以及返回类型***

## 练习 10.5

[c10e05.cpp](c10e05.cpp)

达不到理想效果，会比较两个char指针。但是有时不同的对象指向相同的内存。

## 练习 10.6

[c10e06.cpp](c10e06.cpp)

## 练习 10.7

a. `vec` 没有空间，使用 `copy` 操作时，要保证第二个容器至少含有第一个迭代器表示的元素个数。

`vec.reserve(lst.size())`

b. 无错误

## 练习 10.8

使用 `back_inserter` 本质是调用容器操作 `push_back()` ，***而且 `back_inserter` 不是标准库算法，而是迭代器***。

## 练习 10.9

[c10e09.cpp](c10e09.cpp)

`unique(ite1, ite2[, fun])` 返回指向最后一个不重复元素之后位置的迭代器。

## 练习 10.10

* 算法使用迭代器，如果更改容器大小，有可能使迭代器失效。
* 有意将 *算法* 和 *成员函数* 区分开。