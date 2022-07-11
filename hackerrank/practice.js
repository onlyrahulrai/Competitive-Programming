// class ParkingLot {
//     slots = []
//     constructor(size){
//         this.slots = new Array(size).fill(null)
//     }

//     park(carId){
//         console.log(`Parking car: ${carId}`);

//         if(this.slots.every((slot) => slot !== null)){
//             return false;
//         }

//         for(let i = 0;i <= this.slots.length; i++){
//             const slot = this.slots[i];

//             if(slot === null){
//                 this.slots[i] = carId;
//                 return true;
//             }
//         }
//     }

//     remove(carId){
//         console.log(`Leaving car: ${carId}`);
//         if(this.slots.every((slot) => slot !== carId)){
//             return false;
//         }

//         for (let i = 0;i <= this.slots.length;i++){
//             const slot = this.slots[i]

//             if(slot === carId){
//                 this.slots[i] = null;
//                 return true;
//             }
//         }
//     }

//     getSlots(){
//         console.log(`Parking slots: ${this.slots}`);
//         return this.slots
//     }

//     getSize(){
//         console.log(`Parking size is: ${this.slots.length}`);
//         return this.slots.length;
//     }

//     getAvailable(){
//         const availableSlots = this.slots.filter((s) => s === null).length;
//         console.log(`Available parking slots: ${availableSlots}`)
//         return availableSlots;
//     }

//     isFull(){
//         return this.getAvailable() === 0;
//     }
// }

// const parking = new ParkingLot(5);

// console.log(parking.getSlots())



// function Employee(title) {
//     this.title = title;
// }

// Employee.prototype.setTitle = function(title){
//     this.title = title
// }

// Employee.prototype.getTitle = function(){
//     return this.title
// }

// function Engineer(title, isManager) {
//     Employee.call(this,title)
//     this.isManager = isManager;
// }

// Engineer.prototype = Employee.prototype

// Engineer.prototype.setIsManager = function(isManager){
//     this.isManager = isManager;
// }

// Engineer.prototype.getIsManager = function(){
//     return this.isManager;
// }

// const engineer = new Engineer("Developer",true)



// class StaffList{
//     constructor(){
//         this.members = []
//     }

//     add(name,age){
//         if(!this.members.includes(name) && age > 20){
//             this.members.push(name);
//         }else{
//             throw new Error("Staff member age must be greater than 20");
//         }
//     }

//     remove(name){
//         if(this.members.includes(name)){
//             this.members = this.members.filter((member) => member !== name)
//             return true
//         }else{
//             return false
//         }
//     }

//     getSize(){
//         return this.members.length
//     }
// }

// const staffList = new StaffList()

// staffList.add("a",21)
// staffList.add("b",22)
// staffList.add("c",23)
// staffList.remove("a")
// console.log(staffList.getSize())


// function dataFinder(data){
//     return function(minRange,maxRange,value){
//         if(maxRange > data.length - 1 || data.length === 0 || maxRange < minRange){
//             throw new Error("Invalid range")
//         }else{
//             return data.slice(minRange,maxRange).includes(value) ? true : false
//         }

//     }
// }

// const find = dataFinder([1,2,3,4,5,6,7,8,9])
// console.log(find(10,2,6))

class Rectangle {
    constructor(w, h) {
        this.w = w;
        this.h = h;
    }
}

Rectangle.prototype.area = function(){
    return this.w * this.h;
}

class Square extends Rectangle{
    constructor(w,h){
        super(w,h);
    }
}

const square = new Square(3,4)
