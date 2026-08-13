### Classes
The central language feature of C++ is the class. A class is a user-defined type provided to repre-
sent an entity in the code of a program. Whenever our design for a program has a useful idea,
entity, collection of data, etc., we try to represent it as a class in the program so that the idea is there
in the code, rather than just in our heads, in a design document, or in some comments.

Here, we consider the basic support for three important kinds of classes:
- Concrete classes 
- Abstract Classes
- Classes in class hierarchies

### Concrete Classes
The basic idea of concrete classes is that they behave ‘‘just like built-in types.’’
The defining characteristic of a concrete type is that its representation is part of its definition. In
many important cases, such as a vector, that representation is only one or more pointers to data
stored elsewhere, but that representation is present in each object of the concrete class. That allows
implementations to be optimally efficient in time and space
In particular, it allows us to:-
- Place objects of concrete types on the stack, in statically allocated memory, and in other
objects
- Refer to objects directly (and not just through pointers or references).
- Initialize objects immediately and completely (e.g., using constructors).
- Copy and move objects.
