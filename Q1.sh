#!/bin/bash
# Project 1 Question 1: Adesse book using shell scripting
echo "Hello Guys! Welcome to Adresse Book Shell Program"

#add function
add_entries() {

    echo
	while true
	do
		echo "Enter this detail Name, Surname, Email, Phone"
		echo "Enter the information"
		read add_option

		
        # save information as a contact
		echo $add_option >> ab.csv
		echo "New person added!"
		echo
	done
   
}

#search function   
search_entries() {
    
    echo
	while true
	do
		echo "Enter the surename."
		read info
		
		echo "Details for \"$info\":"
		grep ^"$info" ab.csv
		RETURNSTATUS=`echo $?`
		if [ $RETURNSTATUS -eq 1 ]
			then
			echo "No detail of this surename \"$info\"."
		fi
		echo
	done
}

#remove function
remove_entries() {
   echo 
	while true
	do
		
		echo "Input the data (Name, Surname, Email, Phone, etc)"
		read input_data
		
		echo
		echo "ready to delete \"$input_data\":"
        # searching for a record
		grep -n "$input_data" ab.csv
		RETURNSTATUS=`echo $?`
        # did not find anything
		if [ $RETURNSTATUS -eq 1 ]
			then
			echo "no detail for this\"$info\""
        # found some records
		else
			echo
			echo "Enter phone number you would like to delete"
			read person_number
            echo
            # loop and display the results
			for list in `grep -n "$person_number" addressbook.csv`
			do
				number=`echo "$list" | cut -c1`
				if [ $number -eq $person_number ]
					then
					listRemove="${person_number}d"
					sed -i -e "$listRemove" ab.csv
					echo "Detail Removed."
				fi
			done
		fi
		echo
	done

}

#update function
update_entries() {
    echo
	while true
	do
		echo "Enter the information you want to edit"
		read detail
		
		echo
		echo "All information abou this \"$detail\":"
        # searching for a record
		grep -n "$detail" ab.csv
		RETURNSTATUS=`echo $?`
        # did not find anything
		if [ $RETURNSTATUS -eq 1 ]
			then
			echo "No detail for this \"$detail\""
        # found some records
		else
			echo
			echo "Enter the line number that you'd like to edit."
			read person_number
			echo
            # loop and display the results
			for line in `grep -n "$detail" addressbook.csv`
			do
				number=`echo "$line" | cut -c1`
				if [ $number -eq $person_number ]
					then
					echo "What would you like to change it to? Use the format:"
					echo "\"Last name,first name,email,phone number\" (no quotes or spaces)."
					read update
					lineChange="${person_number}s"
					sed -i -e "$listChange/.*/$update/" ab.csv
					echo
					echo "Detail updated!"
				fi
			done
		fi
		echo
	done		

}

#Display function
display() {
    
    echo
	echo "Display all the details."
	echo
	# display all contacts
	cat ab.csv
	echo
}

#file
echo
lastCharOfFile=`tail -c 1 addressbook.csv`
if [ -n "$lastCharOfFile" ]
	then
	echo >> ab.csv
fi

#Menu

echo "-- Hello Please choose a menu below --\n\n"

echo "1) - Add"
echo "2) - search"
echo "3) - Edit"
echo "4) - remove"
echo "4) - remove"
echo "(q) - Quit"

read choice_option


case $choice_option in
	1) add_entries;;
	2) search_entries;;
	3) update_entries;;
	4) update_entries;;
	5) display;;
esac


