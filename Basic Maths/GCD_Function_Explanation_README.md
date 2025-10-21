# GCD Function (Euclidean Algorithm)

## 📘 Function Definition
```cpp
int findGCD(int n1, int n2) {
    while(n1 != 0 && n2 != 0) {
        if(n1 > n2) {
            n1 = n1 % n2; // Or n1 - n2;
        } else {
            n2 = n2 % n1; // Or n2 - n1;
        }
    }
    if(n1 == 0) return n2;
    return n1;
}
```

---

## 🧩 Explanation

This function computes the **Greatest Common Divisor (GCD)** of two integers using the **Euclidean algorithm**.  
The GCD is the largest number that divides both numbers without leaving a remainder.

---

## ⚙️ Working

### 1. **Loop Condition**
```cpp
while(n1 != 0 && n2 != 0)
```
The loop continues as long as **neither number is zero**.

---

### 2. **Reduction Step**
```cpp
if(n1 > n2)
    n1 = n1 % n2;
else
    n2 = n2 % n1;
```
- If `n1` is greater → replace it with `n1 % n2`.  
- If `n2` is greater → replace it with `n2 % n1`.

This step repeatedly reduces the numbers while preserving the GCD property.

---

### 3. **Termination**
When one of the numbers becomes `0`, the **other number** is the GCD:
```cpp
if(n1 == 0) return n2;
return n1;
```

---

## 🧮 Example

Find `GCD(48, 18)`:

| Step | n1 | n2 | Operation | Result |
|------|----|----|------------|---------|
| 1 | 48 | 18 | 48 % 18 | n1 = 12 |
| 2 | 12 | 18 | 18 % 12 | n2 = 6 |
| 3 | 12 | 6 | 12 % 6 | n1 = 0 |
| 4 | n1=0 | n2=6 | Stop | **GCD = 6** |

---

## 🧠 Summary

- Based on the **Euclidean Algorithm**  
- Keeps replacing the larger number with its remainder  
- When one number becomes zero, the other is the **GCD**

✅ **Efficient and reliable for all positive integers**
