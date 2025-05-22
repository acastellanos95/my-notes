# Managing threads

## How to create threads

Everything we need to manage threads are in the `threads` header.

## Usage of `std::thread`

```C++
void my_function();
std::thread t1(my_function); // typical scenario

struct functor {
    void operator()() const {
        do_something();
    }
}

functor f;
std::thread t2(f); // use function objects or functors

// avoid the use of std::thread t2(functor()); is a function that returns a thread and takes as an argument a pointer to function without parameters and that returns a functor (is a type definition. function type).

// If you want to just pass a temporal functor so thread copies it.
std::thread t3{ functor() }; // call explicit constructor
std::thread t3((functor()));

// Use lambdas which under the hood are using functors.
std::thread t4([](){ do_something(); });
```

## Thread termination

When thread's destructor is called, a call to `std::terminate` is made so if you didn't join correctly the thread or left it to run on the background it will terminate early the program.

## Lifetime issues

Detaching a thread with some memory access can cause an UB if it accesses an invalid state of that memory, like accesing a destroyed object. Example: `potential-access-dangle-reference.cpp`

To avoid this, as a rule of thumb try not to use a thread in a function and use function's local variables. If is necessary, then copy the local variables.

## join

Using join is a brute force technique to wait for a thread and clear the storage. Example: `wait-for-thread-to-finish.cpp`

## Thread guard

Because we don't know about `std::jthread` we can create a thread that follows RAII, join the thread if scope is done (normally or exceptionally). Example: `thread_guard.cpp`

Danger!!! if the thread that created the child thread throws, it just calls `std::terminate` and exits.
