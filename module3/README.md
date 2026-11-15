# Module 3 – Colossus Airlines

## 1. Problem Statement

Create an airline seat reservation system using C.

The airline has 4 flights, and each flight has 128 seats.

The program allows users to check empty seats, assign seats, and delete reservations.

## 2. Describe the Solution

I used structures and arrays to store seat information.

The program has three menus:

- Main Menu: Select outbound or inbound flights.
- Flight Menu: Select a flight number.
- Seat Menu: Manage seat reservations.

I used `for` loops, `if/else`, `switch`, and `do-while` to create the program.

I also used `strcmp()` to sort passengers by last name.

## 3. Pros and Cons

**Pros:**
- Easy to use.
- Can manage 4 flights.
- Can assign and delete seats.
- Can show empty seats.

**Cons:**
- Data is lost when the program closes.
- The program only runs in the terminal.
- Input validation is limited.

## 4. Screenshots

Screenshots are saved in the `screenshots` folder.

## 5. How to Run

Compile:

```bash
gcc solution.c -o solution
```

Run:

```bash
./solution
```