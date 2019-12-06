# Chapter 09

## 练习 9.1

(a) list

(b) deque

(c) vector

## 练习 9.2

`list<deque<int>>`

## 练习 9.3

* 指向同一容器

* 前一迭代器经过有限次++操作，可以得到后一个迭代器
  
## 练习 9.4

[c09e04.cpp](c09e04.cpp)

## 练习 9.5

[c09e05.cpp](c09e05.cpp)

## *练习 9.6*

`while (iter1 != iter2)` list中元素不是按照地址顺序存储的，所以不存在迭代器>或者<

## 练习 9.7

`vector<int>::size_type`

## 练习 9.8

`list<string>::const_iterator`, `list<string>::iterator`

## 练习 9.9

`begin`返回iterator，`cbegin`返回const_iterator

## 练习 9.10

`auto it1 = v1.begin();`

`auto it2 = v2.begin();`

it1 : vector<int>::iterator

it2 : vector<int>::const_iterator

it3 : vector<int>::const_iterator

it4 : vector<int>::const_iterator

## *练习 9.11*

```c++
vector<int> vi;//空容器
vector<int> vi(10);//10个0，此时元素值被值初始化，此构造函数为explicit
vector<int> vi(10,1);//10个1

vector<int> vi = v;//拷贝v到vi
vector<int> vi(v);//拷贝v到vi

vector<int> vi{1,2,3,4};//列表初始化
vector<int> vi = {1,2,3,4};//列表初始化

vector<int> vi(it1, it2);//拷贝it1到it2之间的值
```

## 练习 9.12

* 直接拷贝容器版本：要求两个容器类型、容器元素类型都保持一致。

* 拷贝范围版本：只要求两个容器的元素类型可以相互转换。

## 练习 9.13

[c09e13.cpp](c09e13.cpp)

## 练习 9.14

[c09e14.cpp](c09e14.cpp)

## 练习 9.15

[c09e15.cpp](c09e15.cpp)

## 练习 9.16

[c09e16.cpp](c09e16.cpp)

## 练习 9.17

* c1 和 c2必须是相同的容器并且具有相同类型的元素。

* 元素类型支持 < 符号运算

## 练习 9.18

[c09e18.cpp](c09e18.cpp)

## 练习 9.19

[c09e19.cpp](c09e19.cpp)

## 练习 9.20

[c09e20.cpp](c09e20.cpp)

## 练习 9.21

每次循环插入后，插入位置后面的内容都需要移动。最终效果与list相同

## 练习 9.22

[c09e22.cpp](c09e22.cpp)

## 练习 9.23

都表示c中的元素值

## 练习 9.24

[c09e24.cpp](c09e24.cpp)

## 练习 9.25

* elem1和elem2相等时，不删除任何元素，返回elem1/elem2

* elem2为尾后迭代器时，删除elem1及其之后的所有元素，返回新的尾后元素迭代器

## 练习 9.26

[c09e26.cpp](c09e26.cpp)

## 练习 9.27

[c09e27.cpp](c09e27.cpp)

## 练习 9.28

[c09e28.cpp](c09e28.cpp)

## 练习 9.29

* `vec.resize(100)`会将vec扩容到100,对新构造元素执行值初始化。

*  10个元素之后的内容被丢弃。

## 练习 9.30

需要有默认构造函数

## 练习 9.31

1. `list` 中元素不按照顺序存储，不能用 `iter+2` 这样的数值操作，移动list的迭代器有两种办法：

    * `iter++; iter++`

    * `advance(iter, 2)`

    [c09e31_list.cpp](c09e31_list.cpp)

2. `forward_list` 操作特殊

    [c09e31_forward_list.cpp](c09e31_forward_list.cpp)

## 练习 9.32

**语句非法**：`iter = vi.insert(iter, *iter++)` 参数的求值顺序不明

## 练习 9.33

迭代器失效，程序出现错误   

`vi.insert(begin, 42)` 运行之后，begin将失效，不能继续使用。

**`vector` 插入元素位置之后的迭代器失效**

[c09e33.cpp](c09e33.cpp)

## 练习 9.34

无限循环

## 练习 9.35

* capacity 指不重新分配内存的情况下，容器的最大容量

* size 指容器现有元素数目

## 练习 9.36

不可能

## 练习 9.37

`list` 内存不是连续分配的，没有容量的概念

`array` 大小固定，容量就是大小，与 `size` 是同一个概念

## 练习 9.38

[c09e38.cpp](c09e38.cpp)

## 练习 9.39

1. 分配1024个string的空间

2. 从cin读入string

3. 将容器大小改为已有数据个数的1.5倍