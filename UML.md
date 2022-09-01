# UML Class Diagram

## I. UML Class Diagram là gì

UML Class Diagram là một dạng ký hiệu đồ họa để xây dựng và trực quan hóa các hệ thống hướng đối tượng :
- Lớp ( Class )
- Thuộc tính ( Attribute )
- Phương thức ( Method )
- Mối quan hệ (Relationship)

Tác dụng :
- Biểu đồ hay dùng nhất trong UML và gần gũi nhất với các lập trình viên.

- Giúp các lập trình viên trao đổi với nhau và hiểu rõ ý tưởng của nhau.

## II. Ký hiệu trong UML Class Diagram

![](https://cdn-images.visual-paradigm.com/guide/uml/uml-class-diagram-tutorial/02-class-notation.png)

#### **1. Tên lớp (Class name)**

- Tên của lớp sẽ nằm ở phân vùng đầu tiên

#### **2. Thuộc tính (Attribute)**

- Các thuộc tính sẽ nằm ở  phân vùng thứ hai.
- Kiểu dữ liệu của thuộc tính được hiển thị sau dấu hai chấm.
- Thuộc tính ánh xạ vào các biến thành viên (thành viên dữ liệu) trong code.

#### **3. Phương thức (Method)**

- Các phương thức sẽ năm ở phân vùng thứ 3, chúng là những phương thức mà lớp cung cấp
- Kiểu trả về của một phương thức được hiển thị sau dấu hai chấm ở cuối phương thức.
- Kiểu trả về của các tham số trong phương thức được hiển thị sau dấu hai chấm theo tên tham số. Các hoạt động ánh xạ vào các phương thức lớp trong mã

#### **4. Nhãn phạm vi**
![](https://cdn-images.visual-paradigm.com/guide/uml/uml-class-diagram-tutorial/04-class-attributes-with-different-visibility.png)

- (+) tương đương với nhãn public
- (-) tương đương với nhãn private
- (#) tương đương với nhãn protected
#### **5. Các mối quan hệ trong class diagram**

- Sử dụng để thể hiện mỗi quan hệ giữa đối tượng được tạo từ 1 class với các đối tượng được tạo từ class khác trong class diagram.

- 4 loại Relationship:
![](https://images.viblo.asia/c869cd68-1172-4a51-8257-81c732537bae.PNG)
  - Inheritance: 1 class kế thừa từ 1 class khác.
  - Association: 2 class có liên hệ với nhau nhưng không chỉ rõ mối liên hệ.
  - Composition: Đối tượng tạo từ class A mất thì đối tượng tạo từ class B sẽ mất.
  - Agreegation: Đối tượng tạo từ class A mất thì đối tượng tạo từ class B vẫn tồn tại độc lập.

#### **6. Multiplicity trong class diagram**

- Sử dụng để thể hiện quan hệ về số lượng giữa các đối tượng được tạo từ các class trong class diagram
  - 0...1: 0 hoặc 1
  - n : Bắt buộc có n
  - 0...* : 0 hoặc nhiều
  - 1...* : 1 hoặc nhiều
  - m...n: có tối thiểu là m và tối đa là n
