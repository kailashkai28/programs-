#!/bin/bash

#Shell Script to find Armstrong number between 100 to 999.
echo "Shell Script to find Armstrong number between 100 to 999."

read -p "Enter the LOWER LIMIT: " Beg 
read -p "Enter the UPPER LIMIT: " End
echo "Armstrong Numbers between $Beg and $End are: "
while [ $Beg -le $End ]
do
     Number=$Beg
     Sum=0
     Product=1
     OldNumber=$Number
     while [ $Number -ne  0 ]
     do
          Rem=$((Number%10))
          Product=$((Rem*Rem*Rem ))
          Sum=$((Sum+Product))
          Number=$((Number/10))
     done
     if [ $Sum -eq $OldNumber ]
     then
         echo -n "$OldNumber  "
     fi
     Beg=$((Beg +1))
done
echo

