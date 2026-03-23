<p align="center">
  <a href="https://42.fr/en/homepage/" target="blank">
    <img src="https://upload.wikimedia.org/wikipedia/commons/8/8d/42_Logo.svg" width="150" alt="42 Logo" />
  </a>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Campus-Paris-000000?style=for-the-badge&logo=target" />
  <img src="https://img.shields.io/badge/Project-C++%20Modules-00599C?style=for-the-badge&logo=c%2B%2B" />
  <img src="https://img.shields.io/badge/Standard-C++98-00599C?style=for-the-badge&logo=c%2B%2B" />
</p>

<p align="center">
  <b>Mastering Object-Oriented Programming (OOP) in C++98.</b><br>
  A deep dive into the core principles of C++: Encapsulation, Inheritance, and Polymorphism.
</p>

<p align="center">
  <img src="https://img.shields.io/badge/OOP-Principles-green?style=flat-square">
  <img src="https://img.shields.io/badge/Memory-Management-red?style=flat-square">
  <img src="https://img.shields.io/badge/Templates-STL-orange?style=flat-square">
  <img src="https://img.shields.io/badge/Orthodox-Canonical%20Form-blue?style=flat-square">
</p>

---

## 📝 Project Overview
This repository contains the complete series of **C++ Modules** from the 42 Paris curriculum. Each module is designed to introduce specific concepts of C++ and Object-Oriented Programming, strictly adhering to the **C++98 standard**.

### Key OOP Principles Applied
- **Encapsulation**: Private attributes and public/protected interfaces.
- **Inheritance**: Creating hierarchical structures and reusing code.
- **Polymorphism**: Dynamic dispatch using virtual functions and abstract classes.
- **Abstraction**: Defining interfaces through pure virtual functions.



---

## 📂 Module Index

| Module | Topic | Core Learning | Link |
| :--- | :--- | :--- | :---: |
| **Module 00** | Basics | Namespaces, classes, member functions, stdio streams. | [View](./cpp00) |
| **Module 01** | Memory | Allocation, pointers to members, references, switch. | [View](./cpp01) |
| **Module 02** | Polymorphism | Fixed-point numbers, operator overloading, canonical form. | [View](./cpp02) |
| **Module 03** | Inheritance | Inheritance, shadowing, constructor/destructor chain. | [View](./cpp03) |
| **Module 04** | Subtypes | Subtype polymorphism, abstract classes, interfaces. | [View](./cpp04) |
| **Module 05** | Exceptions | Try/Catch blocks, custom Exception classes. | [View](./cpp05) |
| **Module 06** | Casts | Scalar conversion, static/dynamic/reinterpret/const casts. | [View](./cpp06) |
| **Module 07** | Templates | Function and class templates. | [View](./cpp07) |
| **Module 08** | STL | Containers (vector, list, map), iterators, algorithms. | [View](./cpp08) |
| **Module 09** | STL Deep Dive | Complex data management using STL containers. | [View](./cpp09) |

---

## 🛠️ Requirements & Compilation
- **Compiler**: `c++` (or `g++` / `clang++`)
- **Flags**: `-Wall -Wextra -Werror -std=c++98`
- **Canonical Form**: All classes follow the **Orthodox Canonical Form**:
  1. Default Constructor
  2. Copy Constructor
  3. Copy Assignment Operator
  4. Destructor



### Usage
Navigate to a specific exercise directory and use the `Makefile`:
```bash
cd cpp04/ex00
make
./polymorphism_test
