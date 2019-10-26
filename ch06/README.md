## 第六章

#### 练习 6.1

* 实参：传递给函数的参数

* 形参：用实参初始化的参数，一般存在于函数作用域内

#### 练习 6.2

(a) string f() {...};

(b) void f2(int i)

(c) {return v1}

(d) 正确

#### 练习 6.3

[c06e03.cpp](c06e03.cpp)

#### 练习 6.4

[c06e03.cpp](c06e03.cpp)

#### 练习 6.5

[c06e05.cpp](c06e05.cpp)

#### 练习 6.6

* 形参：由实参被传递进函数
* 局部变量：函数内定义的变量，函数结束时消失
* 局部静态变量：函数内定义的静态变量，不随函数结束而消失

[c06e06.cpp](c06e06.cpp)

#### 练习 6.7

[c06e07.cpp](c06e07.cpp)

#### 练习 6.8

[Chapter6.h](Chapter6.h)

#### 练习 6.9

[fact.cc](fact.cc) | [factMain.cc](factMain.cc)

#### 练习 6.10

[c06e10.cpp](c06e10.cpp)

#### 练习 6.11

[c06e11.cpp](c06e11.cpp)

#### 练习 6.12

[c06e12.cpp](c06e12.cp) 使用引用交换更加易用

#### 练习 6.13

* void f(T)：按值传递，实参被复制到形参

* void f(&T)：按引用传递，形参是实参的别名，没有复制

#### 练习 6.14

* 形参应该是引用：形参为IO类型

    `istream &read(istream &);`

* 形参不应该实引用：形参需要变化，但是实参不能变化
    
    `void print()`

#### 练习 6.15

1. s 是要统计的字符串，不需要改变故用const；occurs用来计数，需要不断改变值，不能用const。

2. s是字符串，字符串一般使用引用避免不必要的拷贝；occurs使用引用来返回计数信息；c是一个字符，无需引用传递。

3. 可能会导致比较大的空间、时间浪费。

4. 常量引用无法改变值，也就无法计数。

#### 练习 6.16

* `bool is_empty(const string &s){return s.empty();}`

* 可以直接使用 `s.empty()` 代替。

#### 练习 6.17

[c06e17.cpp](c06e17.cpp)

`bool is_have_capital(const string&);`

`void convert_to_ordinary(string&);`

*const string::iterator 和 string::const_iterator*

#### 练习 6.18

(a) `bool comapre(const matrix&, const matrix&);`

(b) `std::vector<int>::iterator change_val(const int, std::vector<int>::iterator&);`

#### 练习 6.19

(a) 非法，其余合法

#### 练习 6.20

需要改变参数本身时使用非常量引用，其他时候使用常量引用。

#### 练习 6.21

[c06e21.cpp](c06e21.cpp)

#### 练习 6.22

[c06e22.cpp](c06e22.cpp)

#### 练习 6.23

[c06e23.cpp](c06e23.cpp)

#### 练习 6.24

`const int ia[10]` 等效于`const int *`，不能限制传入数组的长度

使用`const int (&ia)[10]`限制数组长度

#### 练习 6.25

[c06e25.cpp](c06e25.cpp)

#### 练习 6.26

[c06e26.cpp](c06e26.cpp)

#### 练习 6.27

[c06e27.cpp](c06e27.cpp)

#### 练习 6.28

`const string &`

#### 练习 6.29

应该声明成引用类型，避免拷贝或者元素不可拷贝。

#### 练习 6.30

在返回‘bool’的函数中，返回语句不带返回值 [-fpermissive]

#### 练习 6.31

* 返回绑定到局部变量的引用无效。

* 需要改变时

#### 练习 6.32

合法，为数组赋值。

#### 练习 6.33

[c06e33.cpp](c06e33.cpp)

#### 练习 6.34

* 传入参数为正时，输出正确。

* 传入参数为负时，输出错误。

#### 练习 6.35

死循环

#### 练习 6.36

`string (&fun())[10]`

#### 练习 6.37

*       using string_array = string[10]; 
        string_array &fun();

*       auto fun() -> string (&) [10];

*       string ref_to_string_array[10];
        decltype(ref_to_string_array) &fun();

#### 练习 6.38

```
int odd[] = {1,3,5,7,9};
int even[] = {0,2,4,6,8};

decltype(odd) &arrPtr(int i) {return (i % 2) ? odd : even;}
```

#### 练习 6.39

* 合法，通过形参是否为常量区分。

* 非法，参数列表无法区分。

* 合法

#### 练习 6.40

* 合法

* 非法，默认参数后面不能有普通参数

#### 练习 6.41

(a) 非法，ht参数必须有实参

(b) 合法，正确使用

(c) 合法但是与初衷不符，'*'被转化为42传递给wd

#### 练习 6.42

[c06e42.cpp](c06e42.cpp)

#### 练习 6.43

(a) 头文件，内联函数

(b) 头文件，函数声明

#### 练习 6.44

```
inline bool isShorter(const string &s1, const string &s2){return s1.size() < s2.size();}
```

#### 练习 6.45

#### 练习 6.46

不能，参数不一定是字面值常量。`size()`不是`constexpr`函数。

#### 练习 6.47

[c06e47.cpp](c06e47.cpp)

#### 练习 6.48

不合理，使用`assert(s == sought)`

#### 练习 6.49

* 候选函数：具有调用函数名的所有函数。
* 可行函数：参数列表匹配的候选函数。

#### 练习 6.50

(a) 二义性
(b) `void f(int)`
(c) `void f(int, int)`
(d) `void f(doubel, double = 3.14)`

#### 练习 6.51

#### 练习 6.52

(a) 3 类型提升
(b) 4 类型转换

#### 练习 6.53

(a) 合法
(b) 合法
(c) 非法，top-const会被忽略，两个定义相同。

#### 练习 6.54

[c06e54.cpp](c06e54.cpp)

#### 练习 6.55

[c06e55.cpp](c06e55.cpp)

#### 练习 6.56

[c06e56.cpp](c06e55.cpp)