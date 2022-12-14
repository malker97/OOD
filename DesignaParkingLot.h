// its a Obect Oriented Programming Design Project
// in this project we are going to make a Parking Lot Management System
// we will use Singletone Design Pattern

// psuedocode for this project
class Car:
    - licensePlate: string
    - color: string
    - size: string
    - model: string
    - parkingTime: int

    + calculateParkingFee(): int

class SUV extends Car:
    ...
class Sedan extends Car:
    ...
class Truck extends Car:
    ...

class ParkingSpot:
    - id: int
    - size: string
    - isFree: bool
    - car: Car

    + assignCar(car: Car): void
    + removeCar(): void


class ParkingLot:
    - instance of ParkingLot: ParkingLot
    - cars: list of cars
    - parkingSpots: list of parkingSpots
    - rows: int
    - columns: int
    - levels: int

    + getParkingLotInstance(): ParkingLot
    + canFitCar(car: Car): bool
    + parkCar(car: Car): void
    + removeCar(car: Car): void
    + getSpotForCar(car: Car): ParkingSpot
    + getFreeSpots(): list of parkingSpots