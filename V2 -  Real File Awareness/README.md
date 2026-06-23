# MorphFS V2 — Real File Awareness

## Overview

MorphFS V2 upgrades the system from storing simple file names to understanding real file metadata.

Instead of treating files as plain strings, MorphFS now stores structured information about files using pointers, dynamic memory allocation, and structures.

This is the first version where MorphFS begins interacting with real file information.

---

## Problem In V1

MorphFS V1 could only store file names.

Example:

* notes.txt
* resume.pdf
* movie.mp4

The system had no understanding of:

* File Size
* File Type
* Last Modified Date
* Other Metadata

Files were only names.

---

## Solution

MorphFS V2 introduces a File structure that can store metadata related to each file.

The system now reads and displays real file information.

---

## Features

* Read Real File Metadata
* Display File Name
* Display File Size
* Display File Type
* Display Last Modified Information
* Dynamic Memory Allocation

---

## Concepts Used

* Arrays
* Pointers
* malloc()
* Structures

---

## Limitation Solved

MorphFS can now understand real files instead of storing only names.

---

## New Limitation Discovered

Storage capacity is still fixed.

The system must decide in advance how many files it can store.

This limitation will be addressed in MorphFS V3 using Linked Lists.

---

## Related Videos

Architecture Walkthrough:

https://youtu.be/u-RirhoONi4?si=rdYnjv9IBZWgJAIZ

Code Walkthrough:

https://youtu.be/XVxZ6MEUSys?si=EwjMF9NR3X0WprSa

---

## Next Version

MorphFS V3 — Dynamic Storage

Goal:

Remove fixed storage limitations and allow MorphFS to grow dynamically using Linked Lists.
