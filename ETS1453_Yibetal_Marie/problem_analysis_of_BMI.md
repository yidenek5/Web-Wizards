1.Problem Description:
= 
Q1.Make a program that calculates that body mass index (BMI) of a person and determine weather the person is
in normal weight, under weight or over weight. BMI is calculated as (BMI = w/h*h). Make the program to
work for multiple person before terminated.

2.Problem Analaysis:
=
2.1 Input:
-
>The weight of the person

>The height of the person

2.2 Output:
-
>display the weight of a person

>display the height of a person

>Finally the body mass index of a person

2.3 Process/Operation:
-
>1.Variable declaration that holds an input and output result

>2.Print the input prompt message
>  
>2.1 "Enter the weight of a person"
> 
> 2.2 "Enter the height of a person"

> 3.read corresponding input from the user
> 
> 3.1 weight
> 
> 3.2 height

>4 check if the user enters negative value 
> 
> 4.1 if user give negative number give chance of attempts = 3 , tell prompt message
> 4.2 else go forward

> 5 check if the user inputs invalid input like character
> 
> 5.1 if so,give user a chance of attempts and after attempts the program terminates

> 6.calculate the body mass index(BMI) of a person
> 
> 6.1 BMI = weight/(height*height)
> 
> 6.2.print the output prompt message and process the result or BMI

> 7.ask the user whether he/she want to continue calculating for another person or not
> 
> 7.1 If user's answer is yes(y) , goto step 2 and repeat the process
> 
> 7.2 else stop the program

> 8.end the program

3.Design the program
=
3.1. Variable declaration and initialisation
-
-- float height;

-- int weight ;

-- int user_choice = 'y';

-- int attempts = 3;

3.2.read input datas from user:
-
-- cout<<"Enter the weight of a person";

-- cin>>weight

--cout<<"Enter the height of a person";

--cin>>height;

3.3 check the user inputs negative number:
-
-- if so , give chance of attempts = 3 , after finish his/her attempts terminate the program

-- else go forward

3.4 check the user input invalid input like character 
-
-- if so , give the user to try another chance until he/she finish his/her attempts

-- and write prompt message : cout<<"you have"<<attempts<<"chances,so please enter valid input";

-- else go forward 

--3.5 perform an operation
-
-- float body_mass_index = weight/(height*height)

3.6. read the prompt message and print the result (body_mass_index)
-
-- cout<<"The body mass index of a person is: "<<body_mass_index<<endl;

3.7 read user's choices(input) if he/she want to continue or not
-
-- cout<<"Do you want to continue calculating for other person.press (y/n): ";

-- cin>>user_choice

-- if user_choice == 'y',goto 3.2 

-- else stop the program

