// its a Obect Oriented Programming Design Project
// in this project we are going to make a Hotel Management System
// we will use Singletone Design Pattern
// 对于单例设计模式，我们可以使用一个静态变量来保存当前的实例，然后在构造函数中判断是否已经有实例了，如果有的话就抛出异常，如果没有的话就创建一个实例
// 它的核心是容器来控制当前类生成object的单一性
// psuedocode for this project

class Hotel:
    - instance of Hotel: Hotel
    - rooms: list of rooms
    - reservations: list of reservations
    - amenities: list of amenities

    + getHotelInstance(): Hotel
    + getRooms(): list of rooms
    + getReservations(): list of reservations
    + makeReservation(reservation: Reservation): void
    + cancelReservation(reservation: Reservation): void
    + getAmenities(): list of amenities
    + addAmenity(amenity: Amenity): void
    + removeAmenity(amenity: Amenity): void

class HotelManagementSystem
{
private:
    static HotelManagementSystem* instance;
    HotelManagementSystem();
    HotelManagementSystem(const HotelManagementSystem&);
    vector<Room> rooms;
    vector<Reservation> reservations;
    vector<Amenity> amenities;

public:
    static HotelManagementSystem* getHotelInstance();
    vector<Room> getRooms();
    vector<Reservation> getReservations();
    void makeReservation(Reservation reservation);
    void cancelReservation(Reservation reservation);
    vector<Amenity> getAmenities();
    void addAmenity(Amenity amenity);
    void removeAmenity(Amenity amenity);
};

