# Pointers

Pointers are an important concept in C++ that allow you to work with memory addresses directly. In this readme, we'll explore the different types of pointers and how to use them.

As we know 1 byte = 8 bits and every byte has their own address we can access them by that 

To store the address we use the data types called Pointers.

A pointer is a variable that stores the memory address of another variable. You can declare a pointer using the `*` operator, and you can get the address of a variable using the `&` operator. 

Here's an example:

```cpp
int num = 10;
int *ptr = &num;

std::cout << "Value of num: " << num << std::endl;
std::cout << "Address of num: " << &num << std::endl;
std::cout << "Value of ptr: " << ptr << std::endl;
std::cout << "Address of ptr: " << &ptr << std::endl;
std::cout << "Dereferenced value of ptr: " << *ptr << std::endl;
```

- Pointers are syntaxed with star (*) star shows it's pointer..
like int *a; so here a is the pointer.

## Array of Pointers

You can also create an array of pointers. This is useful when you want to work with multiple variables that are related to each other. 

Here's an example:

```cpp
int a = 10, b = 20, c = 30;
int *arr[3] = {&a, &b, &c};

for (int i = 0; i < 3; i++) {
    std::cout << "Value of arr[" << i << "]: " << *arr[i] << std::endl;
}
```

## Pointer to Pointer

A pointer can also point to another pointer. This is called a "pointer to pointer" or "double pointer". 

Here's an example:

```cpp
int num = 10;
int *ptr = &num;
int **ptr_ptr = &ptr;

std::cout << "Value of num: " << num << std::endl;
std::cout << "Value of ptr: " << ptr << std::endl;
std::cout << "Value of ptr_ptr: " << ptr_ptr << std::endl;
std::cout << "Dereferenced value of ptr_ptr: " << *ptr_ptr << std::endl;
std::cout << "Dereferenced value of double pointer: " << **ptr_ptr << std::endl;
```

## Smart Pointers

In C++, you can use smart pointers to manage memory automatically. There are three types of smart pointers: `unique_ptr`, `shared_ptr`, and `weak_ptr`. 

Here's an example of a `shared_ptr`:

```cpp
std::shared_ptr<int> ptr1 = std::make_shared<int>(10);
std::shared_ptr<int> ptr2 = ptr1;

std::cout << "Value of ptr1: " << *ptr1 << std::endl;
std::cout << "Value of ptr2: " << *ptr2 << std::endl;
```

- Double Pointers stores the address of pointer.

## Conclusion

In this readme, we covered the basics of C++ pointers, including pointer declaration and initialization, arrays of pointers, double pointers, and smart pointers. With this knowledge, you can manipulate memory directly in your C++ programs.


