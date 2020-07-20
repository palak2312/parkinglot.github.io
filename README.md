# OBJECTIVE:

The main objective of the C + + project on parking System is  to manage the details of duration, parking fees, customers, parking slot types etc. It manages  the information about duration, vehicles, types. The project is totally built at administrative level and  only the administrator is guaranteed the excess. The purpose of the project is to build an application program to reduce the manual work for managing the duration, parking fees, vehicles customers.It tracks all the details about the customers parking slots and types.

# FUNCTIONALITIES  PROVIDED:

* It provides opportunity to park small, medium , large , extra large vehicles.

* It has three levels and each level has 10 parking slot of each type.

* If parking slot of small is filled in all the thee floors then it can be parked in medium, large, extra large but charges will be according to it , similarly for other vehicles as well.

* When driver enters , it takes his name, vehicle no. , security key and time of arrival.

* When driver exits it again takes driver’s name, vehicle no. ,  security key . If the data matches with the data stored in file then it says “vehicle found” otherwise sorry. If vehicle is found then it notes time of departure and according to it ,it shows amount to be paid.

* It has also one feature “display order of vehicle” , in this administrator can able to see vehicles parked in parking lot.

* This program is made use of <fstream> header , by using its objects (ofstream and ifstream) we can able to store data for ever, hence whenever we close the program and run it again , we are able to get all the data back that is stored or changed previously.

* Administrator can able to check the total amount collected till now ,through amount collected option.


