## 1. Print List in Reverse Order
**Description:** Prints the data of the linked list from tail to head.  
**Signature:** `void DisplayReverse(PNODE Head);`

| Test Case | Input List | Expected Output |
| :--- | :--- | :--- |
| **01** | `| 10 |->| 20 |->| 30 |->NULL` | `30  20  10` |
| **02** | `| 5 |->NULL` | `5` |

---

## 2. Count Digits of Each Node
**Description:** Displays the number of digits in each element's value.  
**Signature:** `void CountDigits(PNODE Head);`

| Test Case | Input Node Value | Expected Display Output |
| :--- | :--- | :--- |
| **01** | `123` | `3 digits` |
| **02** | `45` | `2 digits` |
| **03** | `7` | `1 digit` |

---

## 3. Sum of Digits of Each Node
**Description:** Calculates and displays the sum of digits for each node value.  
**Signature:** `void SumDigits(PNODE Head);`

| Test Case | Input Node Value | Expected Display Output |
| :--- | :--- | :--- |
| **01** | `123` | `6` |
| **02** | `45` | `9` |
| **03** | `19` | `10` |

---

## 4. Display Prime Numbers
**Description:** Traverses the list and prints only nodes containing prime numbers.  
**Signature:** `void DisplayPrime(PNODE Head);`

| Test Case | Input List | Expected Output |
| :--- | :--- | :--- |
| **01** | `| 10 |->| 11 |->| 13 |->| 15 |->NULL` | `11  13` |
| **02** | `| 4 |->| 6 |->| 8 |->NULL` | *(No Output)* |

---

## 5. Count Prime Numbers
**Description:** Returns the total count of nodes containing prime numbers.  
**Signature:** `int CountPrime(PNODE Head);`

| Test Case | Input List | Expected Result |
| :--- | :--- | :--- |
| **01** | `| 2 |->| 3 |->| 5 |->| 10 |->NULL` | `3` |
| **02** | `| 1 |->| 4 |->| 9 |->NULL` | `0` |
| **03** | `| 7 |->| 11 |->| 13 |->NULL` | `3` |