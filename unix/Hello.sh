#! /bin/bash
#Hello world
echo "Hello World"

#System variables 
echo $BASH
echo $BASH_VERSION
echo $HOME
echo $PWD

#User defined variables
name=Rafil 
echo My name is $name
age=22
echo My age is $age

#input from a terminal
read -p"Username: " name1
read -sp"Password: " password
echo "Username name is: $name1 "
echo "Password is: $password "


