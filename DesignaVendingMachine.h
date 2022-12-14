// Design a Vending Machine
// The State design pattern is a behavioral software design pattern that allows an object to alter its behavior when its internal state changes. The pattern allows the object to appear to change its class.
// The State pattern is often used in conjunction with the Strategy pattern, which allows an object to change its behavior based on its internal state. The State pattern is useful for managing state-dependent behavior and reducing complex conditional logic in an object-oriented program.
// Here are some key points about the State design pattern:
//     The State pattern is a behavioral design pattern that allows an object to change its behavior based on its internal state.
//     The pattern allows the object to appear to change its class.
//     The State pattern is often used in conjunction with the Strategy pattern.
//     The pattern is useful for managing state-dependent behavior and reducing complex conditional logic in an object-oriented program.
//     The pattern is typically implemented using a state machine, with each state represented by a separate class.
//     The state classes typically implement a common interface, which defines the behavior of the state.
//     The context class maintains a reference to the current state and delegates state-dependent behavior to the state object.
//     The context class can change the current state by setting a new state object.
//     The state classes can change the state of the context object by invoking methods on the context object.

// in this project we are going to make a Vending Machine Management System
// we will use State Design Pattern
// in this project we will have 2 main classes and 3 sub classes and 1 interface class
// 总而言之，他就是会有多个状态类来控制当前的真实设备的状态，然后通过状态来控制设备的行为
// psuedocode for this project
class VendingMachine:
    - state: State
    - products: list of products

    + addProduct(product: Product): void
    + vend(productType: string): void
class readyState:
    - machine: VendingMachine

    + vend(productType: string): void # returns product
class soldState:
    - machine: VendingMachine

    + vend(productType: string): void # returns "Vending in progress. Please wait."
class Product:
    - name: string
    - price: float

    + vend(): void # returns name, price
class Coke extends Product:
    ...
class Chips extends Product:
    ...
class Candy extends Product:
    ...


