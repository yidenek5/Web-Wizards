1.Problem Description:
=
Q2.**Write a program that prompts the capacity in gallons of an automobile fuel tank and the miles per gallons
the automobiles can be driven. The program outputs the number miles the automobile cam be driven
without refueling.**

2.Problem Analysis:
=
2.1 Input:
-
> 1.gallon of fuel
> 
> 2.miles per gallon 
> 
> 3.distance 

2.2.Output:
-
>Total miles Automobile can be driven

3.Process/Operation:
=
>1.Variable declaration and initialisation
>
>2.read the user inputs and display on console
> 
>3.check the user's input less than zero or input another invalid character
> 
>3.1. if it is true , give the user another chance of defined attempts 
> 
> -->give a prompt message and reduce the number of attempts
> 
> --> and then back to 2
> 
>3.2 else go forward to the next line
> 
>4. calculate the total mile that the Automobile capable of 
>
>5.Ask the user you want to calculate another Automobile's capacity
> 
> --->**print prompt input message**
> 
> ---->**read corresponding inputs**
>6.if the user want to continue,go back to line 2
> 
>7.if not , terminate the program

3.Design the program:
=
**1.Variable declaration and initialisation**
-
----->**int gallon_of_fuel;**

----->**float miles_per_gallon;**

----->**int attempts = 3;**

-----> **float distance ;**

-----> **char user_choice;**

2.Read each inputs from user 
-
**line64:**

----->**cout<<"Enter the amount of gallon of fuel an Automobile can intake";**

----->**cin>>gallon_of_fuel;**

**line70:**

----->**cout<<"Enter the mile an Automobile can be driven within a gallon of fuel";**

----->**cin>>miles_per_gallon;**

**2.1. check the user input (gallon_of_fuel)**

**1. if gallon_of_fuel < 0 or other invalid input**

------>**attempts--;**

------>**cout<<"Invalid input for gallon of fuel,you have "<<attempts<<" chance please  enter positive number";**

------>**gotoline64;**
1.1 If attempts < 0 ,

------>**cout<<"you have finished your attempts";**

------>**then terminate the program**
**2 If miles_per_gallon < 0 or other invalid input**

------->**attempts--;**

------>**cout<<"Invalid input for miles,you have "<<attempts<<" chance please  enter positive number";**

------>**gotoline70**

2.1 If attempts < 0 ,

------>**cout<<"you have finished your attempts";**

------>**then terminate the program**

3.Perform an operation
-
----->**float total_mile = gallon_of_fuel*mile_per_gallon;**

4.print the output promt message and process the the total mile 
-
---->**cout<<"The Automobile can be driven for "<<total_mile<<" mile without refueling";

5.Ask the user want to calculate automobile capacity for others
-
6.If the user agree to continue,back to step 2
-
7.else , terminate the program

