# **Experiment: Call by Value and Call by Reference in C++**

### **Name:** Ninad Phatak  
### **PRN:** 24070123065  
### **Batch:** ENTC A3  

## **Overview**
In C++, functions can accept arguments in different ways, primarily **Call by Value** and **Call by Reference**. These methods determine whether a function works on copies of the arguments or on the original data.

- **Call by Value:** A copy of the actual argument is passed to the function. Changes made inside the function do **not** affect the original values.
- **Call by Reference:** The actual memory address or reference of the arguments is passed to the function. Changes inside the function **directly modify** the original variables.

Additionally, pointers can also be used to achieve call by reference. Understanding these concepts is fundamental for writing efficient and bug-free programs in C++.

## **1. Code Name: Trying to swap values**
### **Theory**
This program demonstrates **Call by Value**. The function receives copies of the variables. When the values are swapped inside the function, only the local copies are changed. The original variables remain unaffected.

### **Algorithm**
1. Define a function that accepts two integers by value.
2. Swap the values using a temporary variable inside the function.
3. Call the function from `main()` with two integer values.
4. Print the values after the function call to observe that no change occurs.

### **Output**
5 10

## **2. Code Name: Swapping using Call by Pointer**
### **Theory**
This example uses **pointers** to achieve call by reference. The function accepts addresses of variables. By dereferencing pointers, it directly modifies the original variables in memory.

### **Algorithm**
1. Define a function that accepts two pointers to integers.
2. Use a temporary variable to swap the values at the given addresses.
3. Call the function from `main()` by passing the addresses of variables.
4. Print values before and after the function call.

### **Output**
Before swap:
x = 34, y = 24
After swap:
x = 24, y = 34

## **3. Code Name: Swapping using Pass by Reference**
### **Theory**
This program uses **C++ references** for call by reference. The function parameters are declared as references, allowing the function to operate on original variables without using pointers.

### **Algorithm**
1. Define a function that accepts two integers by reference.
2. Swap the values using a temporary variable.
3. Call the function from `main()` with two integer values.
4. Print before and after the swap to see the changes.

### **Output**
Before swap:
x = 34, y = 24
After swap:
x = 24, y = 34


## **4. Code Name: Employee Details using Functions**
### **Theory**
This program demonstrates **reference usage for updating salary** and **pass by value for checking eligibility**. One function increases salary by 20% using a reference parameter. Another function checks multiple conditions using pass by value.

### **Algorithm**
1. Accept employee details: name, research project status, publication status, profit, new project status, and salary.
2. Check if at least 3 conditions are true to determine eligibility.
3. If eligible, update the salary using a function that takes a reference parameter.
4. Display eligibility status and final salary.

### **Output**
Enter employee name: Ninad
Research project done: 1
Research publication done: 1
Enter profit made: 5
New project in pipeline: 1
Enter current salary: 60000

Eligible
Employee: Ninad
Final Salary: 72000
