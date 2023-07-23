  ## Decision Making in C++ (if , if..else, Nested if, if-else-if )
________________________________________
There come situations in real life when we need to make some decisions and based on these decisions, we decide what should we do next. Similar situations arise in programming also where we need to make some decisions and based on these decisions we will execute the next block of code. Decision making statements in programming languages decides the direction of flow of program execution. Decision making statements available in C++ are:
 
•	if statement  
•	if..else statements  
•	nested if statements  
•	if-else-if ladder  
•	switch statements  <br /><br />
**if statement**  
If a certain condition is true then a block of statement is executed otherwise not.
~~~C++
Syntax:
 
if(condition) 
{
   // Statements to execute if
   // condition is true
}
~~~  

Here, condition after evaluation will be either true or false. if statement accepts boolean values – if the value is true then it will execute the block of statements below it otherwise not.
If we do not provide the curly braces ‘{‘ and ‘}’ after if( condition ) then by default if statement will consider the first immediately below statement to be inside its block. <br /> 
<br />

__Flowchart__

<br />

![**Flowchart**](https://github.com/rashmi-992/PracticeCode/assets/97144135/7ae3fc9d-6012-4796-b9c5-9051ea99483a)
 
~~~C++

// C++ program to illustrate If statement
#include<iostream>
using namespace std;

    int main()
    {
        int i = 11;
 
        if (i%2==0)
        {
           cout<<"Given number is even";
        }    
        cout<<"Given number is odd";
    }
~~~
~~~
Output:
 
Given number is odd
~~~

As the condition present in the if statement is false. So,the block below the if statement is executed.  <br />
__if-else__
An if-else statement controls conditional branching. Statements in the if-branch are executed only if the condition evaluates to a non-zero value (or true). If the value of condition is nonzero, the following statement gets executed, and the statement following the optional else gets skipped. Otherwise, the following statement gets skipped, and if there's an else then the statement following the else gets executed.

condition expressions that evaluate to non-zero are:  
•true  
•a non-null pointer,  
•any non-zero arithmetic value, or  
•a class type that defines an unambiguous conversion to an arithmetic, boolean, or pointer type. (For information about conversions, see Standard Conversions.)
<br />

__Flowchart__

<br />
![image](https://github.com/rashmi-992/PracticeCode/assets/97144135/a66f1f40-9c24-40cc-9c44-9880f6df589c)


<br />
Example:
 
~~~C++
#include<iostream>
using namespace std;

int main()
{
  int i = 16;

  if (i > 15)
  {
    cout<<"I am in if";
  }   else { 
    cout<<"I am Not in if";
  }
}
~~~

~~~Output
10 is less than 15
~~~

 The block of code following the else statement is executed as the condition present in the if statement is false.




