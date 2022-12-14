// The factory pattern is a design pattern that provides a way to create objects without specifying the exact class of object that will be created. This is done by creating a factory class that has a method that can be used to create objects of different classes, depending on the data or parameters that are passed to the method. The key points of the factory pattern include:
//     It provides a way to create objects without specifying the exact class of object that will be created.
//     It allows for the creation of objects of different classes based on the data or parameters that are passed to the factory method.
//     It helps to decouple the code that creates objects from the code that uses the objects.
//     It can make it easier to add new types of objects to the system, since the factory method can be extended to handle the new object type.
//     It can make it easier to change the types of objects that are created, since the code that uses the factory method does not need to be changed.

// in this project we are going to make a LinkedIn Profile Management System
// we will use Factory Design Pattern

// 工厂模式是一种设计模式，它提供了一种方法来创建对象，而不指定将要创建的对象的确切类。这是通过创建一个工厂类来完成的，该类具有可以用于创建不同类的对象的方法，具体取决于传递给该方法的数据或参数。
// 核心事实上是用一个工厂类来构造不同的对象，然后通过传递不同的参数来构造不同的对象

// 总而言之，他就是会有多个状态类来控制当前的真实设备的状态，然后通过状态来控制设备的行为

// psuedocode for this project

class LinkedInProfile:
    - name: string
    - age: int
    - education: string
    - experience: string
    - skills: string
    - jobTitle: string
    - connections: list of LinkedInProfile

    + addConnection(profile: LinkedInProfile): void
    + getConnectionNames(): list of string

class LinkedInProfileFactory:
    @staticmethod
    + createProfile(name: string, age: int, education: string, experience: string, skills: string, jobTitle: string): LinkedInProfile

main:
    factory = LinkedInProfileFactory()
    profile1 = factory.createProfile("John", 25, "MIT", "Google", "Python", "Software Engineer")