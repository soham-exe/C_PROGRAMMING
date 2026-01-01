## 1. Display Elements Greater Than X
**Description:** Print elements that are greater than a given number X.
**Signature:** `void DisplayGreater(PNODE Head, int X);`

| Test Case | Input List | X | Expected Output |
| :--- | :--- | :--- | :--- |
| **01** | `| 10 |->| 20 |->| 30 |->NULL` | `15` | `20  30` |
| **02** | `| 5 |->| 8 |->NULL` | `10` | *(No Output)* |

---

## 2. Display Elements Less Than X
**Description:** Print elements that are less than a given number X.
**Signature:** `void DisplayLess(PNODE Head, int X);`

| Test Case | Input List | X | Expected Output |
| :--- | :--- | :--- | :--- |
| **01** | `| 10 |->| 20 |->| 30 |->NULL` | `25` | `10  20` |
| **02** | `| 40 |->| 50 |->NULL` | `10` | *(No Output)* |

---

## 3. Check Whether List is Empty
**Description:** Return true if the list has no nodes.
**Signature:** `bool IsEmpty(PNODE Head);`

| Test Case | Input List | Expected Result |
| :--- | :--- | :--- |
| **01** | `NULL` | `True` |
| **02** | `| 10 |->NULL` | `False` |

---

## 4. Replace Negative Numbers with Zero
**Description:** Modify the list so that any negative value becomes 0.
**Signature:** `void ReplaceNegative(PPNODE Head);`

| Test Case | Input List | Expected Modified List |
| :--- | :--- | :--- |
| **01** | `| -10 |->| 20 |->| -5 |->NULL` | `| 0 |->| 20 |->| 0 |->NULL` |
| **02** | `| 10 |->| 20 |->NULL` | `| 10 |->| 20 |->NULL` |

---

## 5. Increment Each Node Value by 1
**Description:** Increase every element in the list by 1.
**Signature:** `void IncrementAll(PPNODE Head);`

| Test Case | Input List | Expected Modified List |
| :--- | :--- | :--- |
| **01** | `| 10 |->| 20 |->| 30 |->NULL` | `| 11 |->| 21 |->| 31 |->NULL` |
| **02** | `| 0 |->| -1 |->NULL` | `| 1 |->| 0 |->NULL` |