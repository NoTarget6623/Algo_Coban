# Tính kế thừa ( Inheritance )

### **I. Tính kế thừa**

> &emsp;Thử nghĩ chúng ta có các lớp ``` President ```, ``` Secretary ``` và ``` Staff ```  đều có các thuộc tính (attribute): ``` name ``` , ``` age ```, ``` sex ``` và phương thức (method):  ``` getSalary() ```. Khi đó, nếu chúng ta tạo các lớp này thì chúng ta phải viết trong mỗi lớp đều có 3 phương thức trên. Hơn thế nữa, nếu bạn muốn sửa lại code trong một phương thức nào đó thì bạn phải sửa chúng cả ở 3 lớp sẽ rất tốn thời gian, và có thể dễ sai sót.

&emsp;Vì thế **tính kế thừa** sẽ được sử dụng trong trường hợp này để giải quyết vấn đề trên. 

&emsp;**Tính kế thừa** cho phép xây dựng một lớp mới dựa trên các định nghĩa của lớp đã có. Có nghĩa là lớp cha có thể chia sẽ dữ liệu và phương thức cho các lớp con. Các lớp con khỏi phải định nghĩa lại, ngoài ra có thể mở rộng các thành phần kế thừa và bổ sung thêm các thành phần mới. Tái sử dụng mã nguồn 1 cách tối ưu, tận dụng được mã nguồn.

&emsp;Áp dụng tính kế thừa vào ba lớp trên ta sẽ tạo ra một lớp ```class Person``` có các thuộc tính và phương thức: ``` name ```, ``` age ```, ``` sex ``` và ``` getSalary() ``` và các lớp ```class President ```, ```class Secretary``` và ```class Staff``` sẽ kế thừa từ ```class Person```

![](resources\Inheritance.png)

&emsp;Hình ảnh trên cho thấy khi áp dụng tính kế thừa, ta chỉ cần viết một lần các phương thức kia trong lớp cha và cho các lớp con kế thừa lại. Điều này sẽ tránh việc sai sót khi sửa và tăng khả năng sử dụng lại. Ví dụ, nếu bạn muốn thêm một lớp ```class Worker``` , bạn chỉ cần khai báo nó kế thừa từ ```class Person``` là cũng có thể dùng được các thuộc tính và phương thức trên rồi.

* Cú pháp khai báo tính kế thừa:
``` C++
class lopcon : phamvitruycap lopcha
{
   // nội dung lớp con
};
```
Chúng ta cùng xem bảng sau:

![](resources\inheritance-in-c-22-638.jpg)

- ```public```: Nếu kế thừa ở dạng này, sau khi kế thừa, tất cả các thành viên dạng ```public``` lớp cha sẽ ```public``` ở lớp con, dạng ```protected``` ở lớp cha vẫn sẽ là ```protected``` ở lớp con.
- ```protected```: Nếu dùng ```protected``` thì sau khi kế thừa, tất cả các thành viên dạng ```public``` lớp cha sẽ trở thành ```protected``` tại lớp con.
- ```private```: Trường hợp ta sử dụng ```private```, thì sau khi kế thừa, tất cả các thành viên dạng ```public``` và ```protected``` ở lớp cha sẽ thành ```private``` tại lớp con.

### **II. Hàm khởi tạo trong kế thừa**

Cấu trúc khai báo hàm khởi tạo trong kế thừa :
```C++
class_con (kieu_du_lieu1 bien1, kieu_du_lieu2 bien2) : class_cha (bien1){
   // Nội dung
}
```
Ví dụ : 

```C++
#include <iostream>
using namespace std;
class Person{
public :
    string name;
    int age;
    Person(string name,int age){
        this->name = name;
        this->age = age;
    }
};
class Worker : public Person{
public :
    int salary;
    Worker(string name,int age,int salary) : Person(name,age){
        this->salary = salary;
    }
};
int main(){
    Worker x = Worker("Han",19,1000000);
}
```

### **III. Hai loại kế thừa cơ bản**

1. Đơn kế thừa (Single Inheritance)

&emsp;&emsp;**Đơn kế thừa** : nghĩa là một lớp chỉ được kế thừa từ đúng một lớp khác. Hay nói cách khác, lớp con chỉ có duy nhất một lớp cha.

![](resources\images.png)

&emsp;&emsp;Cú pháp khai báo đơn kế thừa:
``` C++
class lopcon : phamvitruycap lopcha
{
   // nội dung lớp con
};
```

Ví dụ :
```C++
#include <iostream>
using namespace std;
class Person{
public :
    void KeThua(){
        cout << "Ke thua 1\n";
    }
};
class Worker : public Person{

};
int main(){
    Worker x;
    x.KeThua();
}
```

2. Đa kế thừa (Multiple Inheritance)

&emsp;&emsp;**Đa kế thừa** là một tính năng của ngôn ngữ C++. Trong đó một lớp có thể kế thừa từ nhiều hơn một lớp khác. Nghĩa là một lớp con được kế thừa từ nhiều hơn một lớp cơ sở.

![](resources\Multiple-Inheritance.png)

