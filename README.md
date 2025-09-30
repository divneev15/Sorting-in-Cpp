
# Sorting Algorithms in C++

**Aim:**
To study and implement different **Sorting Algorithms** in C++:

**Tools Used:**

* VS Code or any online C++ Compiler

---

## Theory

A **Sorting Algorithm** is a method used to rearrange elements of an array or list into a particular order (ascending or descending). Sorting is one of the most important operations in computer science because it helps in efficient **searching**, **data organization**, and **optimization** of other algorithms.

Sorting algorithms are broadly classified as:

* **Comparison-based sorting** (e.g., Bubble Sort, Selection Sort, Insertion Sort, Merge Sort, Quick Sort).
* **Non-comparison sorting** (e.g., Counting Sort, Radix Sort, Bucket Sort).

In this experiment, we focus on **three simple, comparison-based sorting techniques**:

---

### 1. Selection Sort

* Selection sort works by **repeatedly finding the minimum element** from the unsorted part of the array and placing it in its correct position.
* The array is conceptually divided into **two subarrays**: a sorted part (on the left) and an unsorted part (on the right).
* In each iteration, the smallest element of the unsorted subarray is placed at the end of the sorted subarray.

**Time Complexity:**

* Best Case: O(n²)
* Average Case: O(n²)
* Worst Case: O(n²)

<img width="480" height="800" alt="image" src="https://github.com/user-attachments/assets/12288da4-86fb-4873-81fb-f1be02bc915f" />


---

### 2. Insertion Sort

* Insertion sort works like the way we arrange playing cards in our hands.
* Starting from the second element, it is compared with the elements before it and placed in its correct position in the sorted portion of the array.
* This process is repeated until the entire array is sorted.

**Time Complexity:**

* Best Case: O(n) (already sorted array)
* Average Case: O(n²)
* Worst Case: O(n²)

 <img width="392" height="503" alt="image" src="https://github.com/user-attachments/assets/38de6c3d-5573-4190-85c3-c6896c92c661" />
---

### 3. Bubble Sort

* Bubble sort works by **repeatedly swapping adjacent elements** if they are in the wrong order.
* With each pass, the largest element "bubbles up" to its correct position at the end of the array.
* This process continues until no more swaps are needed, meaning the array is sorted.

**Time Complexity:**

* Best Case: O(n) (when array is already sorted)
* Average Case: O(n²)
* Worst Case: O(n²)



  <img width="801" height="401" alt="image" src="https://github.com/user-attachments/assets/c0f5490b-e452-420b-a73d-621571bd5ecf" />

---

### 4. **Merge Sort**

* Merge Sort is a **divide-and-conquer algorithm**.
* The array is **recursively divided** into two halves until each subarray has one element.
* Then, the subarrays are **merged in sorted order** to form the final sorted array.
* It guarantees **O(n log n)** performance in all cases and is **stable**.
* However, it requires **extra memory space** for merging.

**Use Case:** Best for large datasets or when stability is important (e.g., databases).

---

### 5. **Quick Sort**

* Quick Sort is also a **divide-and-conquer algorithm**.
* A **pivot element** is chosen, and the array is **partitioned** into two subarrays:

  * Left: elements smaller than pivot
  * Right: elements greater than pivot
* The same process is recursively applied to both subarrays.
* It is very fast on average (**O(n log n)**) but can degrade to **O(n²)** if pivot is poorly chosen.
* Unlike Merge Sort, it is **in-place** (does not need much extra memory).

**Use Case:** General-purpose sorting, widely used in practice (e.g., C++ STL `sort()` uses it with improvements).

---

### 6.**Heap Sort**

* Heap Sort uses a **binary heap data structure**.
* First, a **max heap** is built from the array, so the largest element is at the root.
* The root is swapped with the last element, and the heap size is reduced.
* The heap is **heapified** again to restore order, and the process repeats until the array is sorted.
* Time complexity is always **O(n log n)**, but it is **not stable**.
* Requires constant **O(1) extra space** (in-place).

**Use Case:** Useful when guaranteed performance and constant space are required (e.g., scheduling).

---

### 7. **Bucket Sort**

* Bucket Sort is a **distribution-based sorting algorithm**.
* The elements are distributed into multiple **buckets** based on a mapping function.
* Each bucket is then sorted individually (often using Insertion Sort).
* Finally, the contents of all buckets are concatenated to form the sorted array.
* Best-case time complexity is **O(n + k)**, where `k` is the number of buckets.
* Performance depends on **data distribution**.

**Use Case:** Works best for data that is **uniformly distributed** (e.g., percentages, floating-point numbers in [0,1)).


### General Syntax of Swap Function (used in sorting):

```cpp
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
```

---

## Program 1 – Selection Sort

**Algorithm (Detailed):**

1. Start the program.
2. Read the number of elements `n` and input array elements.
3. For each index `i` from `0` to `n-2`:

   * Find the minimum element from the unsorted part (`i` to `n-1`).
   * Swap it with the element at index `i`.
4. Repeat until the array is sorted.
5. Display the sorted array.
6. End the program.

**Key Point:** Works by placing the smallest element at its correct position step by step.

---

## Program 2 – Insertion Sort

**Algorithm (Detailed):**

1. Start the program.
2. Read the number of elements `n` and input array elements.
3. For each element from index `1` to `n-1`:

   * Store the element in a temporary variable `key`.
   * Compare it with elements before it (`arr[j]`).
   * Shift elements greater than `key` one position to the right.
   * Insert `key` in its correct position.
