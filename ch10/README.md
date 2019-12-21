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

## 练习 10.11

[c10e11.cpp](c10e11.cpp)

## 练习 10.12

[c10e12.cpp](c10e12.cpp)

* 注意非库文件引用，使用“”

## 练习 10.13

[c10e13.cpp](c10e13.cpp)

## 练习 10.14

[c10e14.cpp](c10e14.cpp)

* lambda 函数只有捕获所在函数中的局部变量之后，才能使用。
* lambda 函数可以直接使用定义在函数之外的变量。
* ***lambda 函数在定义时拷贝，而不是调用时拷贝。（值捕获才有拷贝的概念）***

## 练习 10.15

``` c++
auto fun = [i](int j) {return i + j;};//i是此lambda所在函数内的局部变量
```

## 练习 10.16

[c10e16.cpp](c10e16.cpp)

## 练习 10.17

[c10e17.cpp](c10e17.cpp)

## 练习 10.18

[c10e18.cpp](c10e18.cpp)

## 练习 10.19

[c10e19.cpp](c10e19.cpp)

## 练习 10.20

[c10e20.cpp](c10e20.cpp)

## 练习 10.21

[c10e21.cpp](c10e21.cpp)

* “改变” 捕获值：

    * `mutable` 加在参数列表结尾位置，并不会改变捕获变量本身的值，只是用于多次调用该函数之间改变捕获的值，该关键字只对值捕获有意义。

    * 引用捕获才会改变捕获变量本身的值，多次调用引用捕获函数时，如果改变了捕获值，则函数内的值和值本身同时改变，因为他们本质上是一样的。

## 练习 10.22

[c10e22.cpp](c10e22.cpp)

## 练习 10.23

`newcallable = bind(callable, arglist)`

至少一个参数，arglist中的参数被用来调用callable

## 练习 10.24

[c10e24.cpp](c10e24.cpp)

## 练习 10.25

[c10e25.cpp](c10e25.cpp)

## 练习 10.26

* `back_inserter` : 调用 `push_back` 向容器中添加元素。
* `front_inserter` : 调用 `push_front` 添加元素
* `inserter` : 调用 `insert` 添加元素

## 练习 10.27

[c10e27.cpp](c10e27.cpp)

* `unique_copy` 依旧是只能分辨 ***相邻*** 的重复的元素

## 练习 10.28

[c10e28.cpp](c10e28.cpp)

* 插入、流、反向、移动迭代器定义在头文件 `iterator` 之中。
* `inserter(container, iter)` 插入到 `iter` 指向的元素之前。

## 练习 10.29

[c10e29.cpp](c10e29.cpp)

* 两种方案
    * 使用 `*iter++` 依次将元素 `push_back` 进容器中
    * 直接使用范围初始化容器
    * copy(iter, eof, front_inserter)

## 练习 10.30

[c10e30.cpp](c10e30.cpp)

* 使用 `copy` 和流迭代器输出。

## 练习 10.31

[c10e31.cpp](c10e31.cpp)

* 使用 `unique_copy` 和流迭代器输出。


## 练习 10.32

[c10e32.cpp](c10e32.cpp)

## 练习 10.33

[c10e33.cpp](c10e33.cpp)

## 练习 10.34

[c10e34.cpp](c10e34.cpp)

## 练习 10.35

[c10e35.cpp](c10e35.cpp)

## 练习 10.36

[c10e36.cpp](c10e36.cpp)

* `list` `forward_list` 的迭代器不支持 `+` `-` 操作！

## 练习 10.37

[c10e37.cpp](c10e37.cpp)

## 练习 10.38

* 输入迭代器  读  *只能存在于右侧、->、==、！=、++ 
* 输出迭代器  写  * 可以存在于左侧
* 前向迭代器  前移  
* 双向迭代器  双向  --
* 随机访问迭代器  随机访问  >、 <、+、-、下标

## 练习 10.39

* list 双向迭代器
* vector  随机访问迭代器

## 练习 10.40

* copy  ~~~前向迭代器~~~第一个区间 输入迭代器，第二个区间 输出迭代器
* reverse  ~~~随机访问迭代器~~~双向迭代器
* unique  ~~~双向迭代器~~~前向迭代器

## 练习 10.41

* 从 beg 到 end 区间内，寻找每个等于 old_val 的元素，替换为 new_val
* 从 beg 到 end 区间内，寻找每个使 pred 为真的元素 ，替换为 new_val
* 从 beg 到 end 区间内，~~~复制每个元素到 dest 及“之后（++）”的空间中，并寻找每个 old_val ，替换为 new_val~~~ 寻找每个等于 old_val 的元素，替换为 new_val 之后存放到 dest 及“之后（++）”的空间中
* 从 beg 到 end 区间内，~~~复制每个元素到 dest 及“之后（++）”的空间中，并寻找每个使 pred 为真的元素，替换为 new_val~~~ 寻找每个使 pred 为真的元素，替换为 new_val 之后存放到 dest 及“之后（++

## 练习 10.42

```c++
void elimDups(list<string> &words)
{
    //words.sort(words.begin(), words.end());//错误调用
    words.sort();
    words.unique();
}
```