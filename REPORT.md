
# Project Report: `ft_printf`

## 1. Objective

The goal of this project was to implement a function called `ft_printf` that replicates the behavior of the standard C `printf` function. The function must handle formatted output, support a subset of format specifiers, and correctly process flags, width, precision, and length modifiers. It should also return the number of characters printed, just like the standard `printf`.

The project only allows the use of a limited set of standard library functions, and variadic arguments must be handled manually using `stdarg.h`.

This implementation includes the bonus part, which supports additional specifiers and flag combinations as defined in the project instructions.

## 2. Implementation Summary

- **Language:** C  
- **Key features:**
  - Supports specifiers: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%%`
  - Handles **flags**: `-`, `0`, `#`, `+`, and space
  - Supports **width** and **precision**
  - Uses `va_list` to manage variadic arguments

- **Interesting design decisions:**
  - Uses a `t_mdf` struct that is composed of flags used for modifiers. The function `t_mdf	*ft_validate_mdf(char *str, int *i, t_mdf *mdf)` receives a string starting from the first character after a `%`, populates the `t_mdf` struct, and checks if it's valid.
  - **NO MEMORY ALLOCATIONS, NO PROBLEMS!** I wanted to complete this project without running *valgrind* even once, so I forbade myself from using `malloc`. (Don’t worry — I ended up using *valgrind* once for peace of mind.)

## 3. Challenges Faced

- **How to handle undefined behaviour**  
  This is more of a 42-school thing than a me-thing because it's not clear what I should do with undefined behaviour. Basically, I just print the string if the specifier or the specifier+flag combo isn't valid.

- **Flags (bonus):**  
  At first, I thought I could finish the bonus part by just stacking if/else statements like I did in the "mandatory" part, but that turned into a giant unmanageable mess.  
  - **Fix:** I created a `t_mdf` struct with integer fields for each flag, the specifier, and a crucial field that tells me if the combination is valid.

## 4. What I Learned

- How to write and use functions with a variable number of arguments.
- I ***REALLY*** need to plan ahead when I intend to tackle the bonus part of a project. I’m at a stage where I can often spot a solution quickly and I jump straight into coding, but I should control myself — take a deep breath, write things down, and actually plan what I’m going to do.
- Assert is a great testing tool. It's a super clean way to ensure I get the same return value as the standard `printf`. Way, way, *way* better than printing everything out.

## 5. What I’d Do Differently

- Plan. Plan. Plan.
- At one point, I had a working function for handling flags for `%d` and `%i` that was 160+ lines long and honestly quite dumb. C is a procedural language and I’m still not fully thinking in procedural terms. I repeated blocks of code instead of turning them into functions. It made the code harder to debug, uglier to read, and a pain to maintain — totally unnecessary.

## 6. Future Improvements

- There's still room for refactoring — I could extract repeated code into small functions to make it more readable and easier to maintain.

## 7. Resources & References

- [va_arg](https://en.cppreference.com/w/c/variadic/va_arg)
- [man assert](https://man7.org/linux/man-pages/man3/assert.3.html)
- My own tears and `gdb`
- My friends and colleagues at 42 Lisboa

---

**Overall, `ft_printf` pushed me to think procedurally, plan better, and write cleaner code. It was frustrating at times, but deeply rewarding.**
