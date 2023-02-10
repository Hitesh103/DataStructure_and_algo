# C++ Arrays

Arrays in C++ are used to store multiple values of the same data type in a single variable. They are important data structures that can be used in various applications, ranging from simple to complex. In this guide, we will cover the basics and advanced topics of arrays in C++.

## Table of Contents

1. Array Declaration and Initialization
2. Accessing Array Elements
3. Array Size and Looping through Array Elements


## 1. Array Declaration and Initialization

Arrays in C++ can be declared by specifying the data type, followed by the name of the array and the size of the array in square brackets.

For example:

```cpp
int arr[5];
```

Arrays can also be initialized at the time of declaration, like this:

```cpp
int arr[5] = {1, 2, 3, 4, 5};
```

If the size of the array is not specified, C++ automatically calculates the size based on the number of elements in the initialization list. 

 For example:
 ```cpp
 int arr[] = {1, 2, 3, 4, 5};
```

## 2. Accessing Array Elements

Array elements can be accessed using their index, which starts from 0 and goes up to size-1. 

For example:

```cpp
int arr[] = {1, 2, 3, 4, 5};
cout << arr[0]; // outputs 1
cout << arr[4]; // outputs 5
```

## 3. Array Size and Looping through Array Elements

The size of an array can be determined using the sizeof operator. For example:

```cpp
int arr[] = {1, 2, 3, 4, 5};
int size = sizeof(arr) / sizeof(arr[0]);
cout << "Array size: " << size << endl;
```

To loop through the elements of an `array`, a `for` loop can be used. For example:

```cpp
int arr[] = {1, 2, 3, 4, 5};
for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
    cout << arr[i] << " ";
}
```

## 4. Array as Function Arguments

Arrays can be passed as arguments to a function, just like any other data type. 

For example:

```cpp
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[]= {1, 2, 3, 4, 5};
int size = sizeof(arr) / sizeof(arr[0]);
printArray(arr, size);
return 0;
}
```


Note that in C++, when an array is passed to a function, it is converted to a pointer to the first element of the array. This means that the size of the array cannot be determined inside the function. Therefore, the size of the array must be passed as an argument to the function.

