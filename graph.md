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
### **I. Các khái niệm cơ bản**
 >- Một **đường đi P** độ dài k từ đỉnh $v_0$ tới đỉnh $v_k$ là tập đỉnh { $v_0$, $v_1$, $v_2$,..., $v_k$} sao cho ( $v_{i−1}$ , $v_i$ )∈E,∀i:1≤i≤k. Khi đó ta nói đường đi này bao gồm các đỉnh \{ $v_0$, $v_1$, $v_2$,..., $v_k$\} và các cạnh \{( $v_0$, $v_1$), ( $v_1$, $v_2$), ..., ( $v_{k - 1}$, $v_k$)\}; và $v_0$ đến được $v_k$ thông qua đường đi P. <br>
 >- Đường đi được gọi là **đường đi đơn giản (simple path)** nếu tất cả các đỉnh trên đường đi đó đều phân biệt. Đường đi được gọi là **đường đi đơn** nếu như không có cạnh nào trên đường đi đó đi qua hơn một lần. <br>
>- Một **đường đi con (subpath)** P' của P là một đoạn liên tục các đỉnh và cạnh dọc theo đường đi P.<br>
>- Đường đi P gọi là **chu trình (circuit)** nếu như $v_0$= $v_k$​. Chu trình P gọi là **chu trình đơn giản (simple circuit)* nếu như \{ $v_1$, $v_2$,..., $v_k$\} đôi một khác nhau. Chu trình mà trong đó không có cạnh nào đi qua hơn một lần được gọi là **chu trình đơn**. 

### **II. Tìm kiếm theo chiều sâu (DFS)**

1. Định nghĩa<br>
>&emsp;&emsp;DFS (Depth-First Search) là tên gọi cho thuật toán tìm kiếm trong đồ thị dựa theo ưu tiên chiều sâu. Có nghĩa là, xuất phát từ một nút, ta bắt đầu duyệt đến tận cùng từng nhánh tỏa ra từ nút đó rồi mới chuyển sang nhánh tiếp theo, rồi nút tiếp theo, v.v. … <br>
&emsp;&emsp;Dễ hiểu hơn thì cách di chuyển trên đồ thị cũng giống như tư tưởng tham lam của con người :cứ đi sâu vào đến khi không còn đi được nữa rồi mới quay lại ngã rẽ gần nhất để thử rẽ đường khác.

