1.Problem Description:
=
**Q3.Write a program that find the result of the expression x^y where the value of X and Y are entered by the user.**

2.Problem Analysis:
=
2.1.Input:
- 
- value of base , x,
- value of exponent,y,

2.2.Output:
- 
- the inputs power 
- 
2.3.Process/Operarion:

1.Variable declaration that holds an input and output

2.print the input prompt message

3.read the corresponding user's input
- base
- exponent

4.check whether the user's input is valid or not
- if it is not valid , give a chance to try and back to step 2
- else go to the line of code

5.declare and initialise variable temp1 , temp2 , i to store both base , exponent

6.check if the exponent less than zero or not

6.1.if it is so, multiply exponent by -1 
- then multiply base  by temp1 until exponent less than  i
- and then store the value inside base again
- increase the value of i by 1
- finally,after we finished the above task, store the reciprocal of base into base

6.2 if it is not,
- multiply base by temp1 until exponent less than 1
- and then store it inside base again
- increase the value of i by 1

7.process the result and print it with out prompt message

8.terminate the loop

3.Design the program:
=
1.Variable declaration
- 
- float x;
- float y;

2.print the prompt  message and read them

- cout<<"Enter the base number: ";
- cin>>x;
- cout<<"Enter the exponent number: ";
- cin>>y;

3.check if user's input is valid or not
- if it's not valid , give feedback message and go to step 2
- else go next line

4.declare and initialise a variable to assign both of input(base , exponent)
- float temp1 = x;
- float temp2 = y;
- int i ;

5.check the value of y
- if y < 0, multiply temp2 by -1 and store it inside y --> y = -1*temp2;
- then multiply base(x) by temp1 until y > i  and store it inside x ----> x *= temp1;
- increase the value of i by 1 each step ---> i++;
- after the above task complete (y<0),then store the reciprocal of base(x) inside base(x)
- but if y > 0,
- multiply base(x) by temp1 until exponent > i ;
- increase the value of i by 1 each step ---> i++;
- and then store the value inside base again

6.process the result and display the result
- cout<<"The value "<<temp1<<" the power of "<<temp2<<" is:"<<x;

7.terminate the program

