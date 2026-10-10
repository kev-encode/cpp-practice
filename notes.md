# Notes

## 2.2

### 2.2.2

* The size of a type is implementation-defined; `sizeof` operator obtains type size
* General list initialization ([6.3.5.2](#6.3.5.2)) prevents narrowing conversions ([10.5](#10.5)), silent truncation or precision loss, via compile-time errors
* Constants ([2.2.3](#2.2.3)) cannot be uninitialized; variables rarely should be uninitialized ([3.2.1.1](#3.2.1.1))
* `auto` is used when there isn't a reason to mention the type explicitly, such as...
    * The definition is in a larger scope where we want to make the type clearly visible to readers
    * We don't want to be specific about a variable's range or precision
    * We want to avoid redundancy and or long type names ([4.5.1](#4.5.1))

### 2.2.3

* `const` is enforced by compiler ([7.5](#7.5)); `constexpr` is put in ROM ([10.4](#10.4))