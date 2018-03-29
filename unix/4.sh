#!/bin/bash
#Shell Script to check wheather a given string is Palindrome or not.

echo "Shell Script to check wheather a given string is Palindrome or not."

read -p "Enter a string: " str
len= `echo $str | wc -c`
len=$((len - 1))
i=1
j=$((len / 2))
while test $i -le $j
do
    k= `echo $str | cut -c $i`
    l= `echo $str | cut -c $len`
    if test $k != $l
      then
      echo "$str is not palindrome"
      exit
    fi
    i=$((i + 1))
    len=$((len - 1))
done
echo "$str is palindrome"

