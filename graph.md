# **GRAPH**

*GRAPH hay còn gọi là cấu trúc dữ liệu đồ thị*

### **I. Cấu trúc dữ liệu đồ thị (GRAPH) là gì ?**

> Cấu trúc dữ liệu đồ thị là một tập hợp các nút có dữ liệu và được liên kết với các nút khác.

> Chính xác hơn, đồ thị là một cấu trúc dữ liệu (V, E) bao gồm:
>- Tập hợp các đỉnh V.
>- Tập hợp các cạnh E, được biểu diễn dưới dạng các cặp đỉnh có thứ tự (u, v).
### **II. Các khái niệm cơ bản trong GRAPH**

![](https://tek4.vn/public_files/2dd17e0f-e455-44ca-b209-425b3ffb82d7)


1. Đỉnh (Vertex)
> Mỗi nút của hình được biểu diễn như là một đỉnh
>- Ở trong đồ thị trên, mỗi hình tròn được xem như là 1 đỉnh
>- Các đỉnh của đồ thị trên là {0,1,2,3}

2. Cạnh (Edge)
> Cạnh biểu diễn một đường nối hai đỉnh
>- Các cạnh trong đồ thị trên là {(2-1),(2-0),(2-3),(1-0)}

3. Kề nhau
> Hai đỉnh là kề nhau nếu chúng được kết nối với nhau thông qua một cạnh.
>- Như trong đồ thị trên, đỉnh 3 kề đỉnh 2, đỉnh 0 kề đỉnh 1,...

4. Đường
> Đường biểu diễn một dãy các cạnh giữa hai đỉnh.
>- 123 sẽ là biểu diễn của 1 đường từ 1 -> 3

### **III. DFS**

![](https://kienthuc24h.com/wp-content/uploads/2017/07/Depth-First-Search.gif)
