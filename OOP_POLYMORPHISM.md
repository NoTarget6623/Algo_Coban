# POLYMORPHISM (Tính đa hình)

## I. Tính đa hình là gì ?

&emsp;&emsp;**Đa hình (polymorphism)** là hiện tượng mà các đối tượng thuộc các class khác nhau có thể biểu diễn cùng một thông thiệp theo các cách khác nhau. 

&emsp;&emsp;Để hiểu rõ hơn chúng ta đến với ví dụ sau :
> &emsp;&emsp;Con chó và con mèo đều có thể phát ra tiếng kêu. Nhưng mà tiếng kêu của con chó là gâu gâu còn con mèo là meo meo. Tuy đều là hành động phát ra tiếng kêu nhưng mà chó và mèo lại có cách thực hiện khác nhau.

&emsp;&emsp;***Vấn đề đặt ra :***

&emsp;&emsp;Vì sao lại cần sử dụng tính đa hình ?
- Lợi ích rõ ràng nhất mà chúng ta có thể thấy được đó chính là tránh bị lặp code

## II. Phân loại đa hình 
![](https://raw.githubusercontent.com/NoTarget6623/Algo_Coban/main/resources/Polymorphism-1-768x402.webp)

### **Compile Time Polymorphism**

&emsp;&emsp;Loại đa hình này bao gồm 2 loại đa hình là :
- Ghi đè
- Nạp chồng toán tử

&emsp;&emsp;Về 2 loại đa hình trên thì chúng ta đã nghiên cứu kỹ ở bài trước. 

&emsp;&emsp;Nên chúng ta sẽ tìm hiểu luôn loại đa hình thứ 3

### **Rum Time Polymorphism**
&emsp;&emsp;Tính đa hình được thể hiện ở cách nạp chồng toán tử trong kế thừa.

&emsp;&emsp;Để tìm hiểu về loại đa hình này thì trước hết chúng ta cần tìm hiểu về từ khóa `virtual`

**Từ khóa virtual**

![](https://github.com/NoTarget6623/Algo_Coban/blob/main/resources/virtual-trong-c-la-gi-tac-dung-virtual-trong-c.png?raw=true)

Tác dụng của từ khóa virtual đó chính là cho phép :
- Phương thức ở lớp con ghi đè lên phương thức lớp cha
- Tạo ra lớp ảo để tránh bị mơ hồ trong dữ liệu

Để hiểu rõ hơn thì chúng ta bắt đầu tìm hiểu :

1. **Phương thức ảo** 

Ta có ví dụ sau 
```C++
#include <iostream>
using namespace std;
class Animal{
public :
    void Sound(){
        cout << "some sound";
    }
};
class Dog : public Animal{
public :
    void Sound(){
        cout << "gau gau";
    }
};
int main(){
    Animal* dog = new Dog;
    dog->Sound();
}
```
Khi chạy chương trình nó sẽ in ra :
```
some sound
```
&emsp;&emsp;Ta có thể thấy được là chúng ta đã khai báo `Animal` là `dog` bằng cách `new Dog` nhưng mà khi gọi ra hàm `Sound()` thì nó vẫn gọi ra hàm `Sound` ở lớp `Animal`

&emsp;&emsp;Vì vậy chúng ta cần thêm từ khóa virtual vào trước hàm `Sound()` của lớp `Animal` để cho phép hàm `Sound()` của lớp `Dog` ghi đè lên.

```C++
#include <iostream>
using namespace std;
class Animal{
public :
    virtual void Sound(){
        cout << "some sound";
    }
};
class Dog : public Animal{
public :
    void Sound(){
        cout << "gau gau";
    }
};
int main(){
    Animal* dog = new Dog;
    dog->Sound();
}
```
Khi chạy chương trình nó sẽ in ra :
```
gau gau
```

2. **Phương thức thuần ảo**

**Hàm thuần ảo (pure virtual function)** được sử dụng khi:

- Không cần sử dụng hàm này trong lớp cơ sở, chỉ phục vụ cho lớp dẫn xuất
- Lớp dẫn xuất bắt buộc phải định nghĩa lại hàm thuần ảo

Cú pháp :
``` C++
class Ten_class{
public :
    virtual kieudulieu phuongthuc() = 0;
}
```
3. **Lớp ảo** 

&emsp;&emsp;Có một vấn đề khi một lớp cơ sở được kế thừa bởi nhiều lớp dẫn xuất.

![](https://github.com/NoTarget6623/Algo_Coban/blob/main/resources/UntitledDiagram.png?raw=true)

&emsp;&emsp;Hai lớp B và C kế thừa từ lớp A. Lớp D kế thừa từ cả hai lớp B và C. Như vậy, lớp A được kế thừa hai lần bởi lớp D. Lần thứ nhất được kế thừa thông qua lớp B, lần thứ hai được kế thừa thông qua lớp C.

&emsp;&emsp;Lúc này, nếu đối tượng của lớp D gọi đến một hàm được kế thừa từ lớp A thì sẽ gây ra một sự mơ hồ. Không biết hàm đó được kế thừa gián tiếp từ lớp B hay lớp C.

``` C++
#include <iostream>
using namespace std;

class A{
public:
    void show(){
        cout << "Hello from A \n";
    }
};
class B : public A{
};
class C : public A{
};
class D : public B, public C{
};
void main(){
	D object;
    object.show();//error: ambiguous access of 'show'
}
```
Khi chạy chương trình nó sẽ báo lỗi :
```
"D :: show" is ambiguous
```

&emsp;&emsp;Để giải quyết tính không rõ ràng này, C++ có một cơ chế mà nhờ đó chỉ có một bản sao của lớp A ở trong lớp D. Đó là sử dụng lớp cơ sở ảo (**virtual base class**).

Vẫn lấy ví dụ trên, C++ sử dụng từ khóa vitual để khai báo lớp A là lớp cơ sở ảo trong các lớp B và C theo cú pháp sau:

``` C++
class A{
//Định nghĩa lớp
};
class B : virtual public A{
//Định nghĩa lớp
};
class C : virtual public A{
//Định nghĩa lớp
};
class D : public B, public C{
//Định nghĩa lớp
};
```

Áp dụng vào ví dụ trên ta có :

``` C++
#include <iostream>
using namespace std;

class A{
public:
    void show(){
        cout << "Hello from A \n";
    }
};
class B : virtual public A{
};
class C : virtual public A{
};
class D : public B, public C{
};
void main(){
	D object;
    object.show();
}
```
Khi này chương trình sẽ không báo lỗi và in ra
```
Hello from A
```
