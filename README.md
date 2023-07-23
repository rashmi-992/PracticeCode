# My C++ journey

C++ is a general-purpose programming language that was developed as an enhancement of the C language to
include an object-oriented paradigm. It is an imperative and compiled language.
## 1)Data Type
![Data Type](https://github.com/rashmi-992/PracticeCode/assets/97144135/7f4b0aae-d0f4-423a-85bb-4068ef8e1137)
## Definition<br />
Data Types are used to bind an identifier (variable) to hold only values of certain types. 
Thereafter, only specific operations and manipulations supported by that type is allowed. A data-type also 
determines the amount of storage to be allocated to that identifier, (exact values of which is 
compiler/implementation dependent). Predefined data-types are as follows:<br />
• **Integer**: Keyword used for integer data types is int. Integers typically require **4 bytes** of memory space 
and range from -2147483648 to 2147483647.<br />
• **Character** : Character data type is used for storing characters. Keyword used for the character data type 
is char. Characters typically require**1 byte** of memory space and range from -128 to 127 or 0 to 255.<br />
• **Boolean** : Boolean data type is used for storing boolean or logical values. A boolean variable can store 
either **true or false**. Keyword used for the boolean data type is bool.<br />
• **Floating Point** : Floating Point data type is used for storing single precision floating point values or 
decimal values. Keyword used for floating point data type is a float. Float variables typically require **4 
bytes** of memory space.<br />
• **Double Floating Point** : Double Floating Point data type is used for storing double precision floating point 
values or decimal values. Keyword used for the double floating point data type is double. Double 
variables typically require 8 bytes of memory space.<br />
• **void**: Void means without any value. void datatype represents a valueless entity. The void data type is 
used for those function which does not return a value.<br />
• **Wide Character**: Wide character data type is also a character data type but this data type has a size 
greater than the normal 8-bit datatype. Represented by **wchar_t**. It is generally **2 or 4 bytes** long.
<br />
[Check out data_type.cpp](https://github.com/rashmi-992/PracticeCode/blob/main/data_type.cpp).  


**Operator sizeof in C++**<br />
The sizeof operator is a unary compile-time operator used to determine the size of variables, data types, and 
constants in bytes at compile time. It can also determine the size of classes, structures, and unions.<br />
**Syntax:
sizeof (data type)
or
sizeof (expression)** <br />
[Check out size_of_variable.cpp](https://github.com/rashmi-992/PracticeCode/blob/main/size_of_variable.cpp).  

**Manipulating Default Format**<br />
**setprecision(n)** - Changes the default precision.Default precision is 6.<br />
In Fixed floating point no power (or e) uses. Ex - 10.5, 122.5.<br />
In Scientific floating point we will use e. Ex - 1.2e + 04, 1.45e +06.<br />
•	fixed: It uses decimal notation for floating-point values.<br />
•	scientific: It uses scientific floating-point notation.<br />
[Check out set_precision.cpp](https://github.com/rashmi-992/PracticeCode/blob/main/set_precision.cpp).  
