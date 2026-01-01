## 1. Display Only Odd Elements
**Description:** Print only the odd elements present in the list.
**Signature:** `void DisplayOdd(PNODE Head);`

| Test Case | Input List | Expected Output |
| :--- | :--- | :--- |
| **01** | `| 10 |->| 11 |->| 13 |->NULL` | `11  13` |
| **02** | `| 2 |->| 4 |->NULL` | *(No Output)* |
| **03** | `| 1 |->| 3 |->NULL` | `1  3` |

---

## 2. First Occurrence Position
**Description:** Return the position of the first occurrence of a number.
**Signature:** `int FirstOccur(PNODE Head, int No);`

| Test Case | Input List | Target | Expected Result |
| :--- | :--- | :--- | :--- |
| **01** | `| 10 |->| 20 |->| 10 |->NULL` | `10` | `1` |
| **02** | `| 10 |->| 20 |->| 30 |->NULL` | `30` | `3` |
| **03** | `| 10 |->| 20 |->NULL` | `50` | `-1` (Not Found) |

---

## 3. Last Occurrence Position
**Description:** Return the position of the last occurrence of a number.
**Signature:** `int LastOccur(PNODE Head, int No);`

| Test Case | Input List | Target | Expected Result |
| :--- | :--- | :--- | :--- |
| **01** | `| 10 |->| 20 |->| 10 |->NULL` | `10` | `3` |
| **02** | `| 5 |->| 5 |->| 5 |->NULL` | `5` | `3` |
| **03** | `| 10 |->| 20 |->NULL` | `40` | `-1` (Not Found) |

---

## 4. Count Numbers Greater Than X
**Description:** Count elements greater than a given number X.
**Signature:** `int CountGreater(PNODE Head, int X);`

| Test Case | Input List | X | Expected Result |
| :--- | :--- | :--- | :--- |
| **01** | `| 10 |->| 20 |->| 30 |->NULL` | `15` | `2` |
| **02** | `| 5 |->| 10 |->NULL` | `20` | `0` |
| **03** | `| 50 |->| 100 |->NULL` | `10` | `2` |

---

## 5. Count Numbers Less Than X
**Description:** Count elements less than a given number X.
**Signature:** `int CountLess(PNODE Head, int X);`

| Test Case | Input List | X | Expected Result |
| :--- | :--- | :--- | :--- |
| **01** | `| 10 |->| 20 |->| 30 |->NULL` | `25` | `2` |
| **02** | `| 40 |->| 50 |->NULL` | `10` | `0` |
| **03** | `| 5 |->| 8 |->NULL` | `10` | `2` |