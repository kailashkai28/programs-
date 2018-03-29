#Write a script to find the number of characters, words and lines 
#!/bin/bash

read -p "Enter the file name: " file
w=`cat $file | wc -w`
c=`cat $file | wc -c`
l=`grep -c "." $file`
echo "Number of characters" in $file is $c
echo "Number of words in" $file is $w
echo "Number of lines" in $file is $l
