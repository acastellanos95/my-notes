# Introduction

## Memory model

In C++11 memory model changed to allow concurrency/multithreaded development.

## What is concurrency?

Concurrency is the execution of multiple independent activities in parallel, if we have a computer with a single processor, the OS will use context switching to provide a concurrency experience. If the machine has many processors, then we can use independent processors to run real multitasks. But in the real world this doesn't happen because the OS will have more processes than processors so context switching will happen in the processors.

## Multiple process or single process multiple threads?

We can have multiple processes to achieve concurrency of tasks, but complications arise because of processes isolation by the OS an IPC (Inter-process communication) will be needed by using sockets, files, shared memory, etc. Creating processes is not cheap to the OS because every process that is created needs its own address space, process info.

Other type of concurrency can be achieved by creating threads inside a process, which is cheaper, all threads share the same address space, globals, etc.

## Concurrent Hello World

Run the following command:
```bash
g++ -o hello-world-concurrent hello-world-concurrent.cpp
./hello-world-concurrent
```
```out
Hello Concurrent World
```
