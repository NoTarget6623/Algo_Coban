# **GRAPH**

*GRAPH hay còn gọi là cấu trúc dữ liệu đồ thị*

![](https://tek4.vn/public_files/2dd17e0f-e455-44ca-b209-425b3ffb82d7)

## **A. Các khái niệm cơ bản của đồ thị**

### **I. Định nghĩa cơ bản của đồ thị ?**

>#### 1. Đồ thị là gì ?
>>&emsp;&emsp;Cấu trúc dữ liệu đồ thị là một tập hợp các nút có dữ liệu và được liên kết với các nút khác. <br>
>>&emsp;&emsp;Chính xác hơn, đồ thị là một cấu trúc dữ liệu G = (V, E) bao gồm:
>>- Tập hợp các đỉnh V.
>>- Tập hợp các cạnh E, được biểu diễn dưới dạng các cặp đỉnh có thứ tự (u, v).
>#### 2. Đơn đồ thị là gì ? 
>>&emsp;&emsp;Đơn đồ thị là đồ thị mà không có khuyên và không có cạnh song song.
>#### 3. Đa đồ thị là gì ? 
>>&emsp;&emsp;Đa đồ thị là đồ thị mà không thỏa mãn đơn đồ thị.
>#### 4. Đồ thị vô hướng là gì ? 
>>&emsp;&emsp;Đồ thị vô hướng  G là một cặp không có thứ tự (unordered pair) G:=(V, E), trong đó :
>>- V tập các đỉnh hoặc nút,
>>- E tập các cặp không thứ tự chứa các đỉnh phân biệt, được gọi là cạnh. Hai đỉnh thuộc một cạnh được gọi là các đỉnh đầu cuối của cạnh đó.

&#10033;Cách hiểu đơn giản: 
- Xem cạnh của đồ thị như con đường thì ở đồ thị vô hướng thì cạnh được xem như là đường hai chiều. 
- Tức là từ A đi đến được B thì từ B cũng sẽ đi đến được A 

>#### 5. Đồ thị có hướng là gì ?
>>&emsp;&emsp;Đồ thị có hướng G là một cặp có thứ tự G:=(V, A), trong đó :  
>>- V tập các đỉnh hoặc nút,
>>- A tập các cặp có thứ tự chứa các đỉnh, được gọi là các cạnh có hướng hoặc cung. Một cạnh e = (x, y) được coi là có hướng từ x tới y; x được gọi là điểm đầu/gốc và y được gọi là điểm cuối/ngọn của cạnh.

&#10033; Cách hiểu đơn giản: 
- Xem cạnh của đồ thị như con đường thì ở đồ thị vô hướng thì cạnh được xem như là đường một chiều. 
- Tức là từ A đi đến được B nhưng chưa chắc từ B đã đi được đến A ( đi được hay không còn phải tùy thuộc vào dữ liệu nhập vào )

### **II. Các khái niệm**
>1. Cạnh liên thuộc
>> &emsp;&emsp;Với mỗi cạnh e =(u,v) ϵ E thì ra nói đỉnh u và đỉnh v kề nhau , và e là cạnh liên
thuộc giữa 2 đỉnh u và v
>2. Khuyên
>>&emsp;&emsp;Một khuyên (loop) là một cạnh (vô hướng hoặc có hướng) nối từ một đỉnh về chính nó. Còn một cạnh nối hai đỉnh phân biệt được gọi là một liên kết (link).
>3. Đỉnh kề
>> &emsp;&emsp;Một đỉnh được cho là kề với một đỉnh khác nếu có một cạnh nối giữa chúng.
>4. Bậc
>> Bậc của đỉnh v ϵ V < KH : deg(v) > được tính bằng số cạnh liên thuộc với đỉnh v
trong đồ thị. 

## **B.Biểu diễn đồ thị trên máy tính**

### **I.Ma trận kề**

> 1. Định nghĩa
>>&emsp;&emsp;Phương pháp sử dụng ma trận liền kề là phương pháp liệt kê các nút và mối liên hệ giữa
chúng thông qua một ma trận A kích thước N x N (với N là số nút của đồ thị).
> 2. Cách cài đặt
>> &emsp; Đầu tiên tạo 1 ma trận A kính thước N x N ( với N là số nút của đồ thị)
>> - Đồ thị không có trọng số:
>>   - A[i][j] = 1 khi đồ thị có đường đi từ đỉnh i đến đỉnh j.
>>   - A[i][j] = 0 khi đồ thị không có đường giữa 2 đỉnh.
>> - Đồ thị có trọng số:
>>   - A[i][j] = c khi đồ thị có đường đi từ đỉnh i đến đỉnh j (c chính là trọng số của cạnh đó).
>>   - A[i][j] = 0 khi đồ thị không có đường giữa 2 đỉnh.
> 3. Ưu, nhược điểm.
>> - Ưu điểm :
>>   - Dễ cài đặt.
>>   - Dễ nhận biết các đỉnh nào kề nhau.
>>   - Biết được bậc của từng đỉnh nếu đó là đồ thị đơn.
>> - Nhược điểm :
>>   - Dễ dàng nhận thấy vì sử dụng mảng 2 chiều nên kích thước dữ liệu chúng ta tốn n^2 và độ phức tạp của dữ liệu này cũng là O(n^2).

### **II.Danh sách kề**

> 1. Định nghĩa
>>&emsp;&emsp;Tổ chức dữ liệu kiểu danh sách kề là bạn sẽ lưu các đỉnh kề của một đỉnh vào các đoạn trong mảng để lưu trữ. Nếu có N đỉnh thì sẽ có N đoạn để lưu. Và chúng ta cần lưu lại chỉ số để quản lí phạm vi các đỉnh kề của đỉnh mà đoạn đó quản lí.
> 2. Cách cài đặt
>> &emsp;Đầu tiên tạo ra 1 vector A chứa N vector rỗng. Với vector thứ i sẽ chứa các đỉnh kề với đỉnh i.
>> - Với mỗi cạnh e =(u,v) ϵ E thì A[u].push_back(v); (đỉnh u có đỉnh kề là v)
> 3. Ưu, nhược điểm.
>> - Ưu điểm :
>>   - Chi phí duyệt và lưu trữ khá tối ưu
>> - Nhược điểm :
>>   - Cài đặt bài toán bằng danh sách kề tương đối dài hơn so với ma trận kề và danh sách cạnh.

### **III.Danh sách cạnh**

> 1. Định nghĩa
>>&emsp;&emsp;Danh sách cạnh trong lý thuyết đồ thị được lưu trữ vào mảng một chiều, mỗi phần tử của mảng sẽ thể hiện thông tin của 2 đỉnh kề nhau
> 2. Cách cài đặt
>>- C1 : Bạn có thể tạo cho riêng mình một struct dữ liệu của một cạnh gồm 2 thông tin, và khai báo một mảng thuộc dữ liệu đó. 
>>- C2 :Tạo 2 mảng riêng để lưu các cạnh
> 3. Ưu, nhược điểm.
>> - Ưu điểm :
>>   - Giảm được rất nhiều về chi phí và thời gian duyệt nếu đồ thị ít cạnh
>> - Nhược điểm :
>>   - Nhưng khi ta muốn duyệt tất cả cạnh kề của một đỉnh nào đó, lúc này chẳng có cách nào ngoài việc duyệt hết danh sách cạnh đó và lọc ra để xử lí, đặc biệt là khi đồ thị có nhiều cạnh thì thời gian duyệt sẽ tăng lên rất nhiều. 

## **C. Các thuật toán tìm kiếm trên đồ thị**
>### **I. Các khái niệm cơ bản**
 >- Một **đường đi P** độ dài k từ đỉnh $v_0$ tới đỉnh $v_k$ là tập đỉnh { $v_0$, $v_1$, $v_2$,..., $v_k$} sao cho ( $v_{i−1}$ , $v_i$ )∈E,∀i:1≤i≤k. Khi đó ta nói đường đi này bao gồm các đỉnh \{ $v_0$, $v_1$, $v_2$,..., $v_k$\} và các cạnh \{( $v_0$, $v_1$), ( $v_1$, $v_2$), ..., ( $v_{k - 1}$, $v_k$)\}; và $v_0$ đến được $v_k$ thông qua đường đi P. <br>
 >- Đường đi được gọi là **đường đi đơn giản (simple path)** nếu tất cả các đỉnh trên đường đi đó đều phân biệt. Đường đi được gọi là **đường đi đơn** nếu như không có cạnh nào trên đường đi đó đi qua hơn một lần. <br>
>- Một **đường đi con (subpath)** P' của P là một đoạn liên tục các đỉnh và cạnh dọc theo đường đi P.<br>
>- Đường đi P gọi là **chu trình (circuit)** nếu như $v_0$= $v_k$​. Chu trình P gọi là **chu trình đơn giản (simple circuit)* nếu như \{ $v_1$, $v_2$,..., $v_k$\} đôi một khác nhau. Chu trình mà trong đó không có cạnh nào đi qua hơn một lần được gọi là **chu trình đơn**. 

### **II. Tìm kiếm theo chiều sâu (DFS)**




