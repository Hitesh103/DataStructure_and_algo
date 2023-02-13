# 2D Arrays in C++

A two-dimensional (2D) array is a data structure that stores elements in a grid-like layout, with rows and columns. In C++, a 2D array is an array of arrays, where each inner array represents a row of the 2D array.

## Declaring a 2D Array

To declare a 2D array in C++, we need to specify both the number of rows and columns. The syntax for declaring a 2D array is as follows:

```cpp
type name[rows][columns];
```

For example, to declare a 2D array of size 3x4, we can use the following code:

```cpp
int arr[3][4];
```


## Initializing a 2D Array

There are several ways to initialize a 2D array in C++. One way is to use a nested loop to initialize each element of the array, as follows:


```cpp
int arr[3][4];
for (int i = 0; i < 3; i++) {
for (int j = 0; j < 4; j++) {
arr[i][j] = 0;
}
}
```

Another way to initialize a 2D array is to use an initializer list, as follows:



```cpp
int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
```


## Accessing Elements in a 2D Array

To access an element in a 2D array, we use the following syntax:


```cpp
name[row][column];
```

For example, to access the element in the 2nd row and 3rd column of the above-declared `arr` 2D array, we use the following code:


```cpp
int x = arr[1][2];
```

## Iterating Over a 2D Array

To iterate over a 2D array, we can use nested loops, with one loop to iterate over the rows and another loop to iterate over the columns, as follows:


```cpp
for (int i = 0; i < 3; i++) {
for (int j = 0; j < 4; j++) {
cout << arr[i][j] << " ";
}
cout << endl;
}
```

## Conclusion

2D arrays are a useful data structure for storing and manipulating grid-like data in C++. With this guide, you should have a good understanding of how to declare, initialize, access elements, and iterate over 2D arrays in C++.