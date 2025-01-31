# Object-Oriented Programming

Object-oriented design technique using C++ Class

## Contents

- [00. C++ Tutorial](./00.%20C++%20Tutorial)
- [01. Defining a Class](./01.%20Defining%20a%20Class)
- [02. Using a Class](./02.%20Using%20a%20Class)
- [03. Operation overloading](./03.%20Operation%20Overloading)
- [04. Inheritance](./04.%20Inheritance)
- [05. Polymorphism](./05.%20Polymorphism)
- [06. Templates](./06.%20Templates)
- [07. Exception Handling](./07.%20Exception%20Handling)

---

## Priciples

- Encapsulation (캡슐화)
  - Hiding implementation details, only exposing the "public interface"
- Abstraction (추상화)
  - Selecting data to show only the relevant details to the object
- Inheritance (상속성)
  - The ability to acquire some/all properties of another object
- Polymorphism (다형성)
  - Provision of a single interface to entities of different types

<img width="100%" alt="스크린샷 2021-09-08 오전 9 18 22" src="https://user-images.githubusercontent.com/73745836/132425872-2a60a41a-cbab-47aa-a41a-092640fefb07.png">

## Goals

- Robustness
  - We want software to be capable of handling unexpected inputs that are not explictly defined for its application.
- Adaptabillity (≒ Portabillity)
  - Software needs to be able to evolve over time in response to changing conditions in its environment.
- Reusabillity
  - The same code should be usable as a component of different systems in various applications.

<div align="center"><img width="50%" alt="스크린샷 2021-09-08 오전 9 26 12"  src="https://user-images.githubusercontent.com/73745836/132426405-ea39beb8-f3c3-4d18-8a77-22f99ececbcf.png"></div>

## Object-Oriented Software Design

- Responsibilities
  - Divide the work into different actors, each with a different responsibility.
- Independence
  - Define the work for each class to be as independent from other classes as possible.
- Behaviors
  - Define the behaviors for each class carefully and precisely, so that the consequences of each action performed by a class will be understood by classes that interact with it.

## Defining and Using a Class

```C++
class ClassName {
Access specifier:
  Data members;
  Member functions() { }
};
```

## Access Specifiers

```C++
class MyClass {
public:       // public access specifier
  MyClass();  // constructor
  int x;      // public attribute

private:      // private access specifier
  int y;      // private attribute

protected:    // protected access specifier
  int z;      // protected attribute
};
```

- public
  - Members are aceessible from outside the class.
- private
  - Members cannot be accessed (or viewed) from outside the class. (독립성을 높이는 설계)
- protected
  - Members cannot be accessed from outside the class, however, they can be accessed in inherited classes.

## Example

```C++
class Student {
public:
  string name;
  int id;
  float gpa;
  void outputInfo();
private:
  bool scholarship;
  void calcGPA();
};

Student summaCumLaude
```

- Syntax : `class_name instance_name;`
- Variable `summaCumLaude` is an instance of the class `Student`.
- It is an object of the type `Student`.
