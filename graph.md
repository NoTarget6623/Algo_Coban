# **GRAPH**

*GRAPH hay còn gọi là cấu trúc dữ liệu đồ thị*

![](https://tek4.vn/public_files/2dd17e0f-e455-44ca-b209-425b3ffb82d7)

### **I. Các khái niệm cơ bản của đồ thị**

1. Đồ thị là gì ?
>&emsp;&emsp;Cấu trúc dữ liệu đồ thị là một tập hợp các nút có dữ liệu và được liên kết với các nút khác. <br>
>&emsp;&emsp;Chính xác hơn, đồ thị là một cấu trúc dữ liệu G = (V, E) bao gồm:
>- Tập hợp các đỉnh V.
>- Tập hợp các cạnh E, được biểu diễn dưới dạng các cặp đỉnh có thứ tự (u, v).

2. Đơn đồ thị là gì ? 
>&emsp;&emsp;Đơn đồ thị là đồ thị mà không có khuyên và không có cạnh song song.

3. Đa đồ thị là gì ? 
>&emsp;&emsp;Đa đồ thị là đồ thị mà không thỏa mãn đơn đồ thị.

4. Đồ thị vô hướng là gì ? 
>&emsp;&emsp;Đồ thị vô hướng  G là một cặp không có thứ tự (unordered pair) G:=(V, E), trong đó :
>- V tập các đỉnh hoặc nút,
>- E tập các cặp không thứ tự chứa các đỉnh phân biệt, được gọi là cạnh. Hai đỉnh thuộc một cạnh được gọi là các đỉnh đầu cuối của cạnh đó.

Cách hiểu đơn giản: 
- Xem cạnh của đồ thị như con đường thì ở đồ thị vô hướng thì cạnh được xem như là đường hai chiều. 
- Tức là từ A đi đến được B thì từ B cũng sẽ đi đến được A 

5. Đồ thị có hướng là gì ?
>&emsp;&emsp;Đồ thị có hướng G là một cặp có thứ tự G:=(V, A), trong đó :  
>- V tập các đỉnh hoặc nút,
>- A tập các cặp có thứ tự chứa các đỉnh, được gọi là các cạnh có hướng hoặc cung. Một cạnh e = (x, y) được coi là có hướng từ x tới y; x được gọi là điểm đầu/gốc và y được gọi là điểm cuối/ngọn của cạnh.

&emsp;Cách hiểu đơn giản: 
- Xem cạnh của đồ thị như con đường thì ở đồ thị vô hướng thì cạnh được xem như là đường một chiều. 
- Tức là từ A đi đến được B nhưng chưa chắc từ B đã đi được đến A ( đi được hay không còn phải tùy thuộc vào dữ liệu nhập vào )

