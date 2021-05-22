

![image](https://user-images.githubusercontent.com/83390756/119222126-71ea8d80-bb10-11eb-94d9-bee4cf27bcf6.png)


# What is C Programming Langauge?

C is a general-purpose programming language that is extremely popular, simple, and flexible to use. It is a structured programming language that is machine-independent and extensively used to write various applications, Operating Systems like Windows, and many other complex programs like Oracle database, Git, Python interpreter, and more.

## Origin:-

A successor to the programming language B, C was originally developed at Bell Labs by Dennis Ritchie between 1972 and 1973 to construct utilities running on Unix. It was applied to re-implementing the kernel of the Unix operating system. During the 1980s, C gradually gained popularity. It has become one of the most widely used programming languages,with C compilers from various vendors available for the majority of existing computer architectures and operating systems. C has been standardized by the ANSI since 1989 (ANSI C) and by the International Organization for Standardization (ISO). 

![image](https://user-images.githubusercontent.com/83390756/119222108-5b443680-bb10-11eb-861e-4db4544ec417.png)


## Overview :-

Timeline of language development Year 	C Standard:- 
1972 	Birth
1978 	K&R C
1989/1990 	ANSI C and ISO C
1999 	C99
2011 	C11
2017 	C17
TBD 	C2x

Like most procedural languages in the ALGOL tradition, C has facilities for structured programming and allows lexical variable scope and recursion. Its static type system prevents unintended operations. In C, all executable code is contained within subroutines (also called "functions", though not strictly in the sense of functional programming). Function parameters are always passed by value (except arrays). Pass-by-reference is simulated in C by explicitly passing pointer values. C program source text is free-format, using the semicolon as a statement terminator and curly braces for grouping blocks of statements.

The C language also exhibits the following characteristics:

    The language has a small, fixed number of keywords, including a full set of control flow primitives: if/else, for, do/while, while, and switch. User-defined names are not distinguished from keywords by any kind of sigil.
    It has a large number of arithmetic, bitwise, and logic operators: +,+=,++,&,||, etc.
    More than one assignment may be performed in a single statement.
    Functions:
        Function return values can be ignored, when not needed.
        Function and data pointers permit ad hoc run-time polymorphism.
        Functions may not be defined within the lexical scope of other functions.
    Data typing is static, but weakly enforced; all data has a type, but implicit conversions are possible.
    Declaration syntax mimics usage context. C has no "define" keyword; instead, a statement beginning with the name of a type is taken as a declaration. There is no "function" keyword; instead, a function is indicated by the presence of a parenthesized argument list.
    User-defined (typedef) and compound types are possible.
        Heterogeneous aggregate data types (struct) allow related data elements to be accessed and assigned as a unit.
        Union is a structure with overlapping members; only the last member stored is valid.
        Array indexing is a secondary notation, defined in terms of pointer arithmetic. Unlike structs, arrays are not first-class objects: they cannot be assigned or compared using single built-in operators. There is no "array" keyword in use or definition; instead, square brackets indicate arrays syntactically, for example month[11].
        Enumerated types are possible with the enum keyword. They are freely interconvertible with integers.
        Strings are not a distinct data type, but are conventionally implemented as null-terminated character arrays.
    Low-level access to computer memory is possible by converting machine addresses to typed pointers.
    Procedures (subroutines not returning values) are a special case of function, with an untyped return type void.
    A preprocessor performs macro definition, source code file inclusion, and conditional compilation.
    There is a basic form of modularity: files can be compiled separately and linked together, with control over which functions and data objects are visible to other files via static and extern attributes.
    Complex functionality such as I/O, string manipulation, and mathematical functions are consistently delegated to library routines.

While C does not include certain features found in other languages (such as object orientation and garbage collection), these can be implemented or emulated, often through the use of external libraries (e.g., the GLib Object System or the Boehm garbage collector). 

## Reserved Words :- 

C89 has 32 reserved words, also known as keywords, which are the words that cannot be used for any purposes other than those for which they are predefined:

    auto
    break
    case
    char
    const
    continue
    default
    do
    double
    else
    enum
    extern
    float
    for
    goto
    if
    int
    long
    register
    return
    short
    signed
    sizeof
    static
    struct
    switch
    typedef
    union
    unsigned
    void
    volatile
    while

C99 reserved five more words:

    _Bool
    _Complex
    _Imaginary
    inline
    restrict

C11 reserved seven more words:

    _Alignas
    _Alignof
    _Atomic
    _Generic
    _Noreturn
    _Static_assert
    _Thread_local

Most of the recently reserved words begin with an underscore followed by a capital letter, because identifiers of that form were previously reserved by the C standard for use only by implementations. Since existing program source code should not have been using these identifiers, it would not be affected when C implementations started supporting these extensions to the programming language. Some standard headers do define more convenient synonyms for underscored identifiers. The language previously included a reserved word called entry, but this was seldom implemented, and has now been removed as a reserved word.

## Operators:- 
C supports a rich set of operators, which are symbols used within an expression to specify the manipulations to be performed while evaluating that expression. C has operators for:

    arithmetic: +, -, *, /, %
    assignment: =
    augmented assignment: +=,-=,*=,/=,%=,&=,|=,^=,<<=,>>=
    bitwise logic: ~, &, |, ^
    bitwise shifts: <<, >>
    boolean logic: !, &&, ||
    conditional evaluation: ? :
    equality testing: ==, !=
    calling functions: ( )
    increment and decrement: ++, --
    member selection: ., ->
    object size: sizeof
    order relations: <, <=, >, >=
    reference and dereference: &, *, [ ]
    sequencing: ,
    subexpression grouping: ( )
    type conversion: (typename)

C uses the operator = (used in mathematics to express equality) to indicate assignment, following the precedent of Fortran and PL/I, but unlike ALGOL and its derivatives. C uses the operator == to test for equality. The similarity between these two operators (assignment and equality) may result in the accidental use of one in place of the other, and in many cases, the mistake does not produce an error message (although some compilers produce warnings). For example, the conditional expression if (a == b + 1) might mistakenly be written as if (a = b + 1), which will be evaluated as true if a is not zero after the assignment.

The C operator precedence is not always intuitive. For example, the operator == binds more tightly than (is executed prior to) the operators & (bitwise AND) and | (bitwise OR) in expressions such as x & 1 == 0, which must be written as (x & 1) == 0 if that is the coder's intent.

## Pointers :- 

C supports the use of pointers, a type of reference that records the address or location of an object or function in memory. Pointers can be dereferenced to access data stored at the address pointed to, or to invoke a pointed-to function. Pointers can be manipulated using assignment or pointer arithmetic. The run-time representation of a pointer value is typically a raw memory address (perhaps augmented by an offset-within-word field), but since a pointer's type includes the type of the thing pointed to, expressions including pointers can be type-checked at compile time. Pointer arithmetic is automatically scaled by the size of the pointed-to data type. Pointers are used for many purposes in C. Text strings are commonly manipulated using pointers into arrays of characters. Dynamic memory allocation is performed using pointers. Many data types, such as trees, are commonly implemented as dynamically allocated struct objects linked together using pointers. Pointers to functions are useful for passing functions as arguments to higher-order functions (such as qsort or bsearch) or as callbacks to be invoked by event handlers. ![image](https://user-images.githubusercontent.com/83390756/119222306-44eaaa80-bb11-11eb-9277-1bedcf762f27.png)


A null pointer value explicitly points to no valid location. Dereferencing a null pointer value is undefined, often resulting in a segmentation fault. Null pointer values are useful for indicating special cases such as no "next" pointer in the final node of a linked list, or as an error indication from functions returning pointers. In appropriate contexts in source code, such as for assigning to a pointer variable, a null pointer constant can be written as 0, with or without explicit casting to a pointer type, or as the NULL macro defined by several standard headers. In conditional contexts, null pointer values evaluate to false, while all other pointer values evaluate to true.

Void pointers (void *) point to objects of unspecified type, and can therefore be used as "generic" data pointers. Since the size and type of the pointed-to object is not known, void pointers cannot be dereferenced, nor is pointer arithmetic on them allowed, although they can easily be (and in many contexts implicitly are) converted to and from any other object pointer type.

Careless use of pointers is potentially dangerous. Because they are typically unchecked, a pointer variable can be made to point to any arbitrary location, which can cause undesirable effects. Although properly used pointers point to safe places, they can be made to point to unsafe places by using invalid pointer arithmetic; the objects they point to may continue to be used after deallocation (dangling pointers); they may be used without having been initialized (wild pointers); or they may be directly assigned an unsafe value using a cast, union, or through another corrupt pointer. In general, C is permissive in allowing manipulation of and conversion between pointer types, although compilers typically provide options for various levels of checking. Some other programming languages address these problems by using more restrictive reference types. 

## Arrays :- 

Array types in C are traditionally of a fixed, static size specified at compile time. (The more recent C99 standard also allows a form of variable-length arrays.) However, it is also possible to allocate a block of memory (of arbitrary size) at run-time, using the standard library's malloc function, and treat it as an array. C's unification of arrays and pointers means that declared arrays and these dynamically allocated simulated arrays are virtually interchangeable. ![image](https://user-images.githubusercontent.com/83390756/119222289-30a6ad80-bb11-11eb-88e4-6a72d69cb7a7.png)


Since arrays are always accessed (in effect) via pointers, array accesses are typically not checked against the underlying array size, although some compilers may provide bounds checking as an option. Array bounds violations are therefore possible and rather common in carelessly written code, and can lead to various repercussions, including illegal memory accesses, corruption of data, buffer overruns, and run-time exceptions. If bounds checking is desired, it must be done manually.

C does not have a special provision for declaring multi-dimensional arrays, but rather relies on recursion within the type system to declare arrays of arrays, which effectively accomplishes the same thing. The index values of the resulting "multi-dimensional array" can be thought of as increasing in row-major order.

Multi-dimensional arrays are commonly used in numerical algorithms (mainly from applied linear algebra) to store matrices. The structure of the C array is well suited to this particular task. However, since arrays are passed merely as pointers, the bounds of the array must be known fixed values or else explicitly passed to any subroutine that requires them, and dynamically sized arrays of arrays cannot be accessed using double indexing. (A workaround for this is to allocate the array with an additional "row vector" of pointers to the columns.)

C99 introduced "variable-length arrays" which address some, but not all, of the issues with ordinary C arrays.

## File handling and streams :- 

![image](https://user-images.githubusercontent.com/83390756/119222263-0a810d80-bb11-11eb-8493-c21ee60e8e0b.png)


File input and output (I/O) is not part of the C language itself but instead is handled by libraries (such as the C standard library) and their associated header files (e.g. stdio.h). File handling is generally implemented through high-level I/O which works through streams. A stream is from this perspective a data flow that is independent of devices, while a file is a concrete device. The high level I/O is done through the association of a stream to a file. In the C standard library, a buffer (a memory area or queue) is temporarily used to store data before it's sent to the final destination. This reduces the time spent waiting for slower devices, for example a hard drive or solid state drive. Low-level I/O functions are not part of the standard C library but are generally part of "bare metal" programming (programming that's independent of any operating system such as most but not all embedded programming). With few exceptions, implementations include low-level I/O.

## Uses :- 

C is widely used for systems programming in implementing operating systems and embedded system applications , because C code, when written for portability, can be used for most purposes, yet when needed, system-specific code can be used to access specific hardware addresses and to perform type punning to match externally imposed interface requirements, with a low run-time demand on system resources. ![image](https://user-images.githubusercontent.com/83390756/119222236-f0472f80-bb10-11eb-8b7e-69aac18e670b.png)


C can be used for website programming using the Common Gateway Interface (CGI) as a "gateway" for information between the Web application, the server, and the browser. C is often chosen over interpreted languages because of its speed, stability, and near-universal availability.

A consequence of C's wide availability and efficiency is that compilers, libraries and interpreters of other programming languages are often implemented in C. For example, the reference implementations of Python, Perl, and PHP are written in C.

C enables programmers to create efficient implementations of algorithms and data structures, because the layer of abstraction from hardware is thin, and its overhead is low, an important criterion for computationally intensive programs. For example, the GNU Multiple Precision Arithmetic Library, the GNU Scientific Library, Mathematica, and MATLAB are completely or partially written in C.

C is sometimes used as an intermediate language by implementations of other languages. This approach may be used for portability or convenience; by using C as an intermediate language, additional machine-specific code generators are not necessary. C has some features, such as line-number preprocessor directives and optional superfluous commas at the end of initializer lists, that support compilation of generated code. However, some of C's shortcomings have prompted the development of other C-based languages specifically designed for use as intermediate languages, such as C--.

C has also been widely used to implement end-user applications. However, such applications can also be written in newer, higher-level languages. 

### Source :- wikipedia ,google.
