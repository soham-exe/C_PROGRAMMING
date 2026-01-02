## 1. Replace Even Numbers with 0
**Description:** Modify the list in-place to set all even values to 0.
**Signature:** `void ReplaceEven(PPNODE Head);`

| Test Case | Input List | Resulting List |
| :--- | :--- | :--- |
| **01** | `1 -> 2 -> 3 -> 4` | `1 -> 0 -> 3 -> 0` |
| **02** | `10 -> 20 -> 30` | `0 -> 0 -> 0` |
| **03** | `7 -> 9 -> 11` | `7 -> 9 -> 11` |

---

## 2. Replace Odd Numbers with 1
**Description:** Modify the list in-place to set all odd values to 1.
**Signature:** `void ReplaceOdd(PPNODE Head);`

| Test Case | Input List | Resulting List |
| :--- | :--- | :--- |
| **01** | `1 -> 2 -> 3 -> 4` | `1 -> 2 -> 1 -> 4` |
| **02** | `10 -> 20 -> 30` | `10 -> 20 -> 30` |
| **03** | `7 -> 11 -> 13` | `1 -> 1 -> 1` |

---

## 3. Multiply Each Element by 2
**Description:** Update every node in the list by multiplying its data by 2.
**Signature:** `void MultiplyByTwo(PPNODE Head);`

| Test Case | Input List | Resulting List |
| :--- | :--- | :--- |
| **01** | `1 -> 2 -> 3` | `2 -> 4 -> 6` |
| **02** | `10 -> 0 -> -5` | `20 -> 0 -> -10` |
| **03** | `50 -> 100` | `100 -> 200` |

---

## 4. Display Elements at Even Positions
**Description:** Print elements located at even indices (e.g., 2, 4, 6...).
**Signature:** `void DisplayEvenPosition(PNODE Head);`

| Test Case | Input List | Expected Output |
| :--- | :--- | :--- |
| **01** | `10 -> 20 -> 30 -> 40` | `20  40` |
| **02** | `10` | *(No Output)* |
| **03** | `5 -> 15 -> 25 -> 35 -> 45` | `15  35` |

---

## 5. Display Elements at Odd Positions
**Description:** Print elements located at odd indices (e.g., 1, 3, 5...).
**Signature:** `void DisplayOddPosition(PNODE Head);`

| Test Case | Input List | Expected Output |
| :--- | :--- | :--- |
| **01** | `10 -> 20 -> 30 -> 40` | `10  30` |
| **02** | `10` | `10` |
| **03** | `5 -> 15 -> 25 -> 35 -> 45` | `5  25  45` |