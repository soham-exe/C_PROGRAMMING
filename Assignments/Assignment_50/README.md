
## 1. Replace Negative Numbers with Absolute Value
**Description:** Modify the list such that all negative values are replaced by their positive absolute counterparts.
**Signature:** `void MakeAbsolute(PPNODE Head);`

| Test Case | Input List | Resulting List |
| :--- | :--- | :--- |
| **01** | `-10 -> 20 -> -30` | `10 -> 20 -> 30` |
| **02** | `-1 -> -2 -> -3` | `1 -> 2 -> 3` |
| **03** | `10 -> 0 -> 40` | `10 -> 0 -> 40` |

---

## 2. Display Elements Greater Than Average
**Description:** Calculate the average of all node values and print only those elements that are strictly greater than that average.
**Signature:** `void DisplayGreaterThanAvg(PNODE Head);`

| Test Case | Input List | Average | Expected Output |
| :--- | :--- | :--- | :--- |
| **01** | `10 -> 20 -> 30` | `20` | `30` |
| **02** | `5 -> 5 -> 5 -> 25` | `10` | `25` |
| **03** | `1 -> 2` | `1.5` | `2` |

---

## 3. Check Whether List Is Sorted (Ascending order)
**Description:** Verify if the list elements are arranged in strictly non-decreasing order.
**Signature:** `bool CheckSorted(PNODE Head);`

| Test Case | Input List | Expected Result |
| :--- | :--- | :--- |
| **01** | `10 -> 20 -> 30 -> 40` | `True` |
| **02** | `10 -> 30 -> 20` | `False` |
| **03** | `5 -> 5 -> 10` | `True` |

---

## 4. Display Alternate Nodes
**Description:** Traverse the list and print every other node, starting from the first (positions 1, 3, 5...).
**Signature:** `void DisplayAlternate(PNODE Head);`

| Test Case | Input List | Expected Output |
| :--- | :--- | :--- |
| **01** | `10 -> 20 -> 30 -> 40 -> 50` | `10  30  50` |
| **02** | `10 -> 20` | `10` |
| **03** | `NULL` | *(No Output)* |

---

## 5. Display Node at Nth Position
**Description:** Display the data of the node located at the specified position `pos`.
**Signature:** `void Display(PNODE Head, int pos);`

| Test Case | Input List | Position (`pos`) | Expected Output |
| :--- | :--- | :--- | :--- |
| **01** | `10 -> 20 -> 30 -> 40` | `2` | `20` |
| **02** | `11 -> 22 -> 33` | `1` | `11` |
| **03** | `10 -> 20` | `5` | *(Error / No Output)* |