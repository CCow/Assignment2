# GameOfLife Assignment2
Connor Cowher 2322777 & Corey Spielman 2316074

Makefile: make all, ./a.out
  aalternative: g++ *.cpp, ./a.out

Sources:
  https://stackoverflow.com/questions/17904643/error-with-multiple-definitions-of-function - #ifndef, #define, #endif to help with multiple definions of a function
    http://www.cplusplus.com/reference/cstdlib/rand/ - Helped generate random occupied cells in the random map function
    https://stackoverflow.com/questions/3746484/why-am-i-getting-this-redefinition-of-class-error - main.cpp crashed when multiple *.cpp were included, only #include-ing the header's resolved this issue
