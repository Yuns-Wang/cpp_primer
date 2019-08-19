# 第15章 面向对象程序设计

## 练习 15.1

基类希望其派生类各自定义适应自身版本的成员叫做*虚成员*
* virtual只能存在于类内声明中，而不能存在于类外定义
* 派生类必须对虚函数进行声明

`virtual double net_price (std::size_t n) const;`

## 练习 15.2

* `protected`成员可以被派生类访问，而不能被其他类访问。
* `private`成员既不能被派生类访问，也不能被其他类访问。

## 练习 15.3

[quote.h](quote.h) | [ex15_03.cpp](ex15_03.cpp)

## 练习 15.4

(a) 错误，一个类不能继承它自己

(b) 错误，类定义

(c) 错误，派生类声明和其他普通类一样，不包含派生列表

## 练习 15.5

[bulk_quote.h](bulk_quote.h)

## 练习 15.6

[limited_quote.h](limited_quote.h)

## 练习 15.7

静态类型：编译期间，是变量声明的类型

动态类型：运行期间，是变量指针或引用对应内存中的类型

## 练习 15.9

基类指针或则引用对应派生类对象。

`base &b = d;`(d是派生类对象)

`base *b = d;`

`base b = d;`(d的非基类成员被切除)

## 练习 15.10

`ifstream`派生类向`istream &`基类引用转换

## 练习 15.11

[ex15_11.cpp](ex15_11.cpp)

## 练习 15.12

有必要，override代表该函数覆盖了基类的虚函数，仍为虚函数；final代表该虚函数禁止被覆盖。
只有虚函数才能被标为final，普通函数也可以被覆盖。

## 练习 15.13

修改： `void print(ostream &os) override {base::print(os); os << " " << i; }`

## 练习 15.14

(a) `bobj.print()` 编译期 base::print()
(b) `dobj.print()` 编译期 derived::print()
(c) `bp1->name()` 编译期，base::name() name() 不是虚函数，所以没有动态绑定，在编译期运行
(d) `bp2->name()` 编译期 base::name()
(e) `br1.print()` 动态绑定 运行期 base::print() 动态绑定/运行时调用的条件：虚函数，指针或引用
(f) `br2.print()` 动态绑定 运行期 derived::print()

## 练习 15.15

[disc_quote.h](disc_quote.h) | [bulk_quote.h](bulk_quote.h)

## 练习 15.16

[limited_quote.h](limited_quote.h)

## 练习 15.17

抽象类不能定义

## 练习 15.18

