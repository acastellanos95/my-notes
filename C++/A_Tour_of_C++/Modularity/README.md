# Modularity

## Translation unit

ok, so a cpp file compiled with headers is a translation unit. If we have cpp's files that include the same header, the header will be compiled a lot of times.

## Imports

Not really well implemented yet in compilers

## Copy Elision

Compiler will place the construction of an object in the optimal place.

```C++
MyStruct CreateStruct() {
    return MyStruct();
}

auto ms = CreateStruct();
/*
In theory, return the MyStruct() in the function should be copied to the caller.
And copied again into ms (copy constructor). But, copy elision should optimize into:
auto ms = MyStruct();
One copy!!!!!
*/
```
