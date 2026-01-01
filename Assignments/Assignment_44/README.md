## 1. Search an Element
**Description:** Checks whether a specific number is present in the linked list.
**Signature:** `bool Search(PNODE Head, int No);`

| Test Case | Input List | Target | Expected Result |
| :--- | :--- | :--- | :--- |
| **01** | `| 10 |->| 20 |->| 30 |->NULL` | `20` | `True` |
| **02** | `| 10 |->| 20 |->NULL` | `50` | `False` |
| **03** | `NULL` (Empty List) | `10` | `False` |

---

## 2. Count Even Numbers
**Description:** Counts the total number of nodes containing even values.
**Signature:** `int CountEven(PNODE Head);`

| Test Case | Input List | Expected Result |
| :--- | :--- | :--- |
| **01** | `| 11 |->| 20 |->| 32 |->NULL` | `2` |
| **02** | `| 1 |->| 3 |->| 5 |->NULL` | `0` |
| **03** | `| 2 |->| 4 |->| 6 |->NULL` | `3` |

---

## 3. Count Odd Numbers
**Description:** Counts the total number of nodes containing odd values.
**Signature:** `int CountOdd(PNODE Head);`

| Test Case | Input List | Expected Result |
| :--- | :--- | :--- |
| **01** | `| 10 |->| 21 |->| 33 |->NULL` | `2` |
| **02** | `| 2 |->| 4 |->| 6 |->NULL` | `0` |
| **03** | `NULL` (Empty List) | `0` |

---

## 4. Count Frequency of Given Number
**Description:** Counts how many times a specific number appears in the list.
**Signature:** `int Frequency(PNODE Head, int No);`

| Test Case | Input List | Target | Expected Result |
| :--- | :--- | :--- | :--- |
| **01** | `| 10 |->| 20 |->| 10 |->NULL` | `10` | `2` |
| **02** | `| 10 |->| 10 |->| 10 |->NULL` | `10` | `3` |
| **03** | `| 10 |->| 20 |->NULL` | `50` | `0` |

---

## 5. Display Only Even Elements
**Description:** Traverses the list and prints only the elements that are even.
**Signature:** `void DisplayEven(PNODE Head);`

| Test Case | Input List | Expected Output |
| :--- | :--- | :--- |
| **01** | `| 11 |->| 12 |->| 13 |->| 14 |->NULL` | `12  14` |
| **02** | `| 1 |->| 3 |->| 5 |->NULL` | *(No Output)* |
| **03** | `| 2 |->| 4 |->| 6 |->NULL` | `2  4  6` |

