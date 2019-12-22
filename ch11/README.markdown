# 第11章 关联容器

## 练习 11.1

* `map` 关联容器、以关键字为索引 
* `vector` 顺序容器、以下标为索引

## 练习 11.2

* `list` 读取后按顺序排列的程序
* `vector` 容器大小需要经常调整的程序
* `deque` 排队程序 浏览器历史、软件的undo操作
* `map` 字典程序
* `set` 排除某些项的程序

## 练习 11.3

[c11e03.cpp](c11e03.cpp)

## 练习 11.4

[c11e04.cpp](c11e04.cpp)

## 练习 11.5

* `map` 存储 键值对
* `set` 存储 关键字
  
根据存储内容选择

## 练习 11.6

* `set` 不允许重复、关联容器
* `list` 允许重复、顺序容器

## 练习 11.7

[c11e07.cpp](c11e07.cpp)

## 练习 11.8

* `set` 存入的单词自动不重复且按照一定顺序排列，`vector` 需要判断重复，并手动排列顺序。
* `set` 插入时间为 log(n), `vector` 插入时间为 n 。

## 练习 11.9

`std::map<std::string, std::list<int>> words;`

## 练习 11.10

`vector<int>::iterator` 到 `int` 可以定义 `map`，但是 `list<int>::iterator` 不能，因为没有定义 `<` 运算符。

## 练习 11.11

` multiset<Sales_data, bool (*) (const Sales_data&, const Sales_data&)> bookstore(compareIsn);`

## 练习 11.12

[c11e12.cpp](c11e12.cpp)

## 练习 11.13

[c11e13.cpp](c11e13.cpp)

## 练习 11.14

[c11e14.cpp](c11e14.coo)

## 练习 11.15

* `mapped_type` : `vector<int>`
* `key_type` : `int` //key_type 不是 const 的
* `value_type` : `pair<const int, vector<int>>`

## 练习 11.16

```c++
map<string, int> m;
m["test"] = 2;
map<string, int> :: iterator iter = m.begin();
//*iter.first = "test";//错误用法，first成员是const的
*iter.second = 1;
```

## 练习 11.17

`multiset` 没有 `push_back`操作，所以第二个错误。

## 练习 11.18

`map<string, int>::const_iterator`