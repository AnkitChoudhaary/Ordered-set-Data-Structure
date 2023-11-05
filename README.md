# Ordered-set-Data-Structure
Welcome to a custom C++ Set library that provides functionality similar to the C++ Standard Template Library (STL).<br/>
This project offers an implementation of a   ***Set data structure***   designed to store unique integers in **ascending order**. <br/>You can perform a ***variety of operations on multiple sets simultaneously, including insert, delete, membership checking, union, intersection, size calculation, difference, symmetric difference, and printing elements in sorted order***.<br/> 
Explore this library to understand how to manage multiple sets efficiently in C++.
<br/>
<br/>
## Getting Started
1. Clone the repository:
   ```bash
   git clone "https://github.com/AnkitChoudhaary/Ordered-set-Data-Structure/tree/main"
   ```
2. Compile the Code :
     ```c++
     g++ main.cpp main
     ```
3. Run the program :
     ```
     ./main
     ```

### How to Use :
#### 1. Insert 
  To Insert data into the set, use the `Insert` Command {P.S.: you can use multiple set} :
  ```
1 {set num} {data}
```
#### 2. Delete
  To delete an element from the set, use the `Delete` command :
  ```
2 {set num} {data}
```
#### 3. Belongs To 
  Check if an element belongs to the set using the Belongs To command { Output -1 : if set doesn't exist }:
  ```
3 {set num} {data}
```
#### 4. Union 
 To take the union of two sets, use the Union command {Output stores to set num1}:
  ```
4 {set num1} {set num2}
```
#### 5. Intersection
 Find the intersection of two sets with the Intersection command {Output stores to set num1}:
  ```
5 {set num1} {set num2}
```
#### 6. Size
Get the number of elements in a set with the Size command:
  ```
6 {set num}
```
#### 7. Difference 
To find the difference between two sets, use the Difference command {Output stores to set num1} :
```
7 {set num1} {set num2}
```
#### 8. Symmetric Difference 
 Calculate the symmetric difference of two sets with the Symmetric Difference command {Output stores to set num1}:
  ```
8 {set num1} {set num2}
```
#### 9. Print 
Print all elements of a set in sorted order using the Print command:
  ```
9 {set num}
```

### Example 
```
1 1 5        // Insert 5 into Set 1
2 1 5        // Delete 5 from Set 1
3 1 6        // Check if 6 belongs to Set 1
4 1 2        // Take the union of Set 1 and Set 2
5 1 2        // Find the intersection of Set 1 and Set 2
6 1          // Get the size of Set 1
7 1 2        // Find the difference between Set 1 and Set 2
8 1 2        // Calculate the symmetric difference of Set 1 and Set 2
9 1          // Print the elements of Set 1

```
## Time Complexity

Here's an overview of the time complexity of the functions in the custom Set library:

| Function              | Time Complexity |
|-----------------------|-----------------|
| Insert                | Θ(log n)        |
| Delete                | Θ(log n)        |
| Belongs To            | Θ(log n)        |
| Union                 | Θ(n)            |
| Intersection          | Θ(n)            |
| Size                  | Θ(1)            |
| Difference            | Θ(n)            |
| Symmetric Difference  | Θ(n)            |
| Print                 | Θ(n)            |


P.S.: This is just a simple project to show how all the big projects use simple data structures to get a fascinating Data Structures :).<br/>
you may not find this useful.
