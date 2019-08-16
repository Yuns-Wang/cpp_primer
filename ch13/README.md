# 第13章 拷贝控制

## 练习 13.1

拷贝构造函数(coppy constructor):第一个参数是 *自身类型引用* ，并且 *其他参数均有默认值* 的 *构造函数* 。
使用拷贝构造函数的情况：
* "="格式的初始化：`string s = "abcd";`
* 函数中，参数传递和返回值（非引用类型）
* {} 初始化数组或聚合类

## 练习 13.2

`Sales_data::Sales_data(Sales_data rhs);`非法：拷贝构造函数的第一个参数需要是自身类型的引用。`Sales_data::Sales_data(Sales_data& rhs)`
非法版本拷贝构造函数调用时，要将实参赋值给`rhs`，就要调用拷贝构造函数，然后又要赋值给另外的`rhs`，如此无限循环。

## 练习 13.3

* StrBlob: 使用合成的拷贝初始化函数，shared_ptr 被复制给新的类。
* StrBlobPtr: 

## 练习 13.4

`Point foo_bar(Point arg)` 参数传递
`Point local = arg` "="形式初始化
`*heap = new Point(global);` 参数传递
`Point pa[4] = {local, *heap}` {}初始化数组
`return *heap` 函数返回

## [练习 13.5](ex13_05.h)

## 练习 13.6

1. 拷贝赋值运算符：`Foo & operator=(const Foo &)` 
   * **返回自身引用**，为了与内置赋值运算符相同
   * **必须是成员函数**，左侧运算对象默认绑定到this指针，右侧运对象当作参数传入
2. 使用“=”用同类型对象赋值时调用。
3. 默认拷贝赋值运算符作用：
   * 将右侧每个非static成员赋予左侧
   * 禁止使用拷贝赋值运算符
4. 类未定义拷贝赋值运算符时会默认生成。

## 练习 13.7

1. StrBlob：shared_ptr成员会被拷贝复制给左侧成员，增加引用计数
2. StrBlobPtr：

## [练习 13.8](ex13_05.h)