![](https://kienthuc24h.com/wp-content/uploads/2017/07/Depth-First-Search.gif)

2. Ý tưởng <br>
>&emsp;&emsp;Tư tưởng thuật toán có thể trình bày như sau: Từ một đỉnh S ban đầu ta sẽ có các đỉnh kề là x, từ đỉnh x ta sẽ có các đỉnh kề là y, và nó cũng thuộc nhánh s-x-y… Chúng ta thăm các nhánh đó theo chiều sâu (thăm đến khi không còn đỉnh kề chưa duyệt)

3. Cài đặt có đệ quy + Sử dụng ma trận kề

        void DFS(int i){
            F[i] = 1; // Đánh dấu các đỉnh đã đi qua
            for(int j = 1;j <= n;j++){
                // Kiểm tra các đỉnh chưa đi qua
                // và có đường đi từ đỉnh i -> j hay không
                if(F[j] == 0 && a[i][j] == 1){
                    DFS(j); // Duyệt đỉnh j
                }
            }
        }

4. Cài đặt không có đệ quy + Sử dụng danh sách kề

        void DFS_Stack(int i){
            stack <int> st;
            st.push(i);
            F[i] = 1;
            while (!st.empty()){
                i = st.top();st.pop();
                for (int j = 0;j < a[i].size();j++){
                    if (F[a[i][j]] == 0){
                        F[a[i][j]] = 1;
                        st.push(a[i][j]);
                        st.push(i);
                        break;
                    }
                }
            }
        }

### **III. Tìm kiếm theo chiều rộng (BFS)**

1. Định nghĩa<br>
>&emsp;&emsp;Thuật toán tìm kiếm theo chiều rộng BFS là thuật toán tìm kiếm trong đồ thị bằng cách tìm kiếm dựa trên 2 thao tác chính là: cho trước một đỉnh của đồ thị và thêm các đỉnh kề với nó vào danh sách chờ duyệt. Phương pháp cài đặt này là “lập lịch” để duyệt các đỉnh theo thứ tự duyệt ưu tiên trên chiều rộng (đỉnh nào gần với đỉnh gốc sẽ được duyệt trước) <br>
&emsp;&emsp;Vì nguyên tắc trên (đỉnh nào gần gốc sẽ được duyệt trước) nên thuật toán tìm kiếm theo chiều rộng BFS thường được dùng để tìm đường đi ngắn nhất giữa các đỉnh.

![](https://upload.wikimedia.org/wikipedia/commons/thumb/6/6d/T%C3%ACm_ki%E1%BA%BFm_theo_chi%E1%BB%81u_r%E1%BB%99ng_BFS.gif/310px-T%C3%ACm_ki%E1%BA%BFm_theo_chi%E1%BB%81u_r%E1%BB%99ng_BFS.gif)

2. Ý tưởng <br>
>&emsp;&emsp;Thuật toán tìm kiếm theo chiều rộng (BFS) là bắt đầu từ một đỉnh bất kì u nào đó duyệt đến các đỉnh v kề nó được một tập các đỉnh, tiếp tục chọn 1 đỉnh trong tập các đỉnh vừa lấy được đem đỉnh đó đi tìm các đỉnh chưa xét và đưa vào hàng đợi.

3. Thuật toán Loang
>- Định nghĩa : 
>   - Thuật toán loang có tên gọi như vậy vì nguyên lý hoạt động của nó giống vết dầu loang. Từ một vết dầu nhỏ sẽ được loang ra xung quanh.
>   - Thuật toán loang trên ma trận cũng vậy, bạn sẽ duyệt một ô trên ma trận và sau đó duyệt các điểm xung quanh nó và dần loang ra để giải quyết bài toán.   

4. Cài đặt BFS sử dụng queue

        void BFS(int i){
            queue <int> q;
            q.push(i); // Đẩy đỉnh đầu tiên vào queue
            F[i] = 1; // Đánh dấu đỉnh đầu tiên đã đi qua
            while(!q.empty()){
                i = q.front();q.pop();// Lấy ra 1 đỉnh từ queue
                for(int j = 1;j <= n;j++){
                    // Tồn tại cạnh i -> j và đỉnh j chưa được đi qua
                    if(a[i][j] == 1 && F[j] == 0){
                        q.push(j); // Thêm đỉnh j vào queue
                        F[j] = 1; // Đánh dấu đỉnh j đã đi qua
                    }
                }
            }
        }

### **IV. Độ phức tạp tính toán của DFS và BFS**
>Tùy vào cách cài đặt đồ thị mà ta sẽ thu được các giải thuật với độ phức tạp khác nhau:
>- Nếu đồ thị biểu diễn bằng danh sách kề, cả hai giải thuật BFS/DFS đều có độ phức tạp là O(n + m) ~ O(n) Cách cài đặt này là tốt nhất.
>- Nếu đồ thị biểu diễn bằng ma trận kề, độ phức tạp tính toán sẽ là O(n^2)
>- Nếu đồ thị biểu diễn bằng danh sách cạnh, thao tác duyệt mọi đỉnh kề với đỉnh u sẽ buộc phải duyệt qua toàn bộ danh sách cạnh, dẫn đến độ phức tạp tính toán là O(n*m). Đây là cách cài đặt tệ nhất.

### **V. Các định nghĩa trong đồ thị vô  hướng**
1. Liên thông
>Đồ thị vô hướng được gọi là liên thông nếu luôn tìm thấy được đường đi giữa 2 đỉnh bất kỳ
2. Thành phần liên thông
>Một thành phần liên thông của một đồ thị vô hướng là:<br>
&emsp;&emsp;- Một đồ thị con trong đó giữa bất kì hai đỉnh nào đều có đường đi đến nhau <br>
&emsp;&emsp;- Không thể nhận thêm bất kì một đỉnh nào mà vẫn duy trì tính chất trên. <br>&emsp;
Một đồ thị liên thông có đúng một thành phần liên thông, chính là toàn bộ đồ thị.
3. Cạnh cầu
>&emsp;&emsp;Cầu là cạnh mà khi loại nó khỏi đồ thị thì số thành phần liên thông/ liên thông mạnh của đồ thị tăng lên.
4. Khớp (Đỉnh trụ)
>&emsp;&emsp;Khớp là đỉnh mà khi loại nó khỏi đồ thị thì số thành phần liên thông/liên thông mạnh của đồ thị tăng lên.

### **VI. Các định nghĩa trong đồ thị có  hướng**

1. Liên thông mạnh
>- Một đồ thị có hướng là liên thông mạnh nếu như có đường từ bất kì đỉnh nào tới bất kì đỉnh nào khác
>- Một thành phần liên thông mạnh của một đồ thị có hướng là một đồ thị con tối đại liên thông mạnh.
2. Liên thông yếu
>- Đồ thị có hướng gọi là liên thông yếu nếu có đường đi giữa 2 đỉnh bất kỳ của đồ thị vô hướng tương ứng với đồ thị đã cho. Tức là hủy bỏ các hướng của các cạnh trong đồ thị.

### **VII. Code đếm thành phần liên thông**

Sử dụng DFS (hoặc BFS) :

Hàm DFS vẫn được code như bình thường không cần sửa đổi gì thêm

    void DFS(int i){
        F[i] = 1;
        for(int j = 1;j <= n;j++){
            if(F[j] == 0 && a[i][j] == 1){
                DFS(j); 
            }
        }
    }

Quan trọng là ở trong hàm main chúng ta cần thêm 1 bước xử lý :

    int main(){
        cin >> n >> k;
        F.assign(n + 1,0);
        a.assign(n + 1,vector <int> (n + 1,0));
        for(int i = 1;i <= k;i++){
            cin >> x >> y;
            a[x][y] = a[y][x] = 1;
        }
        int ans = 0; // Biến để đếm số vùng liên thông
        for(int i = 1;i <= n;i++){
            // Bắt đầu duyệt tại đỉnh của vùng liên thông chưa xét
            if(F[i] == 0){ 
                ans++;
                DFS(i);
            }
        }
        cout << ans;
    }