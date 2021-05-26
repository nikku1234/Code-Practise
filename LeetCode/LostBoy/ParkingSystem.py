class ParkingSystem:

    def __init__(self, big: int, medium: int, small: int):
        self.car = [big,medium,small]
        

    def addCar(self, carType: int) -> bool:
        self.car[carType-1] -= 1
        return self.car[carType-1] >= 0
        
        