# ft_printf

**ft_printf** is a custom implementation of the standard `printf` function in C. This project is part of the 1337 School (42 Network) cursus and demonstrates how to recreate `printf` behavior while integrating the **Singleton Design Pattern** for error handling and state management.

## Overview

This project re-implements the behavior of the standard `printf` function in C with the following features:

- **Custom Error Handling:** Uses static variables to track and manage errors consistently.
- **Character Counting:** Maintains a count of printed characters through static variables.
- **Modular Design:** Utilizes a struct to map format specifiers to their respective functions.
- **Singleton Design Pattern:** Ensures a single, consistent instance for error state management across the application.

## Key Functions

### Error Handling and State Management

- **`ft_is_error_occurred`**  
  ```c
  int	ft_is_error_occurred(int n, int first_time);
  ```  
  This function uses a static variable to indicate whether an error has occurred. When an error is detected, the state is set to `-1`.

- **`ft_count`**  
  ```c
  int	ft_count(int n, int first_time);
  ```  
  This function maintains a static count of printed characters. It checks for errors using `ft_is_error_occurred` and returns `-1` if an error is detected, or the character count otherwise.

- **`ft_print_char`**  
  ```c
  void	ft_print_char(unsigned long num);
  ```  
  Before printing a character, this function checks for errors through `ft_is_error_occurred`.

### Function Mapping Structure

To simplify the handling of different format specifiers, the project uses a structure that pairs each specifier with its corresponding function:

```c
struct s_function {
    char            ch;
    void            (*func)(unsigned long);
};
```

Each specifier has an associated function, making the implementation of `ft_printf` more modular and easier to maintain.

## Design Pattern

The project leverages the **Singleton Design Pattern** to manage error state and the character counter. By doing so, it ensures that:
- Only one instance of the error state exists throughout the application.
- Error handling is both efficient and consistent.

## Conclusion

By breaking down the traditional `printf` functionality into well-defined, modular components and applying the Singleton Design Pattern, **ft_printf** offers a clean and maintainable approach to re-implementing this essential function. This project not only demonstrates advanced C programming techniques but also emphasizes the importance of structured error handling and modular design.

---