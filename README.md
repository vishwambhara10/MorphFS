# MorphFS

A File Management System Built One Data Structure At A Time.

## About The Project

MorphFS is a long-term project created as part of the Think Morph journey.

Instead of learning Data Structures through isolated examples and textbook problems, MorphFS evolves by applying each Data Structure to solve real system design challenges.

The goal is not just to learn Data Structures, but to understand:

* Why they exist
* What problems they solve
* Their limitations
* How systems evolve over time

---

## Current Version

### MorphFS V1 - Arrays

Features:

* Add File
* View Files

Concepts Used:

* Arrays
* Indexing
* Fixed Size Storage

### Sample Output

```text
1. Add File
2. View Files
3. Exit

Enter File Name:
resume.pdf

File Added Successfully!

0 -> resume.pdf
```

---

## What We Learned

Arrays provide:

* Fast Access
* Simple Storage
* Predictable Memory Layout

However, Arrays require storage size to be defined in advance.

This limitation becomes the motivation for the next evolution of MorphFS.

---

## Evolution Roadmap

| Version | Data Structure | Purpose          |
| ------- | -------------- | ---------------- |
| V1      | Arrays         | File Storage     |
| V2      | Linked Lists   | Dynamic Storage  |
| V3      | Stacks         | Undo Operations  |
| V4      | Queues         | Batch Processing |
| V5      | Trees          | Folder Hierarchy |
| V6      | Hash Tables    | Fast Search      |

---

## Think Morph Framework

Every evolution of MorphFS follows the same process:

Problem → Solution → Limitation → Evolution

---

## Repository Structure

```text
MorphFS
│
├── README.md
│
└── v1-arrays
    └── morphfs.c
```

---

## Future Goals

* Real File Management
* Dynamic Storage
* Undo Functionality
* Folder Navigation
* Search System
* Terminal-Based File Manager

---

## YouTube Series

This project is being built publicly as part of the Think Morph YouTube series.

Each version of MorphFS corresponds to a new learning milestone and a new Data Structure.

---

## Author

Vishwambhara Bhagavath

Think Morph

Where Tech Meets Adventure.
