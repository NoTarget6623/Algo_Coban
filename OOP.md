# Lập trình hướng đối tượng (Object Oriented Programming – OOP)

## I. Lập trình hướng đối tượng là gì ?

>&emsp;&emsp;Lập trình hướng đối tượng được hiểu đơn giản là một phương pháp để giải quyết bài toán lập trình mà khi áp dụng code sẽ trở nên dễ phát triển và dễ bảo trì hơn. Đây là một phương pháp tiên tiến, phù hợp để phát triển hầu hết các ứng dụng hiện nay. <br>
>&emsp;&emsp; Phương pháp này sẽ giải quyết bài toán bằng cách chia chương trình thành các đối tượng, với mỗi đối tượng sẽ có các thuộc tính (dữ liệu) và hành vi riêng (phương thức).

Để có cái nhìn trực quan về lập trình hướng đối tượng, bạn hãy xem chương trình sau:
``` C++
#include <iostream>

using namespace std;

class Student{
public :
    string name;
    int age;
    void display(){
        cout << "Name : " << name << "\n";
        cout << "Age : " << age << "\n";
    }
};

int main(){
    Student s;
    s.name = "Han"
    s.age = "19"
    s.display();
    return 0;
}
```
Và sau đây, chúng ta sẽ tìm hiểu đến 1 số khái niệm cơ bản trong OOP ...
## II. Một số khái niệm cơ bản trong OOP
1. Lớp (class) là nơi định nghĩa thông tin về các đối tượng, bạn cũng có thể hiểu lớp là một kiểu dữ liệu mà biến của kiểu dữ liệu này được coi như một đối tượng. Như trong ví dụ trên thì ```Student``` là lớp dùng để mô tả thông tin về các đối tượng học sinh.
    - Ví dụ về lớp : Học sinh, Giáo viên, Xe máy ,...

2. Đối tượng (object) là một thể hiện của lớp, bạn có thể hiểu đối tượng là một biến. Như trong ví dụ trên thì biến ```s``` là một đối tượng đại diện cho thông tin của một học sinh.

3. Thuộc tính (attribute): là các đặc điểm của đối tượng, như trong ví dụ trên thì ```name``` và ```age``` là hai thuộc tính của đối tượng học sinh.
    - Ví dụ về thuộc tính: tên, tuổi, chiều cao, cân nặng, năm sinh, ...

4. Phương thức (method): là hành vi (hành động) của đối tượng, như ví dụ trên thì ```display()``` là một phương thức dùng để giới thiệu bản thân của học sinh.
    - Ví dụ về phương thức: giới thiệu bản thân, học bài, chạy, ...

