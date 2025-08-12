# How to install
- Import `Log.hpp` and `Log.cpp` to your cpp project
- Include `Log.hpp` to you main header if needed or directly in your `.cpp` files

# How to use stacklogs
## To log information
- Use the `LOG()` macro anywhere in a function or a class
- You can use the LOG() macro exactly in a `std::cout << "string" << some_int_variable << some_overload_class << std::endl` way
but without the `std::cout` or `std::endl`
- You still need the `<<` operator between each elements
## To follow the code execution through function calls
- Just put `AUTO_LOG` once per function (preferably at the start)

# Example
```cpp
int foo(int x)
{
	AUTO_LOG
	LOG("X = " << x)

	x = bar(x);
	LOG("X = " << x)
	return (x);
}
```
```cpp
int bar(int y)
{
	AUTO_LOG
	LOG("Y = " << (y * y) << "yeah its just a power operation...")

	return(y * y)
}
```