4. Repeat until all elements are sorted.
5. Display the sorted array.
6. End the program.

**Key Point:** Elements are inserted one by one into their correct position, like sorting cards in hand.

---

## Program 3 – Bubble Sort

**Algorithm (Detailed):**

1. Start the program.
2. Read the number of elements `n` and input array elements.
3. For each pass `i` from `0` to `n-1`:

   * Compare adjacent elements `arr[j]` and `arr[j+1]`.
   * If `arr[j] > arr[j+1]`, swap them.
   * After each pass, the largest element moves to its correct position.
4. Repeat until no swaps are required or all passes are completed.
5. Display the sorted array.
6. End the program.

**Key Point:** Repeatedly compares and swaps adjacent elements until sorted.

Sure! Here’s a **step-by-step algorithm in code-like format** for the **four remaining sorting algorithms** (Merge, Quick, Heap, Bucket). You can directly use these in your notes.

---

## 🧾 **Merge Sort Algorithm**

1. **Start**
2. Input array of size `n`.
3. If array size > 1:

   * Find middle index: `mid = n / 2`
   * Split array into left (`arr[0..mid-1]`) and right (`arr[mid..n-1]`)
   * Recursively **Merge Sort** left subarray
   * Recursively **Merge Sort** right subarray
   * Merge the two sorted subarrays into a single sorted array
4. **End**

**Merge Step:**

* Initialize pointers `i = 0, j = 0, k = 0`
* While `i < size_left` and `j < size_right`:

  * If `left[i] <= right[j]`, `arr[k++] = left[i++]`
  * Else, `arr[k++] = right[j++]`
* Copy remaining elements from left and right arrays into `arr`

---

## 🧾 **Quick Sort Algorithm**

1. **Start**
2. Input array of size `n`.
3. If array size > 1:

   * Choose a pivot element (e.g., last element)
   * Partition array:

     * Elements < pivot → left side
     * Elements > pivot → right side
   * Recursively **Quick Sort** left subarray
   * Recursively **Quick Sort** right subarray
4. **End**

**Partition Step:**

* Initialize `i = low - 1`
* For `j = low` to `high-1`:

  * If `arr[j] < pivot`, increment `i` and swap `arr[i]` with `arr[j]`
* Swap pivot with `arr[i+1]`
* Return pivot index

---

## 🧾 **Heap Sort Algorithm**

1. **Start**
2. Input array of size `n`.
3. Build a **max heap** from the array:

   * For `i = n/2 - 1` down to `0`, **heapify** subtree rooted at `i`
4. Repeat while heap size > 1:

   * Swap `arr[0]` (max) with `arr[heap_size-1]`
   * Reduce heap size by 1
   * Heapify root element to maintain max heap
5. **End**

**Heapify Step (for index i):**

* `largest = i`
* `left = 2*i + 1`, `right = 2*i + 2`
* If `arr[left] > arr[largest]`, `largest = left`
* If `arr[right] > arr[largest]`, `largest = right`
* If `largest != i`, swap `arr[i]` and `arr[largest]`, recursively heapify at `largest`

---

## 🧾 **Bucket Sort Algorithm**

1. **Start**
2. Input array of size `n` and determine number of buckets `k`
3. Create `k` empty buckets (arrays or lists)
4. For each element `arr[i]`:

   * Compute bucket index: `index = arr[i] * k / (max_value + 1)`
   * Insert `arr[i]` into bucket at `index`
5. Sort each bucket individually (e.g., using **Insertion Sort**)
6. Concatenate all buckets in order to form the final sorted array
7. **End**

---

## 🧩 Time Complexity Comparison | Algorithm | Best Case | Worst Case | Average Case | Space Complexity | Stable | |-----------------|-----------|------------|--------------|------------------|--------| | Bubble Sort | O(n) | O(n²) | O(n²) | O(1) | Yes | | Selection Sort | O(n²) | O(n²) | O(n²) | O(1) | No | | Insertion Sort | O(n) | O(n²) | O(n²) | O(1) | Yes | | Merge Sort | O(n log n)| O(n log n) | O(n log n) | O(n) | Yes | | Quick Sort | O(n log n)| O(n²) | O(n log n) | O(log n) | No | | Heap Sort | O(n log n)| O(n log n) | O(n log n) | O(1) | No | | Bucket Sort | O(n+k) | O(n²) | O(n+k) | O(n+k) | Yes |

--- 

## Key Learning Outcomes

* Understood three basic **sorting algorithms**: Selection, Insertion, and Bubble Sort.
* Learned how sorting reduces complexity of searching and improves efficiency.
* Observed how different algorithms have different time complexities.
* Learned to implement **swap operations** and looping structures for sorting.

---

## Applications

* **Databases:** Sorting records for quick access.
* **E-commerce:** Sorting products by price, popularity, or rating.
* **Operating Systems:** Sorting tasks for scheduling.
* **Gaming:** Sorting scores, leaderboards, or inventories.
* **Computer Graphics:** Sorting data for rendering objects in order.

---

## Conclusion

Thus, we have studied and implemented **Selection Sort, Insertion Sort, and Bubble Sort** in C++. These algorithms demonstrate how sorting works step by step, highlight their efficiency, and show the importance of choosing the right algorithm for a given application.

