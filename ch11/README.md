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

## 练习 11.19

`multiset<Sales_data, bool (*)(const Sales_data&, const Sales_data&)>::const_iterator`

## 练习 11.20

[c11e20.cpp](c11e20.cpp)

使用下标的版本更容易。

下标操作可以包含 插入未存在的元素、递增已存在的元素 两方面功能。

## 练习 11.21

插入新读取的单词，如果已经存在则递增，否则使其值为1。

## 练习 11.22

`std::pair<std::string, std::vector<int>>`

`std::pair<std::map<std::string, std::vector<int>>::iterator, bool>`

## 练习 11.23

`multimap<string, vector<string>>`

## 练习 11.24

在m中插入 键值对 0-1

## 练习 11.25

编译通过但是运行出错，访问越界

## 练习 11.26

`map<string, size_t>`

`string` 

`size_t`

## 练习 11.27

* `count` 统计某关键字元素的数量
* `find` 在容器中寻找某关键字元素位置

## 练习 11.28

`map<string, vector<int>> smap;`

`map<string, vector<int>>::iterator des = smap.find("ni");`

## 练习 11.29

* `upper_bound` ~~~返回尾后迭代器~~~返回第一个可以安全插入该元素的位置
* `lower_bound` ~~~返回尾后迭代器~~~同上
* `equal_range` ~~返回 `pair<c.end(), c.end()>`~~ 返回可安全插入位置的pair

## 练习 11.30

pos.first 代表 `equal_range` 返回第一个迭代器，对其 `->second` 代表访问 map 的对应值。

## 练习 11.31

[c11e31.cpp](c11e31.cpp)

## 练习 11.32

[c11e32.cpp](c11e31.cpp)

## 练习 11.33

[c11.33.cpp](c11e33.cpp)

## 练习 11.34

~~程序有可能报错，因为可能使用下标访问不存在的关键字。下标操作不做参数检查。~~

失败，使用下标操作访问不存在的关键字，会插入此关键字，将值进行值初始化。

* 常量 map 不能使用下标操作

## 练习 11.35

当规则文件中出现多次同一个转换关键字时，会有差别：

下标版本会最终使用最后一个版本，`insert` 版本使用第一个版本

## 练习 11.36

该关键字会被删除（被空字符串代替）

## 练习 11.37

* 有序容器中元素排列天然按照一定顺序，但是维护成本比较高；无序容器使用 hash 函数管理元素，没有特殊的所需，维护成本很低。
* 

## 练习 11.38

[word_count](word_count.cpp) | [word_transform_unordered](c11e38.cpp)