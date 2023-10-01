# Recursion in C++
Recursion is a programming technique that involves a function calling itself. In other words, recursion is a way to solve a problem by breaking it down into smaller sub-problems. The idea is to keep breaking the problem down into smaller and smaller pieces until the pieces are small enough to be solved without further recursion.

Basic example

Here's a simple example of a recursive function in C++ that calculates the factorial of a number:

```cpp
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
```
In this example, the `factorial` function calls itself with the argument `n - 1`. This is repeated until the argument `n` is equal to 0, at which point the function returns 1. The result of each function call is multiplied together to get the final result.

## Terminating condition
It's important to have a terminating condition in a recursive function to prevent an infinite loop. In the example above, the terminating condition is when `n` is equal to 0. If this condition were not present, the function would keep calling itself with decreasing values of `n` until the program crashes or runs out of memory.

## The call stack
When a function calls itself, the current function call is suspended and the new function call is added to the call stack. The call stack keeps track of the current position in the program and the values of the local variables. When a function returns, the top of the call stack is removed and the program returns to the previous position.

In recursive functions, the call stack can get very deep if the recursion goes on for a long time. This can cause a stack overflow, which is when the call stack runs out of memory.

## Advantages and disadvantages of recursion
Recursion can be a powerful and elegant programming technique, but it has its advantages and disadvantages.

Advantages:

- Can simplify code and make it easier to understand
- Can solve certain problems more easily than iterative solutions
- Can be a more elegant solution in certain cases
 
Disadvantages:

- Can be slower and use more memory than iterative solutions
- Can be harder to debug and understand if the recursion is very deep
- Can cause a stack overflow if the recursion goes on for a long time

## Conclusion

Recursion is a powerful and elegant programming technique that can be useful in certain situations. However, it's important to have a terminating condition to prevent an infinite loop, and to be aware of the potential for stack overflow.