&emsp;&emsp;Cú pháp khai báo đa kế thừa:
``` C++
class lopcon : phamvitruycap lopcha1, phamvitruycap lopcha2,...{
  // nội dung của lớp con
};
```
Ví dụ :
``` C++
#include <iostream>
using namespace std;
class Person{
public :
    void KeThua1(){
        cout << "Ke thua 1\n";
    }
};
class Work{
public :
    void KeThua2(){
        cout << "Ke thua 2\n";
    }
};
class Worker : public Person, public Work{

};
int main(){
    Worker x;
    x.KeThua1();
    x.KeThua2();
}
```

### **IV. Nạp chồng hàm, nạp chồng toán tử**

**1. Nạp chồng hàm**

&emsp;&emsp;**Nạp chồng hàm** (Function Overloading) là một kiến thức khá mới mẻ đối với các bạn mới bắt đầu làm quen với C++. Bởi vì kiến thức này không hề tồn tại trong C mà chỉ có ở C++.

&emsp;&emsp;Kỹ thuật này cho phép sử dụng cùng một tên gọi cho các hàm “giống nhau” (có cùng mục đích). Nhưng khác nhau về kiểu dữ liệu tham số hoặc số lượng tham số.

Ví dụ :
``` C++
#include <iostream>
using namespace std;
int Sum(int a,int b){
    return a + b;
}
double Sum(double a,double b){
    return a + b;
}
int main(){
    cout << Sum(3,4) << "\n";
    cout << Sum(3,4,4,0);
}
```
Ta có kết quả
``` C++
7
7,4
```
**2. Nạp Chồng Toán Tử**

&emsp;&emsp;**Nạp chồng toán tử** (Operator Overloading) được dùng để định nghĩa toán tử cho có sẵn trong c++ phục vụ cho dữ liệu riêng do bạn tạo ra.

&emsp;&emsp;Nếu gặp một biểu thức phức tạp, số lượng phép tính nhiều thì việc sử dụng các phương thức trên khá khó khăn và có thể gây rối cho người lập trình. Vì thế ta sẽ nạp chồng lại các toán tử để có thể tạo một cái nhìn trực quan vào code, giảm thiểu các lỗi sai không đáng có.

- C++ chỉ cho phép người dùng overloading lại các toán tử có sẵn trong C++
- Một toán tử có thể được định nghĩa cho nhiều kiểu dữ liệu khác nhau.

**2.1. Phân loại nạp chồng toán tử**

**2.1.1 Nạp chồng toán tử 1 ngôi**

Ví dụ :
``` C++
#include <iostream>
using namespace std;
class phanso {
private:
    int tu, mau;
public:
    phanso(){
        tu = mau = 0;
    }
    void input(){
        cout << "Nhap tu so: ";cin >> this->tu;
        cout << "Nhap mau so: ";cin >> this->mau;
    } 
    void output(){
        cout << this->tu << "/" << this->mau << endl;
    }
    phanso operator +(phanso b){
        phanso c;
        c.tu = this->tu * b.mau + this->mau * b.tu;
        c.mau = this->mau * b.mau;
        return c;
    }    
}; 
int main(){
    phanso a, b, c;
    a.input();
    b.input();
    c = a + b;  
    c.output();
}
```

&emsp;&emsp;Trong phần code trên, mình đã nạp chồng toán tử + cho lớp phân số bằng cách nạp chồng toán tử 1 ngôi ( chỉ có thể truyền vào một tham số )

&emsp;&emsp;Với cách nạp chồng này ta có thể coi nó là một phương thức của lớp:
- Tên phương thức sẽ có dạng operator `@` – trong đó `@` là toán tử cần nạp chồng

**2.1.2 Nạp chồng toán tử 2 ngôi**

Ví dụ :

``` C++
#include <iostream>
using namespace std;
class phanso {
private:
    int tu, mau;
public:
    phanso(){
        tu = mau = 0;
    }
    void input(){
        cout << "Nhap tu so: ";cin >> this->tu;
        cout << "Nhap mau so: ";cin >> this->mau;
    } 
    void output(){
        cout << this->tu << "/" << this->mau << endl;
    }
    friend phanso operator +(phanso a, phanso b){
        phanso c;
        c.tu = a.tu * b.mau + a.mau * b.tu;
        c.mau = a.mau * b.mau;
        return c;
    }   
}; 
int main(){
    phanso a, b, c;
    a.input();
    b.input();
    c = a + b;  
    c.output();
}
```

&emsp;&emsp;Với cách nạp chồng toán tử 2 ngôi này, thì hàm nạp chồng được coi là một hàm bạn của lớp:

- Có từ khoá `friend` ở đầu
- Tên hàm là `operator @–` Trong đó `@` vẫn là toán tử cần nạp chồng
- 2 tham số được truyền vào là 2 giá trị thực hiện phép toán

**2.1.3. Nạp chồng toán tử nhập xuất**

