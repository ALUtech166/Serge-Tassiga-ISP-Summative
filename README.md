# Serge-Tassiga-ISP-Summative

Final Summative ISP
=============

Authors: Mamane Bello, Liplan Lekipsing, Cédric Murairi, and Serge Anan <br>

---


## Get Started
To run the **program** type these commands one after another in your terminal inside the directory of the project:
```bash
$ bash Q1.sh
```
then
```
The output
```


***

Project 1 Question1: Address Book using Shell Script
-------

Here are some step on how I have approached this question 
-------

Setp 1: I listed evry function I need in this shell program
-------

* Add address book
* Search address book
* Remove
* Editing
* Display all records


Setp 2: Starting the code
-------

In order to proceed the Program, User need to enter the input:

a-/ Add Entries
b-/ Search adress book
c-/ Remove Entries
d-/ Edit Entries
e-/ Display

Setp 2: Running the program
-------

If the user choose the adding function:

Add address book
-------

it will ask user some input in order the person detail to add it 

Search entries
-------

it will ask user to the information he/she want to search for
once enter something it will execute based on the if statement I placed.

remove
-------

Once user enter whether he want to remove. the function excecute that

Edit
-------
By reading the User input, the edit function, i will work as the remove function beacuse it the replace the old detail by the new detail.


Display
-------
This function will excute by reading the user input and it will display all the details.


Here we go and run it
=============


Authors: Mamane Bello, Liplan Lekipsing, Cédric Murairi, and Serge Anan <br>

---


## Get Started
make sure you have installed Linux system on your Laptop
To run the **Traffic Light program** type these commands one after another in your terminal inside the directory of the project:
```bash
$ gcc main.c -pthread
```
then
```
$ ./a.out
```


***
Project 2: Traffic Light
-------

To get down this Question, I divide my algorithm:

They are two function:
-------

one for pthread_mutex
the second is the main function for the whole Traffic Light simulation

pthread_mutex function:
-------

This function is handling either the thread should be locked or unclocked

Main Function:
-------

Inside this main fuction:
-------
In order to proceed to program, There is an input that indicate whether the traffic ligh is green or Red else the program will exit

While the light is Red
-------

The cars should stop he cannot move to no where; it should wait, the pthread should locke at this time

While the light is Green
-------

by reading the user input direction, the cars maybe able to move to their destination without any issue.

**Traffic Light program** should excuted i believe so because there is no bug on the code, I am not able to se the result beacuse my system is window not linux, that was my big challenge.

Here we done with the Final Project!!! It was good to code C
--------------------------------------------------------
