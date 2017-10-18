# Exercises - session 03

## Class Date
Implement a class `Date`. This class must meet the following requirements:
- it has three **private** attributes to represent day, month and year
- use a scoped enum for month
- it has the following **public** functions:
	- it has a constructor that takes as arguments a day, a month and a year. (Forget about the validation for now)
	- it has a `day()` function that returns the day
	- it has a `month()` function that returns the month
	- it has a `year()` function that returns the year
	- it has a function `add_day(const unsigned int n)` which adds `n` days. You have to take care to increment months and years accordingly (neglect leap years)

*Hints*:
- you can add more functions, maybe private, to simplify the implementation of the above (e.g., you can implement a function that adds 1 single day)
- remember to properly mark the member functions that do not modify the attributes as `const`
- you should think where to implement the member functions, i.e. inside the class declaration or outside
```
class Foo{
public:

int foo() {return an_int;} // note no ; at the end

int bar(); 

private:
int an_int;
}; // note the ; at the end of class definition

int Foo::bar(){
...
} // note no ; at the end of function implementation

```

Member functions that are *defined* inside the class are **inlined**
meaning that the compiler will replace the function call to its
implementation (thus the executable becomes bigger). A good rule is
that functions that are simple (e.g. a simple return or few lines of
code) should be inlined. Bigger functions are recommended to be
implemented outside the class. Remember that the name of the function
is prefixed with the class name (see the implementation of `bar()`
above).

## Helper functions
Implement the following external helper functions (i.e., they are not part of the class):
- `bool operator==(const Date& lhs, const Date& rhs);`
- **optional** `bool operator!=(const Date& lhs, const Date& rhs);`
- `std::ostream& operator<<(std::ostream& os, const Date& d);`
- **optional** `bool is_leap(const int y);`

*Hints*:
- the `operator<<` should return another `std::ostream&` such that you can chain multiple operators as follows
```
Date d1{...};
Date d2{...};
std::cout << d1 << '\n' << d2 << '\n';
```
- a typical implementation of `operator<<` is
```
std::ostream& operator<<(std::ostream& os, const Foo& f)
{
 return os << f.bar() << ", " << f.foo ; 
}
```
Of course you can add parenthesis, or whatever to embellish the output