``` C++
#include <iostream>
using namespace std;
class phanso{
private:
    int tu, mau;
public:
    phanso(){
        tu = mau = 0;
    }
    friend istream &operator>>(istream &is, phanso &obj){
        cout << "Nhap tu so: ";is >> obj.tu;
        cout << "Nhap mau so: ";is >> obj.mau;
        return is;
    }
    friend ostream &operator<<(ostream &os, phanso obj){
        os << obj.tu << "/" << obj.mau << endl;
        return os;
    }
};
int main(){
    phanso a;
    cin >> a;
    cout << a;
}
```

&emsp;&emsp;Đối với toán tử nhập `>>` kiểu trả về của nó sẽ là `istream`. Trong phần code trên, mình truyền tham số đầu tiền là tham chiếu `is` . Sau đó phần code trong thân hàm, tất cả `cin` mình sẽ thay bằng `is` và kết thúc hàm bằng `return is`. Tham số thứ 2 được truyền vào cũng dưới dạng tham chiếu `obj` thuộc lớp `phanso`.

&emsp;&emsp;Cách thức nạp chồng toán tử xuất `<<` Cũng tương tự như nạp chồng toán tử nhập `>>`. Điều khác biệt ở đây là `os` có kiểu trả về là `ostream` và tham số thứ 2 truyền vào có thể là tham trị chứ không nhất thiết phải là tham chiếu.

### V. **Ghi đè hàm (Function Overriding)**

&emsp;&emsp;Kế thừa cho phép lập trình viên ứng dụng tạo một lớp thừa kế từ một lớp có sẵn. Lớp thừa kế sẽ kế thừa các tính năng của lớp chính (lớp đã tồn tại).

&emsp;&emsp;Giả sử, cả hai lớp chính và lớp thừa kế đều có một hàm thành viên với cùng tên và cùng đối số (số lượng và kiểu của các đối số).

&emsp;&emsp;Nếu bạn tạo một đối tượng của lớp thừa kế và gọi hàm thành viên tồn tại ở cả hai lớp (lớp chính và lớp kế thừa), hàm thành viên của lớp kế thừa sẽ được gọi và hàm của lớp chính sẽ bị bỏ qua.

&emsp;&emsp;Tính năng này trong C++ được gọi là ghi đè hàm

![](resources\05-04-2019-18-13-12-image.png)

**1. Làm thế nào để truy xuất hàm bị ghi đè trong lớp chính từ lớp kế thừa ?**

Nếu bạn muốn truy xuất hàm getData() từ lớp chính, bạn có thể sử dụng câu lệnh sau trong lớp kế thừa.
``` C++
Base::getData();
```
![](resources\05-04-2019-18-13-38-image.png)

### **VI. Hàm friend**

**1. Định nghĩa**

&emsp;&emsp;Hàm bạn trong c++ là hàm tự do, không thuộc lớp. Tuy nhiên hàm bạn trong c++ có quyền truy cập các thành viên private của lớp.

&emsp;&emsp;Một lớp trong c++ có thể có nhiều hàm bạn, và chúng phải nằm bên ngoài class.

**Đặc điểm của hàm bạn :**
- Hàm không nằm trong phạm vi của lớp mà nó đã được khai báo là friend.
- Nó không thể được gọi bằng cách sử dụng đối tượng vì nó không nằm trong phạm vi của lớp đó.
- Nó có thể được gọi như một hàm bình thường mà không cần sử dụng đối tượng.
- Nó không thể truy cập trực tiếp vào tên thành viên và phải sử dụng tên đối tượng và dấu chấm toán tử với tên thành viên.
- Nó có thể được khai báo trong phần private hoặc public.

**2. Ưu điểm**

&emsp;&emsp;Kiểm soát các truy nhập ở cấp độ lớp. Nghĩa là không thể áp đặt hàm bạn cho một lớp, nếu như chưa khai báo hàm bạn trong lớp.

&emsp;&emsp;Giải quyết được vấn đề cần truy cập dữ liệu của lớp như trên.

**3. Cú pháp**

&emsp;&emsp;Đặt từ khoá friend phía trước, sau đó khai báo như một hàm thông thường

``` C++
class class_name {    
    friend data_type function_name(cac_doi_so);
};  
```

**4. Ví dụ về hàm bạn**
```C++
#include <iostream>
using namespace std;
class Box {
private:
    int length;
public:
    Box() : length(0) {}
    friend int printLength(Box); //ham friend
};
int printLength(Box b) {
    b.length += 10;
    return b.length;
}
int main() {
    Box b;
    cout << "Chieu dai cua box: " << printLength(b) << endl;
    return 0;
}
```

>***Note*** : <br>
>&emsp;&emsp;Các bạn nên dùng hàm bạn để nạp chồng toán tử vì:
>- Toán tử nạp chồng là hàm bình thường, không phải là hàm thành viên (phương thức) nên chúng truy cập dữ liệu thông qua hàm truy cập và hàm biến đổi nên nó rất kém hiệu quả (do mất phụ phí lời gọi)
>- Hàm bạn có thể truy cập trực tiếp dữ liệu từ biến private nên nó không mất phụ phí -> Cải thiện hiệu quả thực hiện, tránh gọi hàm thành viên truy cập || biến đổi.