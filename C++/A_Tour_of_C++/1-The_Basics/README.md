# The Basics

## Compile

I want to try and compile and see the object files by myself. Let's try that with a simple class in the main file 
`helloworld.cpp`. I tried it, just used `-c` option to compile to a `.o` file.

## Compile with modules

I want to check if it is any different to compile one file that imports the standard library. Let's try that with 
`hellomodules.cpp`. Couldn't do it with my current GCC 11 version.

## Function types

Ok, so I didn't know that a function is also a type, so the type of the function is something like `void(int, int)` or 
`type(type1)`.

## Constant expressions (constexpr) and constant evaluation (consteval)

This one is tricky, but basically `constexpr` are immutable expressions that we allow to be evaluated at compile time 
if possible. If not, then it can be computed at runtime. The tricky part is what are constants expressions? It seems 
that an expression is constant if its parts are constants. Nope, it has more rules but the most simple is:

1. If it is a declaration-initialization expression, then it must be fundamental types that comes from literal types or 
strings. Something that is not a complicated class.

2. If it is a declaration that uses a function, then the function must be `constexpr` or `consteval`.

`consteval` is used in functions to let know the compiler it must evaluate a function at compile time. Different to 
`constexpr` is that a function with that keyword may be evaluated at compile time or run time.
