#### 练习 7.1

[c07e01.cp](c07e01.cpp)

#### 练习 7.2

[Sales_data.h](Sales_data.h)

#### 练习 7.3

[c07e03.cpp](c07e03.cpp)

#### 练习 7.4

[Person.cpp](Person.cpp)

#### 练习 7.5

[Person.cpp](Person.cpp)

#### 练习 7.6

[Sales_data.h](Sales_data.h)

#### 练习 7.7

[c07e07.cpp](c07e07.cpp)

#### 练习 7.8

* read将会改变Sales_data数据，不能const
* print不会改变Sales_data数据，使用const保证安全

#### 练习 7.9

[Person.cpp](Person.cpp)

#### 练习 7.10

连续读入两个数据存入data1和data2

#### 练习 7.11

[c07e11.cpp](c07e11.cpp) | [Sales_data.h](Sales_data_711.h)

#### 练习 7.12

[Sales_data.h](Sales_data_712.h)

#### 练习 7.13

[c07e13.cpp](c07e13.cpp) | [Sales_data.h](Sales_data_712.h)

#### 练习 7.14

`Sales_data():units_sold(0), revenue(0){}`

#### 练习 7.15

[Person.h](Person.h)

#### 练习 7.16

* 没有限定

* 可以供类外部分访问、使用的接口部分

* 类的实现细节

#### 练习 7.17

* class : 默认 private

* struct : 默认 public

#### 练习 7.18

* 封装 : 将一些实现设置为private，从而隐藏细节

* 用处 ：保护数据安全、方便重构程序而不影响使用者

#### 练习 7.19

[Person.h](Person_719.h)

#### 练习 7.20

需要类外成员访问类的私有成员时

#### 练习 7.21

[Sales_data.h](Sales_data_721.h)

#### 练习 7.22

[Person.h](Person_722.h)

* **友元声明只是指定了访问权限，而不是真正意义上的声明，在使用友元之前，必须先进行声明。如`Person`和`Sales_data`中的`read`函数**

* **有些编译器并没有上述要求，但是依旧要按照上述要求编写程序**
