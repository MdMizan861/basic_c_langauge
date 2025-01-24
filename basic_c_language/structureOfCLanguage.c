/*DOCUMENTATION/COMMENTS SECTION(optional section)
{Author:Mijanur Rahman
Date:24 jan,2025
Program Name:Program for addition of two numbers}*/

/*LINK SECTION(must include)
{#include<stdio.h> ; here: # is preprocessor directive and
<stdio.h> is the header file where printf(),scanf() are pre define on "stdio.h" file
<conio.h> means console input output header file
getch() function is used to hold the output screen;
the other headerfile is 
#include<math.h>; sqrt(), pow(base,exponent)
#include<string.h>; strlen(),strcmp()}*/

/*DEFINITION SECTION(optional)
{In this section define all the symbolic constant;
like macro definition and small function definition}*/

/*GOLOBAL DECLARATION SECTION
 in a fuction two types of variable 
 1.global variable(if you declare a variable globally you can use the variable throughout of the program)
 2.local variable(they can be used within that fucntion only where you define this variable);
 3. we can also define here the user define function;
 examle: void sum();*/

 /*MAIN SECTION(must include)
 Note: In a program there can be only one main()
 function.always control will go to main funtion() first of all.
 syntax of main() funtion:
 void main()
 { 
 i. Declaration part;(int a,b;)
 ii. Executable part;(logic: sum=a+b;)
 }
 */
/*SUB-PROGRAM SECTION(optional)
1.In this section you will include all the user define funtions, 
2.many user define function 1,2,3,...n 
and generally all the user define funtions immediately after main fuction*/
//documentation section
#include<stdio.h>//link section add the header file
#define MAX 100 //definition section(macro defintition)
int a=35; //global declaration section
void display();// user define-function declaration
int main(){// main() function section

    int b=20,c=30,sum;//declaration part
    sum=a+b+c;//executable part
    printf("the sumation of a,b and c is %d",sum);
    return 0;
}