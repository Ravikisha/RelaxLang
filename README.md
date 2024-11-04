# RelaxLang

RelaxLang is a simple, interpreted programming language implemented in Java. It is inspired by the Lox programming language introduced in Robert Nystrom's *Crafting Interpreters*. RelaxLang is designed to be easy to understand and serve as an educational tool for those interested in language design and implementation.

## Features

- **Dynamic Typing**: Variables do not require type declarations.
- **First-Class Functions**: Functions can be assigned to variables, passed as arguments, and returned from other functions.
- **Classes and Inheritance**: Supports object-oriented programming concepts with class definitions and inheritance.
- **Built-In Standard Library**: Includes useful functions and utilities to enhance the language experience.

## Getting Started

### Prerequisites

To run RelaxLang, you need to have the following installed:

- [Java JDK 11 or later](https://www.oracle.com/java/technologies/javase-jdk11-downloads.html)

### Building the Project

1. Clone the repository:

   ```bash
   git clone https://github.com/your-username/RelaxLang.git
   cd RelaxLang
   ```

2. Compile the source code (if necessary):

   ```bash
   javac src/*.java
   ```

### Running RelaxLang

You can run the RelaxLang interpreter using the provided JAR file. 

```bash
java -jar lox.jar
```

#### Running Directly from the Docker
```bash
docker push ravikishan63392/relaxlang:lastest
docker run -it ravikishan63392/relaxlang:lastest
```

### Using Docker

You can also run RelaxLang using Docker. 

1. Build the Docker image:

   ```bash
   docker build -t your-username/relaxlang .
   ```

2. Run the Docker container:

   ```bash
   docker run -it your-username/relaxlang
   ```

## Example Usage

You can write RelaxLang scripts and run them through the interpreter. For example, create a file `example.rl` with the following code:

```plaintext
fun greet(name) {
    print("Hello, " + name + "!");
}

greet("World");
```

Run it with:

```bash
java -jar lox.jar example.rl
```

# RelaxLang Usage Guide

This guide provides examples for using the features of the RelaxLang interpreter.

## 1. Dynamic Typing

In RelaxLang, you don't need to declare variable types. The interpreter infers the type at runtime.

```plaintext
var name = "RelaxLang";  // String
var version = 1.0;       // Float
var isActive = true;     // Boolean

print(name);            // Output: RelaxLang
print(version);         // Output: 1.0
print(isActive);        // Output: true
```

## 2. First-Class Functions

Functions in RelaxLang can be assigned to variables, passed as arguments, and returned from other functions.

### Defining a Function

```plaintext
fun add(a, b) {
    return a + b;
}

var sum = add(5, 3);
print(sum);  // Output: 8
```

### Passing Functions as Arguments

```plaintext
fun operate(func, x, y) {
    return func(x, y);
}

var result = operate(add, 10, 15);
print(result);  // Output: 25
```

## 3. Classes and Inheritance

RelaxLang supports object-oriented programming with classes and inheritance.

### Defining a Class

```plaintext
class Animal {
    var name;

    init(name) {
        this.name = name;
    }

    fun speak() {
        print(this.name + " makes a sound.");
    }
}
```

### Inheriting from a Class

```plaintext
class Dog < Animal {
    fun speak() {
        print(this.name + " barks.");
    }
}

var myDog = Dog("Buddy");
myDog.speak();  // Output: Buddy barks.
```

## 4. Control Flow

RelaxLang includes control flow statements such as `if`, `else`, and loops.

### If-Else Statement

```plaintext
var age = 18;

if (age < 18) {
    print("Minor");
} else {
    print("Adult");
}
```

### Loops

```plaintext
for (var i = 0; i < 5; i = i + 1) {
    print(i);  // Output: 0 1 2 3 4
}

var j = 0;
while (j < 5) {
    print(j);
    j = j + 1;  // Output: 0 1 2 3 4
}
```

## 5. Built-In Standard Library

RelaxLang comes with a set of built-in functions for common tasks.

### String Manipulation

```plaintext
var text = "Hello, RelaxLang!";
print(text.length());  // Output: 20
print(text.upper());    // Output: HELLO, RELAXLANG!
```

### Array Operations

```plaintext
var numbers = [1, 2, 3, 4, 5];
print(numbers[2]);  // Output: 3

numbers.push(6);     // Add to the end
print(numbers);      // Output: [1, 2, 3, 4, 5, 6]

numbers.pop();       // Remove the last element
print(numbers);      // Output: [1, 2, 3, 4, 5]
```

## Contributing

Contributions are welcome! If you would like to contribute to RelaxLang, please follow these steps:

1. Fork the repository.
2. Create a new branch for your feature or bug fix.
3. Make your changes and commit them.
4. Push your changes to your forked repository.
5. Submit a pull request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- Inspired by Robert Nystrom's *Crafting Interpreters*.
- Thanks to the open-source community for their support and contributions.
