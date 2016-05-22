# DefFormat
Simple library for parsing .def files as used in LambdaEngine, probably useful for other tasks


# How to use
Include def_format.h in your program and see the comments in that file for more information. You must also statically link
to def_format.c.


# Limitations and known issues
There is no attempt at optimisations (such as indexing etc) in this library - you can however trivially build your own on top.
If anyone comes up with a clean and portable way to do indexing please feel free to submit a pull request on github.
