# MorphFS V1 - Arrays

The first implementation of MorphFS.

This version focuses on understanding how Arrays can be used to organize and manage data in a structured manner.

---

## Objective

Build the foundation of MorphFS using Arrays.

Instead of jumping directly into advanced features, this version explores how a simple fixed-size storage system can be created using array indexing.

---

## Features

### Store File Names

Users can register file names within MorphFS.

Example:

```text
resume.pdf
notes.txt
movie.mp4
```

---

### View Registered Files

Displays all file names currently stored in the system.

Example:

```text
0 -> resume.pdf
1 -> notes.txt
2 -> movie.mp4
```

---

## Data Structure Used

### Arrays

Arrays provide:

* Contiguous Memory Allocation
* Fast Indexed Access
* Simple Storage Structure

Example:

```c
char files[5][50];
```

This allows MorphFS to store:

* Up to 5 file entries
* Up to 50 characters per file name

---

## Learning Outcomes

Through this implementation we explored:

* Array Indexing
* Fixed-Size Storage
* Memory Allocation
* Storage Capacity vs Input Validation
* Array Limitations

---

## Limitation Discovered

The biggest limitation of Arrays is that the storage size must be decided in advance.

Example:

```c
char files[5][50];
```

Only five file slots are available.

As usage grows, the system cannot dynamically expand its storage.

This limitation becomes the motivation for the next evolution of MorphFS.

---

## Sample Output

```text
===== MorphFS =====

1. Add File
2. View Files
3. Exit

Enter choice: 1

Enter file name:
resume.pdf

File Added Successfully!

Enter choice: 2

Registered Files:

0 -> resume.pdf
```

---

## Think Morph Insight

Every Data Structure exists because a previous solution had limitations.

Arrays solved the problem of organized storage.

Arrays also revealed a new problem:

Fixed Capacity.

The next version of MorphFS will focus on overcoming this limitation.

---

## Related

Project: MorphFS

Version: V1

Data Structure: Arrays

Framework:

Problem → Solution → Limitation → Evolution
