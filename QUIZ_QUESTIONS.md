# Quiz Questions
<p align="center">
<img src="https://i.stack.imgur.com/WcBRI.png" alt="banner"></div>
</p>
## Big O notations, ordered from most efficient to least efficient:

- O(1): Constant time complexity. The algorithm's performance does not depend on the input size.

- O(log n): Logarithmic time complexity. Common in algorithms that divide the input in each step, such as binary search.

- O(n): Linear time complexity. The running time is directly proportional to the size of the input.

- O(n log n): Linearithmic time complexity. Common in efficient sorting algorithms like Merge Sort and Heap Sort.

- O(n^2): Quadratic time complexity. Common in algorithms with nested iterations.

- O(n^k): Polynomial time complexity, where k is a constant exponent greater than 2.

- O(2^n): Exponential time complexity. Common in recursive algorithms that solve a problem of size n by solving two smaller problems.

- O(n!): Factorial time complexity. Common in brute-force algorithms that generate all possible permutations or combinations.


## What is the time complexity of this function / algorithm?
```bash
void f(int n)
{
    printf("n = %d\n", n);
}
```
- [x] O(1)
- [ ] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

The time complexity of the f function is constant, denoted as O(1).
In Big O notation, O(1) represents constant time complexity, indicating
that the algorithm's performance does not scale with the input size.
No matter how large n becomes, the function will always take approximately
the same amount of time to execute.

```bash
void f(int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("[%d]\n", i);
    }
}
```
- [ ] O(1)
- [x] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

The time complexity of the function is O(n),
The function contains a for loop that iterates from 0 to n-1,
and the work done within the loop is proportional to the value of n. 
As a result, the time complexity is linear with respect to the input size.

```bash
void f(int n)
{
    int i;

    for (i = 0; i < n; i += 98)
    {
        printf("[%d]\n", i);
    }
}
```

- [ ] O(1)
- [x] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

In the loop, the variable i is incremented by 98 in each iteration. The loop will run for approximately n/98 iterations. However, in Big O notation, we ignore constant factors and coefficients, focusing on the dominant term. So, the time complexity is linear, O(n), where n is the input size.


```bash
void f(unsigned int n)
{
    int i;

    for (i = 1; i < n; i = i * 2)
    {
        printf("[%d]\n", i);
    }
}
```

- [ ] O(1)
- [ ] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [x] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

In each iteration of the loop, the loop variable i is multiplied by 2 (i = i * 2). This means that the loop will iterate through powers of 2: 1, 2, 4, 8, 16,
and so on, until i becomes greater than or equal to n.
The number of iterations required for i to become greater than or equal to n can be expressed as log base 2 of n. Therefore, the time complexity of the loop is O(log n).

```bash
var factorial = function(n) {
    if(n == 0) {
        return 1
    } else {
        return n * factorial(n - 1);
    }
}
```

- [ ] O(1)
- [x] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

In each recursive call, the function multiplies the current value of n by the result of the factorial of (n - 1). The recursion continues until n becomes 0, 
at which point the function returns 1. Therefore, the number of recursive calls is equal to the value of n.

```bash
foreach($numbers as $number)
{
    echo $number;
}
```

- [ ] O(1)
- [x] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

```bash
void f(unsigned int n)
{
    int i;
    int j;

    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n; j = j * 2)
        {
            printf("[%d] [%d]\n", i, j);
        }
    }
}
```

- [ ] O(1)
- [ ] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [x] O(nlog(n))
- [ ] O(2^n)

The outer loop is O(n), the inner loop is O(log(n)). 
So, the time complexity of the function is O(n * log n).

```python
def func(n):
    a=5
    b=6
    c=10
    for i in range(n):
        for j in range(n):
            x = i * i
            y = j * j
            z = i * j
    for k in range(n):
        w = a*k + 45
        v = b*b
    d = 33
```

- [ ] O(1)
- [ ] O(n)
- [ ] O(n!)
- [x] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [ ] O(2^n)

The dominant factor in determining the time complexity is the nested loop, which is O(n^2). The second loop and the constant time
operations do not change this dominant term, so the overall time complexity is O(n^2).

```bash
int Fibonacci(int number)
{
    if (number <= 1) return number;

    return Fibonacci(number - 2) + Fibonacci(number - 1);
}
```

- [ ] O(1)
- [ ] O(n)
- [ ] O(n!)
- [ ] O(n^2)
- [ ] O(log(n))
- [ ] O(nlog(n))
- [x] O(2^n)

The number of recursive calls grows exponentially with the input value. Each level of recursion branches into two additional calls,
leading to a binary tree structure of recursive calls. As a result, the time complexity can be expressed as O(2^n), 
where "n" is the input parameter representing the Fibonacci number to be computed.






