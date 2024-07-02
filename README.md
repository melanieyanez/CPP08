# CPP08 - EasyFind, Span & MutantStack

## Description

This project is part of the 42 school curriculum and consists of three main exercises:

1. **EasyFind** (ex00): A template function to find a value in a container.
2. **Span** (ex01): A class that stores a range of numbers and provides methods to find the shortest and longest span between any two numbers.
3. **MutantStack** (ex02): A stack that allows iterating through its elements like a container.

## Prerequisites

- C++ compiler compatible with the C++98 standard
- Makefile

## Installation

Clone this repository to your local directory:

```sh
git clone https://github.com/melanieyanez/CPP08.git
cd CPP08
```

## Compilation

Use the provided Makefile in each exercise directory to compile the programs:

### ex00 - EasyFind

```sh
cd ex00
make
```

### ex01 - Span

```sh
cd ../ex01
make
```

### ex02 - MutantStack

```sh
cd ../ex02
make
```

## Usage

### ex00 - EasyFind

The `easyfind` program is designed to find the first occurrence of an integer in a container.

#### Example usage:

```sh
./easyfind
./easyfind_list
```

### ex01 - Span

The `span` program stores a range of numbers and provides the shortest and longest span between any two numbers.

#### Example usage:

```sh
./span
```

### ex02 - MutantStack

The `mutantstack` program is a stack that allows iterating through its elements like a container.

#### Example usage:

```sh
./mutantstack
```

## Project Structure

```
.
├── README.md
├── ex00
│   ├── Makefile
│   ├── easyfind.hpp
│   ├── main.cpp
│   └── main_list.cpp
├── ex01
│   ├── Makefile
│   ├── Span.cpp
│   ├── Span.hpp
│   └── main.cpp
└── ex02
    ├── Makefile
    ├── MutantStack.hpp
    ├── MutantStack.tpp
    └── main.cpp
```

- **README.md**: This documentation file.
- **ex00**: Directory containing the code and files for exercise 00 (EasyFind).
- **ex01**: Directory containing the code and files for exercise 01 (Span).
- **ex02**: Directory containing the code and files for exercise 02 (MutantStack).

## Implementation Details

### ex00 - EasyFind

The `easyfind` template function:

1. Uses `std::find` to search for the value in the container.
2. If the value is found, returns an iterator to the found value.
3. If the value is not found, throws a `std::runtime_error`.

### ex01 - Span

The `Span` class:

1. Stores a range of numbers.
2. Provides methods to add numbers and ranges of numbers.
3. Provides methods to find the shortest and longest span between any two numbers.
4. Throws exceptions if the span is full or if there are not enough numbers to find a span.

### ex02 - MutantStack

The `MutantStack` class:

1. Inherits from `std::stack`.
2. Adds iterator functionality to allow iteration through elements.

## Author

This project was written by Melanie Yanez Pena as part of the 42 school curriculum.
