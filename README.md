## 아두이노 스마트 휴지통   
## Arduino Smart Trash   
   
### 1. 회로   
### 1. circuit   
![1](https://user-images.githubusercontent.com/71883774/100587277-b18ba600-3333-11eb-9f34-046e6e03a350.png)   
![2](https://user-images.githubusercontent.com/71883774/100587424-e1d34480-3333-11eb-9b24-44182c5b69f2.png)   
   
   
### 2. 테스트   
### 2. TEST   
초음파 센서와 사물과의 거리가 20CM 이하일 때 서보 모터가 회전합니다.   
The servo motor rotates when the distance between the ultrasonic sensor and the object is less than 20CM.   
(distance value <= 20)    ->    servo motor rotation   
   
![3](https://user-images.githubusercontent.com/71883774/100587653-34acfc00-3334-11eb-97d9-a5b26d57109e.png)   


### 3. 제작   
### 3. Create    
3-1. 휴지통 뚜껑과 서보 모터 연결   
3-1. Trash lid to Servo Motor   
![4](https://user-images.githubusercontent.com/71883774/100588125-d2083000-3334-11eb-95f8-b9e11d4d9176.png)   
   
3-2. 휴지통 몸통과 초음파 센서 연결   
3-2. Trash Body to Ultrasonic Sensor   
![5](https://user-images.githubusercontent.com/71883774/100588126-d3395d00-3334-11eb-97be-a2c4979286e8.png)   
   
3-3. 아두이노 우노 보드와 USB 케이블 연결 구멍 뚫기   
3-3. Drilling holes in the USB cable connection to the Arduino Uno board   
![6](https://user-images.githubusercontent.com/71883774/100588130-d5032080-3334-11eb-8885-6361571af541.png)   
