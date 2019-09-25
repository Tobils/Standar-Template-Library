# POINTER DAN REFERENCES

## What is Array Decay?
The loss of type and dimensions of an array is known as decay of an array.This generally occurs when we pass the array into function by value or pointer. What it does is, it sends first address to the array which is a pointer, hence the size of array is not the original one, but the one occupied by the pointer in the memory.

## How to prevent Array Decay?
A typical solution to handle decay is to pass size of array also as a parameter and not use sizeof on array parameters (See this for details)
Another way to prevent array decay is to send the array into functions by reference. This prevents conversion of array into a pointer, hence prevents the decay.

## Opaque Pointer
**What is an opaque pointer?**
Opaque as the name suggests is something we can’t see through. e.g. wood is opaque. Opaque pointer is a pointer which points to a data structure whose contents are not exposed at the time of its definition.
**Why Opaque pointer?**
There are places where we just want to hint the compiler that “Hey! This is some data structure which will be used by our clients. Don’t worry, clients will provide its implementation while preparing compilation unit”. Such type of design is robust when we deal with shared code. Please see below example:

Let’s say we are working on an app to deal with images. Since we are living in a world where everything is moving to cloud and devices are very affordable to buy, we want to develop apps for windows, android and apple platforms. So, it would be nice to have a good design which is robust, scalable and flexible as per our requirements. We can have shared code which would be used by all platforms and then different end-point can have platform specific code.
To deal with images, we have a CImage class exposing APIs to deal with various image operations (scale, rotate, move, save etc).
Since all the platforms will be providing same operations, we would define this class in a header file. But the way an image is handled might differ across platforms. Like Apple can have different mechanism to access pixels of an image than Windows does. This means that APIs might demand different set of info to perform operations

## References in C++
When a variable is declared as reference, it becomes an alternative name for an existing variable. A variable can be declared as reference by putting ‘&’ in the declaration.
**Applications** :
   1. **Modify the passed parameters in a function** : If a function receives a reference to a variable, it can modify the value of the variable. For example, in the following program variables are swapped using references.
   2. **Avoiding copy of large structures** : Imagine a function that has to receive a large object. If we pass it without reference, a new copy of it is created which causes wastage of CPU time and memory. We can use references to avoid this. [link](https://stackoverflow.com/questions/15181765/passing-structs-to-functions)
   3. In For Each Loops to modify all objects : We can use references in for each loops to modify all elements
   4. In For Each Loops to avoid copy of objects : We can use references in for each loops to avoid copy of individual objects when objects are large.

A pointer can be declared as void but a reference can never be void
For example
```c++
int a = 10;
void* aa = &a;. //it is valid
void &ar = a; // it is not valid
```

In C++, Reference variables are safer than pointers because reference variables must be initialized and they cannot be changed to refer to something else once they are initialized. But there are exceptions where we can have invalid references.