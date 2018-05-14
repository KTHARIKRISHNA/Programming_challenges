#!/bin/bash
#cd string_anagram
#cd build
#./Anagram1
while IFS='' read -r line; do
    IFSS=' ' read -r -a array <<< "$line"
	./dhananjay "${array[0]}" "${array[1]}"; num=$(echo $?)
   
	if [ $num -eq "${array[2]}" ];
	then
  		echo "test passed"
	else
 		echo "test failed"
	fi
done < "$1"
