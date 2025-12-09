# Day 4 – Functions in C

Day 4 focuses on demystifying functions: how they are declared, defined, called, and composed to solve real problems. The ten practice programs in this folder progress from the simplest `printf` helper to function pointers.

## Function Building Blocks

- **Declaration vs. Definition vs. Call**: A declaration (prototype) tells the compiler a function’s name, return type, and parameter list. A definition provides the body. A call transfers control to the function body and optionally collects a return value.
- **Parameters vs. Arguments**: Parameters are the placeholders in the function signature; arguments are the actual values passed at the call site.
- **Return Values**: The `return` statement hands a value back to the caller. Functions can return any scalar or struct type; use meaningful types to avoid implicit conversions.
- **`void` Functions**: When no data needs to be returned, declare the function as `void`. These are often used for logging, I/O helpers, and hardware side effects.
- **Variable Scope**: Variables declared inside a function (or block) are local and cease to exist after the function returns. Global variables live for the program’s lifetime but should be used sparingly to keep functions pure and testable.
- **Function Prototypes**: Placing prototypes above `main` (or inside a header) lets the compiler type-check calls even before definitions are encountered, which is crucial in multi-file projects.
- **Recursion**: A recursive function calls itself with a smaller subproblem until it reaches a base case. Carefully design base cases to avoid infinite recursion and stack overflows.

### Template Example

```c
// Declaration / prototype
int sum(int a, int b);

// Definition
int sum(int a, int b) {
	return a + b;
}

int main(void) {
	int total = sum(3, 4);   // Call with arguments
	printf("%d\n", total);
	return 0;
}
```

## Program Walkthroughs

1. `program1_print_message.c` – Introduces a simple `printHello` helper to show how even trivial output can be encapsulated in a reusable function.
2. `program2_addition_function.c` – Demonstrates a `void` function with parameters: user input is collected in `main`, passed to `add`, and printed there.
3. `program3_return_sum.c` – Upgrades the previous example by returning the computed sum, contrasting returning a value vs. printing inside the helper.
4. `program4_calculator_functions.c` – Groups four arithmetic helpers and a `switch` in `main` to show multi-function collaboration and guarding against division by zero.
5. `program5_prime.c` – Implements `isPrime` with early exit logic, illustrating how boolean-style functions communicate success/failure back to the caller.
6. `program6_palindrome.c` – Uses `isPalindrome` to reverse digits locally, reinforcing the difference between input arguments and internal working copies.
7. `program7_recursive_factorial.c` – First recursive example: `factorial` reduces the problem (`n * factorial(n-1)`) until the base case `n <= 1`.
8. `program8_recursive_fibonacci.c` – Recursively generates the Fibonacci sequence and loops through multiple calls to print a series.
9. `program9_library_function.c` – Mimics a tiny math utility library with `max`, `min`, and `abs`, emphasizing function reuse.
10. `program10_function_pointers.c` – Introduces function pointers selected via a `switch`, showing how to choose the implementation at runtime for a calculator.

## Building and Running

```powershell
cd c:\myspac\90days\embedded-systems-90day\day_4
gcc program7_recursive_factorial.c -o output\factorial.exe
./output/factorial.exe
```

Adjust the source filename to compile a different exercise. Always check compiler warnings (`-Wall -Wextra`) to reinforce correct function signatures.