> Sự khác nhau giữa đối tượng và lớp : <br> <br>
>**Lớp** là một khuôn mẫu còn **đối tượng** là một thể hiện cụ thể dựa trên khuôn mẫu đó. <br> <br>
>Để dễ hiểu hơn mình sẽ lấy một ví dụ thực tế:
>- Nói về con mèo thì lớp chính là loài mèo. Loài mèo có:
>   - Các thông tin, đặc điểm như 4 chân, 2 mắt, có đuôi, có chiều cao, có cân nặng, màu lông, . . .
>   - Các hành động như: kêu meo meo, đi, ăn, ngủ, . . .
>- Như vậy mọi động vật thuộc loài mèo sẽ có những đặc điểm như trên.
>- Đối tượng chính là một con mèo cụ thể nào đó như con mèo con đang nằm dưới chân mình. <br> <br>
>Một ví dụ khác. Ví dụ này mình sẽ dùng 1 hình ảnh để minh hoạ:
>![](https://f.howkteam.vn/Upload/cke/images/2_IMAGE%20TUTORIAL/1_C%23_AutoC%23/4_C%23%20H%C6%B0%E1%BB%9Bng%20%C4%91%E1%BB%91i%20t%C6%B0%E1%BB%A3ng%20(OOP)/B01_T%E1%BB%95ng%20quan%20v%E1%BB%81%20l%E1%BA%ADp%20tr%C3%ACnh%20OOP/1_T%E1%BB%95ng%20quan%20v%E1%BB%81%20l%E1%BA%ADp%20tr%C3%ACnh%20h%C6%B0%E1%BB%9Bng%20%C4%91%E1%BB%91i%20t%C6%B0%E1%BB%A3ng_Howkteam_com.png)
>- Bạn thấy đấy khi nói đến xe otô thì :
>   - Lớp chính khuôn mẫu của cái xe với các đặc trưng như có 4 bánh và có thiết kế tương tự như hình vẽ. 
>   - Đối tượng chính là các chiếc xe otô cụ thể như Toyota camry, Honda city, Ford ranger

5. **Con trỏ this** là một từ khóa đề cập đến thể hiện hiện tại của lớp, là một tham số ẩn với tất cả hàm thành viên. 
   - Vì thế, bên trong một hàm thành viên, con trỏ this có thể tham chiếu tới đối tượng đang gọi.
   - Các hàm friend không có con trỏ this, bởi vì friend không phải là các thành viên của một lớp. Chỉ có các hàm thành viên trong C++ là có con trỏ this.
   - Con trỏ this có thể sử dụng trong 3 cách như sau :
      - Nó có thể được sử dụng để truyền đối tượng hiện tại làm tham số cho phương thức khác.
      - Nó có thể được sử dụng để tham chiếu đến thể hiện hiện tại của lớp
      - Nó có thể được sử dụng để khai báo các chỉ mục.

***Note*** : Chúng ta nên đặt tham số của hàm khởi tạo trùng tên với tên của dữ liệu thành viên và sử dụng con trỏ this trong hàm khởi tạo để quản lý chương trình chặt chẽ hơn thay vì đặt tên tham số theo các chữ cái như a, b, c... thì tên đó không có ý nghĩa gì hết.

## III. 4 tính chất của OOP

### 1. Tính đóng gói (Encapsulation)

![](https://d1iv5z3ivlqga1.cloudfront.net/wp-content/uploads/2021/01/30163919/tinh-dong-goi-trong-OOP-2.jpg)

&emsp;&emsp;Tính đóng gói là kỹ thuật giúp bạn che giấu được những thông tin bên trong đối tượng. Mục đích chính của tính đóng gói là giúp hạn chế các lỗi khi phát triển chương trình.

&emsp;&emsp;Với cách làm này thông tin của đối tượng đã được ẩn đi, bạn chỉ có thể giao tiếp với đối tượng thông qua các phương thức.

>&emsp;&emsp;Điều này cũng giống với thực tế. Ví dụ khi bạn gặp một người lạ thì bạn không thể biết được các thuộc tính của người này (số điện thoại, sở thích, ...), kể cả khi bạn hỏi thì người này cũng chưa chắc đã trả lời cho bạn đúng sự thật (giống như phương thức không trả về giá trị thực thuộc tính mà trả về một giá trị khác).

&emsp;&emsp;Các lợi ích chính mà tính đóng gói đem lại:
  - Hạn chế được các truy xuất không hợp lệ tới các thuộc tính của đối tượng.
  - Giúp cho trạng thái của các đối tượng luôn đúng.
  - Giúp ẩn đi những thông tin không cần thiết về đối tượng.
  - Cho phép bạn thay đổi cấu trúc bên trong lớp mà không ảnh hưởng tới lớp khác.

***Note*** : *Hãy luôn nhớ rằng mục đích chính của tính đóng gói là để hạn chế các lỗi khi phát triển chương trình chứ không phải là bảo mật hay che giấu thông tin.*

### 2. Tính kế thừa (Inheritance)

&emsp;&emsp;Kế thừa trong lập trình hướng đối tượng chính là thừa hưởng lại những thuộc tính và phương thức của một lớp. Có nghĩa là nếu lớp A kế thừa lớp B thì lớp A sẽ có những thuộc tính và phương thức của lớp B. Do đó, từ sơ đồ trên bạn có thể tách các thuộc tính và phương thức trùng nhau ra một lớp mới tên là ```Animal``` và cho lớp ```Cow``` và ```Lion``` kế thừa lớp này giống như sau :

![](https://i.pinimg.com/originals/39/d8/26/39d82660f70924c246630cd188bd2bdd.jpg)

&emsp;&emsp;Có thể thấy với sơ đồ này lớp ```Cow``` và ```Lion```  sẽ thừa hưởng lại các thuộc tính chung từ lớp ```Animal```  và code sẽ không còn bị trùng lặp. Ở trong sơ đồ trên thì mũi tên với hình tam giác rỗng ruột chính là ký hiệu thể hiện quan hệ kế thừa.

&emsp;&emsp;Lớp được thừa hưởng những thuộc tính và phương thức từ lớp khác được gọi là dẫn xuất (Derived Class) hay lớp Con (Subclass) và lớp bị lớp khác kế thừa được gọi là lớp cơ sở (Base Class) hoặc lớp cha (Parent Class). Như ở ví dụ trên thì lớp ```Animal``` là lớp cha (lớp cơ sở) và ```Cow```, ```Lion``` là lớp con (lớp dẫn xuất).

### 3. Tính đa hình (Polymorphism)

*Sẽ bổ sung vào bài học sau*

### 4. Tính trừu tượng(Abstraction)

*Sẽ bổ sung vào bài học sau*

## IV. Nhãn phạm vi (Access Modifiers)

&emsp;&emsp;Nhãn phạm vi là cách mà người lập trình quy định về quyền được truy xuất đến các thành phần của lớp. Trong C++ có 3 loại nhãn phạm vi chính là: private, protected, public.

| Phạm vi | Ý nghĩa |
| --- | --- |
| public | Không hạn chế. Thành phần có thuộc tính này có thể được truy cập ở bất kì vị trí nào |
| private | Thành phần có thuộc tính này sẽ chỉ được truy cập từ bên trong lớp. Bên ngoài lớp hay trong lớp dẫn xuất sẽ không thể truy cập được. |
| protected | Thành phần có thuộc tính này sẽ có thể truy cập ở trong nội bộ lớp và trong lớp dẫn xuất. |

***Note*** : *Trong lớp (class), nếu ta không khai báo nhãn phạm vi thì chương trình sẽ tự động mặc định đó là private.*

## V. Hàm khởi tạo (Constructor), Hàm hủy (Destructor)
1. Hàm khởi tạo (Constructor)

&emsp; Hàm khởi tạo (constructor) là một phương thức đặc biệt được gọi tự động tại thời điểm đối tượng được tạo. Mục đích của hàm khởi tạo là để khởi tạo các thành viên dữ liệu của đối tượng.

&emsp;Một hàm khởi tạo sẽ khác những hàm thông thường ở những điểm sau:
 - Có tên trùng với tên lớp
 - Không có kiểu dữ liệu trả về ( kể cả kiểu ```void```)
 - Tự động được gọi khi một đối tượng thuộc lớp được tạo ra
 - Nếu chúng ta không khai báo một hàm khởi tạo, trình biên dịch C++ sẽ tự động tạo một hàm khởi tạo mặc định cho chúng ta (sẽ là hàm ​​không có tham số nào và có phần thân trống).

&emsp;Hàm khởi tạo về cơ bản sẽ được chia làm 3 loại:

1.1. Hàm khởi tạo không tham số (Cũng có thể gọi là hàm tạo mặc định – Default Constructor)
``` C++
#include <iostream>  
using namespace std;  
class Mayvitinh {  
   public:  
        Mayvitinh() {    
            cout << "Ham khoi tao tu dong duoc goi." << endl;    
        }    
};  
 
int main() {  
    Mayvitinh mayAsus;     //khởi tạo đối tượng mayAsus
    Mayvitinh mayAcer;     //khởi tạo đối tượng mayAcer
    return 0;  
}
```
Khi chạy chương trình ta sẽ có kết quả như sau:
![](https://codelearn.io/Media/Default/Users/DatTrann/OOP/104591786_720247632119488_4873489939423252606_n.png)

1.2. Hàm khởi tạo có tham số (Parameterized Constructor)

&emsp;Với loại hàm tạo này ta có thể truyền đối số cho chúng. Thông thường, các đối số này giúp khởi tạo một đối tượng khi nó được tạo.

&emsp;Để khai báo một hàm khởi tạo có tham số chỉ cần thêm các tham số vào nó giống như cách bạn thêm tham số bất kỳ hàm nào khác. Khi bạn xác định phần thân của hàm tạo, hãy sử dụng các tham số để khởi tạo đối tượng.

&emsp;Chúng ta cùng xem xét một ví dụ đơn giản về hàm khởi tạo có tham số trong C++ như sau:
``` C++
#include <iostream>  
using namespace std;  
class Mayvitinh { 
    int chieurong;   
    int chieudai; 
    string tenmay;
    public:  
       Mayvitinh(int cd) {    
            chieudai = cd;
       }
       Mayvitinh(int cd, string tm) {    
            chieudai = cd;    
            tenmay = tm;
            chieurong = 20;
       }
       Mayvitinh(int cd, string tm, int cr) {    
            chieudai = cd;    
            tenmay = tm;    
            chieurong = cr; 
       }    
       void HienThi() {    
            cout << tenmay << endl;
            cout << "   Chieu dai: " << chieudai << endl;
            cout << "   Chieu rong: " << chieurong << endl;
       }    
};  
  
int main() {  
    Mayvitinh mayAsus =  Mayvitinh(50, "may Asus", 25);    
    Mayvitinh mayAcer =  Mayvitinh(45, "mau Acer");
    Mayvitinh mayMac =  Mayvitinh(30, "may Mac");
    mayAsus.HienThi();    
    mayAcer.HienThi();
    mayMac.HienThi();
    return 0;  
}
```
Sau khi chạy chương trình ta sẽ có kết quả:

![](https://codelearn.io/Media/Default/Users/DatTrann/OOP/Annotation%202020-06-18%20214505.png)

***Note*** :
- Khi một đối tượng được khai báo trong hàm khởi tạo có tham số, các giá trị ban đầu phải được truyền dưới dạng đối số cho hàm tạo.
- Các hàm khởi tạo có thể được gọi một cách rõ ràng hoặc ngầm định.
``` C++
Mayvitinh mayAcer = Mayvitinh("may Acer", 25); // Đây là cách rõ ràng
Mayvitinh mayAcer("May Acer", 25);             // Đây là cách ngầm định
```
Công dụng của hàm khởi tạo có tham số :
- Khởi tạo các thành phần dữ liệu khác nhau của các đối tượng khác nhau với các giá trị khác nhau khi chúng được tạo.
- Nạp chồng các hàm khởi tạo.

1.3. Hàm khởi tạo sao chép (Copy Constructor)

&emsp;Hàm khởi tạo sao chép (Copy Constructor) là một hàm xây dựng được sử dụng để khai báo và khởi tạo một đối tượng từ một đối tượng khác.

&emsp;Cú pháp của hàm khởi tạo sao chép (Copy Constructor) như sau:
``` C++
ClassName(const ClassName &old_obj){
    // Code
}
```
Trong đó ```Classname``` là tên của lớp, ```old_obj``` là đối tượng cũ sẽ lấy làm gốc để sao chép sang đối tượng mới.

Chúng ta lấy ví dụ đơn giản về hàm khởi tạo sao chép nhé:

``` C++
#include <iostream>  
using namespace std;  
class Mayvitinh { 
    int chieurong;   
    int chieudai; 
    string tenmay;
    public:  
       Mayvitinh(int cd, string tm, int cr) {    
            chieudai = cd;    
            tenmay = tm;    
            chieurong = cr; 
       }    
       Mayvitinh(Mayvitinh &m) {
           tenmay = m.tenmay;
           chieudai = m.chieudai;
           chieurong = m.chieurong;
       }
       void HienThi() {    
            cout << tenmay << endl;
            cout << "   Chieu dai: " << chieudai << endl;
            cout << "   Chieu rong: " << chieurong << endl;
       }    
};  
  
int main() {  
    Mayvitinh mayAsus(50, "may Asus", 25);    
    Mayvitinh mayAcer(mayAsus); // hàm sao chép
    mayAsus.HienThi();    
    mayAcer.HienThi();
    return 0;  
}
```
Và kết quả sau khi thực thi chương trình trên như sau:

![](https://codelearn.io/Media/Default/Users/DatTrann/OOP/Annotation%202020-06-19%20002008-1.png)

Hàm khởi tạo sao chép (Copy Constructor) được gọi trong các trường hợp sau đây:
- Khi một đối tượng của lớp được trả về bằng một giá trị.
- Khi một đối tượng của lớp được truyền đối số dưới dạng tham số của một hàm.
- Khi một đối tượng được tạo ra dựa trên một đối tượng khác cùng lớp.
- Khi trình biên dịch tạo một đối tượng tạm thời.

***Note:***
*Bất cứ khi nào chúng ta định nghĩa một hoặc nhiều hàm tạo có tham số cho một lớp, hàm tạo mặc định (không có tham số) cũng phải được xác định rõ ràng vì trình biên dịch sẽ không cung cấp hàm tạo mặc định trong trường hợp này. Điều đó tuy không cần thiết nhưng nó được coi là cách tốt nhất để luôn xác định một hàm tạo mặc định.*

2. Hàm hủy (Desconstructor)

&emsp;Hàm hủy (Destructor) ngược lại với hàm khởi tạo, trong khi hàm khởi tạo dùng để khởi tạo giá trị cho đối tượng thì **hàm hủy** dùng để hủy đối tượng.

&emsp;Chỉ có duy nhất một **hàm hủy** trong một lớp. **Hàm hủy** tự động được gọi. Nếu như chúng ta không định nghĩa **hàm hủy** thì mặc định trình biên dịch sẽ tự tạo ra một **hàm hủy** mặc nhiên.

&emsp;Cũng giống như hàm xây dựng, **hàm hủy** được định nghĩa có cùng tên với tên lớp, khôn có bất cứ kiểu gì trả về kể cẳ kiểu void, tuy nhiên phải có dấu ~ trước tên của **hàm hủy**.

Cú pháp của **hàm hủy (Destructor)** như sau:
``` C++
~Classname() { };
```
Chúng ta cùng xem xét một ví dụ đơn giản nhất về hàm hủy như sau:
``` C++
#include <iostream>  
using namespace std;  
class Mayvitinh  {  
   public:  
        Mayvitinh() {    
            cout << "Ham khoi tao duoc goi" << endl;    
        }    
        ~Mayvitinh() {    
            cout << "Ham huy duoc goi" << endl;    
        }  
};  
int main() {  
    Mayvitinh mayAsus;   
    Mayvitinh mayAcer; 
    return 0;  
}
```
Và sau khi chạy chương trình sẽ có kết quả như sau: 

![](https://codelearn.io/Media/Default/Users/DatTrann/OOP/Annotation%202020-06-19%20102854.png)

Như trong code trên, ta có thể thấy hàm hủy (Destructor) sẽ được gọi tự động khi đối tượng đi ra khỏi phạm vi:
- Kết thúc hàm
- Kết thúc chương trình
- Kết thúc một block
- Toán tử delete được gọi

Và có hai hạn chế khi sử dụng hàm hủy đó là:
- Chúng ta không thể lấy địa chỉ của nó
- Lớp con không có thừa kế hàm hủy từ lớp cha của nó

&emsp;Với C++ thì nếu ta không khai báo một hàm hủy, trình biên dịch cũng sẽ tự định nghĩa một hàm hủy. Thông thường thì hàm hủy này hoạt động khá tốt, nhưng khi bài toán có sử dụng con trỏ, hoặc cấp phát bộ nhớ động thì ban nên khai báo một hàm huỷ riêng để tránh rỏ rỉ bộ nhớ.

## VI. Setter và Getter

&emsp;Setter và Getter là 2 phương thức sử dụng để cập nhật hoặc lấy ra giá trị thuộc tính, đặc biệt dành cho các thuộc tính ở phạm vi private.

&emsp;Việc sử dụng Setter và Getter cần thiết trong việc kiểm soát những thuộc tính quan trọng mà ta thường được sử dụng và yêu cầu giá trị chính xác. Ví dụ thuộc tính age lưu tuổi con người, thực tế thì phạm vi tuổi là từ 0 đến 100, thì ta không thể cho chương trình lưu giá trị age âm hoặc quá 100 được.

Cú pháp:

**Setter**
``` C++
void set<tên thuộc tính> (<tham số giá trị mới>) {
      this-><tên thuộc tính> = <tham số giá trị mới>;
}

```
**Getter**
``` C++
<kiểu dữ liệu thuộc tính> get<tên thuộc tính> () {
      return <tên thuộc tính>;
}

```
VD : 
``` C++
class Person{
private:
    string name;
public:
    void setName (string name) {
        this->name = name;
    }
    string getName(){
        return name;
    }
}
```
***Note*** :
- Khi đã dùng setter và getter thì thuộc tính nên để private
- Hãy cẩn thận với kiểu dữ liệu tham chiếu

## VII. Từ khóa static

&emsp;&Đôi lúc người lập trình mong muốn 1 thuộc tính nào đó được dùng chung cho mọi đối tượng (chỉ được cấp phát 1 vùng nhớ duy nhất). Từ đó từ **thành viên tĩnh** (static) ra đời.

&emsp;Đặc điểm của **thành viên tĩnh**:
- Được khởi tạo 1 lần duy nhất ngay khi biên dịch chương trình.
- Có thể dùng chung cho mọi đối tượng.
- Được gọi thông qua tên lớp.
- Được huỷ khi kết thúc chương trình.

&emsp;Có 2 loại **thành viên tĩnh** cơ bản:
- Biến tĩnh (static variable).
- Phương thức tĩnh (static method).

1.Biến tĩnh

Cú pháp:
``` C++
static <kiểu dữ liệu> <tên biến> = <giá trị khởi tạo>;
```
Bạn có thể hiểu biến tĩnh là:

- Một biến dùng chung cho mọi đối tượng thuộc lớp.
- Nó được khởi tạo vùng nhớ 1 lần duy nhất ngay khi chương trình được nạp vào bộ nhớ để thực thi và huỷ khi kết thúc chương trình.

2.Phương thức tĩnh
``` C++
static <kiểu trả về> <tên phương thức>{
    // nội dung phương thức
}
```
Hàm tĩnh được sử dụng với 2 mục đích chính:

- Hàm tĩnh là 1 hàm dùng chung của lớp. Được gọi thông qua tên lớp và không cần khởi tạo bất kỳ đối tượng nào, từ đó tránh việc lãng phí bộ nhớ.
- Hỗ trợ trong việc viết các hàm tiện ích để sử dụng lại.

## VII. Kỹ thuật chia tách file (file.h và file.cpp)

1. Tại sao phải tách file?

&emsp;&emsp;Khi lưu toàn bộ code vào một file main sẽ gây ra rất nhiều vấn đề bất lợi, có thể kể đến như: Chương trình trở nên quá dài; khó quản lý, sử dụng. Giả sử ta khi muốn tìm một hàm nào đấy để chỉnh sửa thì sẽ làm tiêu tốn thời gian vì có quá nhiều hàm và không biết nó ở đâu.

&emsp;&emsp;Việc tách code C++ cũng như tách code ở các ngôn ngữ khác sẽ giúp:
- Dễ quản lí, bảo trì source code.
- Giúp code dễ đọc, dễ hiểu và dễ sử dụng.
- Tái sử dụng các hàm đã viết.

2. Tách code C++ như thế nào?

**B1** : Tạo ```header.h``` để khai báo các thư viện dùng chung

**B2** : Tạo ```file.h``` để khai báo hàm và ```file.cpp``` để viết hàm

***Note*** : 
- Nên đặt trùng tên của file.h và file.cpp cho dễ quản lý
- Mỗi ```file.h``` đều phải có dòng code “#pragma once” ở đầu.

**B3** : Tạo ```main.cpp``` để để chạy code
## VIII. Quy tắc đặt tên trong OOP
- Dùng tiếng Anh

&emsp;&emsp;&emsp;&emsp;Luôn sử dụng tiếng Anh để đặt tên hàm và biến.

- Quy ước đặt tên

&emsp;&emsp;&emsp;&emsp;Quán nhất trong việc đặt tên cùng với team

- Nguyên tắc S-I-D
  - Short (ngắn gọn): tên không được dài, không phải mất thời gian để gõ và nhớ.
  - Intuitive (tự nhiên): tên khi đọc lên phải cho cảm giác xuôi tai, gần gũi với văn nói.
  - Descriptive (súc tích): tên phải mô tả được ý nghĩa, tác dụng của nó, bằng cách hiệu quả nhất.

