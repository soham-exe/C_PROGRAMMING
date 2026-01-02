## 1. Find Difference (Max – Min)
**Description:** Calculate the difference between the maximum and minimum values in the list.
**Signature:** `int Difference(PNODE Head);`

| Test Case | Input List | Expected Result |
| :--- | :--- | :--- |
| **01** | `10 -> 20 -> 50 -> 5` | `45` (50 - 5) |
| **02** | `100 -> 100` | `0` |
| **03** | `1 -> 2 -> 3 -> 4` | `3` (4 - 1) |

---

## 2. Check Whether All Elements Are Positive
**Description:** Verify if every element in the list is strictly greater than zero.
**Signature:** `bool CheckAllPositive(PNODE Head);`

| Test Case | Input List | Expected Result |
| :--- | :--- | :--- |
| **01** | `10 -> 20 -> 30` | `True` |
| **02** | `10 -> -5 -> 20` | `False` |
| **03** | `0 -> 1 -> 2` | `False` |

---

## 3. Display Elements Divisible by 3
**Description:** Traverse the list and print only those elements that are divisible by 3.
**Signature:** `void DisplayDivByThree(PNODE Head);`

| Test Case | Input List | Expected Output |
| :--- | :--- | :--- |
| **01** | `3 -> 5 -> 9 -> 10 -> 12` | `3  9  12` |
| **02** | `1 -> 2 -> 4 -> 5` | *(No Output)* |
| **03** | `30 -> 60 -> 90` | `30  60  90` |

---

## 4. Count Elements Divisible by 5
**Description:** Count how many elements in the list are divisible by 5.
**Signature:** `int CountDivByFive(PNODE Head);`

| Test Case | Input List | Expected Result |
| :--- | :--- | :--- |
| **01** | `5 -> 10 -> 12 -> 15` | `3` |
| **02** | `1 -> 2 -> 3 -> 4` | `0` |
| **03** | `50 -> 100 -> 200` | `3` |

---

## 5. Count Two-Digit Numbers
**Description:** Count how many elements in the list consist of exactly two digits (10 to 99).
**Signature:** `int CountTwoDigit(PNODE Head);`

| Test Case | Input List | Expected Result |
| :--- | :--- | :--- |
| **01** | `5 -> 10 -> 99 -> 100` | `2` (10 and 99) |
| **02** | `1 -> 2 -> 3` | `0` |
| **03** | `15 -> 25 -> 35 -> 45` | `4` |