
### Trying C++ features

#### C++ build process: 
1. The preprocessor examines a source file, inserts the text of the files specified by the include
statements (and the text of the files specified by their include statements, etc.), and also evaluates
and acts on any other preprocessor directives (e.g., expanding macros) and any pragma directives.
2. The compiler takes the output from the preprocessor and compiles that code into machine code,
   which it stores, along with other information needed for the linking phase, in an OBJ file.
3. Steps 1 and 2 are repeated for each source file within the project.
4. The linker examines the output files from the compiler and the library files that your project links. It
   finds all of the places where the compiler identified something as being declared but not defined
   within that particular source file. It then locates the appropriate address for the definition and
   patches that address in. 
   31
5. Once everything has been linked successfully, the linker binds everything together and outputs the
   finished product (typically either an executable program or a library file).

