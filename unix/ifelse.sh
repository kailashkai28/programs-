read -p "Enter first Number:" n1
read -p "Enter second Number:" n2
read -p "Enter third Number:" n3
read -p "Enter fourth Number:" n4

if [ $n1 -gt $n2 ]  then
 if [ $n1 -gt $n3 ] then
   if [ $n1 -gt $n4 ] then
     echo "$n1 is a Greatest Number"	 
   fi
  if [ $n3 -gt $n4 ]  then
	if [ $n3 -gt $n2 ] then
	if [ $n3 -gt $n1 ] then
     echo "$n3 is a Greatest Number"
  
fi
if [ $n2 -gt $n3 ] then
  if [ $n2 -gt $n4 ] then
	if [$n2 -gt $n1 ] then
     echo "$n2 is a Greatest Number"
  fi
   if [ $n4 -gt $n3] then
   if [ $n4 -gt $n2] then
   if [ $n4 -gt $n1] then
	
     echo "$n4 is a Greatest Number"
fi
fi
fi
fi
fi
fi
fi
fi
fi

