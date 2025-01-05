# C++ Programs: Hotel Management System and Library Management System

## Overview

This repository contains two C++ programs demonstrating core programming concepts such as object-oriented programming (OOP), encapsulation, inheritance, and dynamic polymorphism. The programs focus on:

1. **Hotel Management System**: A menu-driven program for managing hotel room bookings and food orders.
2. **Library Management System**: A class-based system for managing library items like books and e-books.

---

## Programs

### 1. Hotel Management System

#### Description
The **Hotel Management System** allows users to:
- Manage room bookings and food orders.
- Track sales and inventory of rooms, pasta, noodles, and chicken.
- View detailed sales reports and remaining inventory.

#### Features
- Menu-driven interface for easy navigation.
- Handles the following:
  - Room bookings.
  - Food orders (Pasta, Noodles, Chicken).
  - Displays sales and collection details.

#### Menu Options
1. **Rooms**: Book rooms.
2. **Pasta**: Order pasta.
3. **Noodles**: Order noodles.
4. **Chicken**: Order chicken.
5. **Sales Report**: View inventory and sales details.
6. **Exit**: Exit the program.


---

### 2. Library Management System

#### Description
The **Library Management System** models a collection of library items, specifically books and e-books. It uses polymorphism and inheritance to manage different types of items efficiently.

#### Features
- Abstract base class `LibraryItem` for all library items.
- Derived classes for specific item types:
  - `Book`: Represents a generic book.
  - `EBook`: Represents an electronic book with additional attributes (file format and size).
  - `PrintedBook`: Represents a printed book with additional attributes (number of pages and shelf location).
- Dynamic polymorphism to interact with all library items uniformly.

#### Sample Run

