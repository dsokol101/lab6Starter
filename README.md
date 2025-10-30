# Lab 6: Working with classes in C++

Write a Circle.h, Circle.cpp and app.cpp

## Objective
To practice writing a class with separate compilation of files.

## Instructions

### Step 1: `Circle.h` (Class Declaration)
Declare the `Circle` class with a **private** data member for the radius and the following **public** members:

* **Constructors:**
    * `Circle()`: Default constructor (sets radius to `1.0`).
    * `Circle(double r)`: Parameterized constructor.
* **Accessors (Getters):**
    * `double getRadius()`: Returns the circle's radius.
    * `double area()`: Calculates and returns the area ($A = \pi r^2$).
    * `double circumference()`: Calculates and returns the circumference ($C = 2 \pi r$).

* **Mutator (Setter):**
    * `void setRadius(double newRadius)`: Sets the radius.

> **Hint:** Use the constant `M_PI` from the `<cmath>` header for the value of Pi.

### Step 2: `Circle.cpp` (Method Definitions)
Provide the full implementation (definitions) for every method and constructor declared in `Circle.h`.

### Step 3: `app.cpp` (Main Application and Pass-by-Reference)
Write the `main` function and a helper function that demonstrates the class functionality (but comment out main before you push)

1.  **Object Creation:**
    * Create a `Circle` object (`c1`) using the **default constructor**.
    * Create a `Circle` object (`c2`) using the **parameterized constructor** (e.g., radius 5.0).
2.  **Initial Output:** Print the radius, area, and circumference for both `c1` and `c2`.
3.  **`enlargeCircle` Function:**
    * **Implement** the function with the following signature:
        ```cpp
        void enlargeCircle(Circle& circleRef, double amount);
        ```
    * The function must accept the `Circle` object by **reference** (`Circle&`) and use the `setRadius()` method to increase its radius by the `amount` parameter.
    * **Call** `enlargeCircle` on your `c2` object (e.g., increase its radius by 2.5).

4.  **Final Output:** Print the new radius and area of `c2` to confirm the successful modification via pass-by-reference.

---

## 🖥️ Example Run
Your program's output should be formatted clearly and match the calculated results for the Circle class methods.

Initial state:

Circle c1 - Radius: 1, Area: 3.14159, Circumference: 6.28319

Circle c2 - Radius: 5, Area: 78.5398, Circumference: 31.4159

After enlarging c2:

Circle c2 - New Radius: 7.5, New Area: 176.715
