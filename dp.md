# **QUY HOẠCH ĐỘNG**

## I. Quy hoạch động là gì ?

>&emsp; Quy hoạch động (Dynamic Programming) là kĩ thuật được được dùng khi có một công thức truy hồi và một (hoặc một vài) trạng thái bắt đầu. Một bài toán được tính bởi các bài toán nhỏ hơn đã tìm ra trước đó, một kĩ thuật giải quyết các bài toán khi có thể giải quyết bài toán đó bằng cách sử dụng lại các bài toán nhỏ hơn đã được giải quyết và lưu lại kết quả.<br>
>&emsp;Hiểu đơn giản : QUY HOẠCH ĐỘNG = GIẢI QUYẾT TRUY HỒI + GHI NHỚ KẾT QUẢ

- Để hiểu rõ hơn hãy xem ví dụ sau:

> Cho N đồng xu và giá tiền của mỗi đồng ( V<sub>0</sub>,V<sub>1</sub>,…,V<sub>N - 1</sub> ), và số S. Tìm số đồng xu nhỏ nhất để tổng giá trị của chúng bằng S (số lượng đồng xu không giới hạn).

-  *Đầu tiên, cần tìm một trạng thái của bài toán.*

## II. Trạng thái là gì ?

>- Trạng thái là một trường hợp, một bài toán con của bài toán lớn.
>- Ví dụ, trạng thái trong bài này là số lượng xu nhỏ nhất để tổng bằng i, với i≤S. Để tìm ra trạng thái i, cần phải tìm tất cả các trạng thái j mà (j<i). Một khi đã tìm ra trạng thái i, ta có thể dễ dàng tìm ra trạng thái của i+1.

## III. Các phương pháp quy hoạch động
 &emsp;&emsp; Có hai cách khác nhau để lưu trữ các giá trị mà chúng ta đã tính để chúng có thể được sử dụng lại.<br>
**1. Phương pháp tiếp cận từ trên xuống hay phương pháp ghi nhớ** <br>
>- Trong cách tiếp cận này, chúng ta sẽ cố gắng giải bài toán lớn hơn bằng cách lặp đệ quy để tìm lời giải cho các bài toán con nhỏ hơn. 
>- Bất cứ khi nào chúng ta giải quyết một vấn đề con, chúng ta sẽ lưu kết quả của nó vào bộ nhớ để không phải giải quyết nó lặp đi lặp lại nếu nó được gọi nhiều lần. 
>- Thay vào đó, chúng ta chỉ cần trả về kết quả đã được lưu. 
>- Kỹ thuật lưu trữ kết quả của các bài toán con đã được giải quyết này được gọi là kỹ thuật ghi nhớ.

**2. Phương pháp từ dưới lên hay phương pháp lập bảng** <br>
>- Lập bảng ngược lại với cách tiếp cận từ trên xuống và không sử dụng đệ quy. 
>- Trong cách tiếp cận này, chúng ta giải quyết vấn đề “từ dưới lên” (tức là bằng cách giải quyết tất cả các vấn đề con liên quan trước). Điều này thường được thực hiện bằng cách điền vào một bảng với N chiều. 
>- Dựa trên kết quả trong bảng, giải pháp cho vấn đề ban đầu sẽ được tính toán.
>- Lập bảng trái ngược với kỹ thuật ghi nhớ, vì trong kỹ thuật ghi nhớ, chúng ta sẽ giải quyết vấn đề và duy trì một bản đồ các vấn đề con đã được giải quyết. 
>- Nói cách khác, trong kỹ thuật ghi nhớ, chúng ta thực hiện từ trên xuống theo nghĩa là chúng ta giải quyết vấn đề trên cùng trước (thường lặp lại xuống để giải quyết các vấn đề phụ).

## IV. Khi nào thì dùng quy hoạch động
&emsp;&emsp;Khi nào thì chúng ta cần đến quy hoạch động? Đó là một câu hỏi rất khó trả lời. Không có một công thức nào cho các bài toán như vậy.
>&emsp;&emsp; Tuy nhiên, có một số tính chất của bài toán mà bạn có thể nghĩ đến quy hoạch động. Dưới đây là hai tính chất nổi bật nhất trong số chúng:
>- Bài toán có các bài toán con gối nhau
>- Bài toán có cấu trúc con tối ưu

*Thường thì một bài toán có đủ cả hai tính chất này, chúng ta có thể dùng quy hoạch động được.*

## V. Các bước cơ bản cần để giải quyết một bài toán quy hoạch động.

>- B1. Giải tất cả các bài toán cơ sở (thông thường rất dễ), lưu các lời giải vào bảng phương án.
>- B2. Dùng công thức truy hồi phối hợp những lời giải của những bài toán nhỏ đã lưu trong bảng phương án để tìm lời giải của những bài toán lớn hơn và lưu chúng vào bảng phương án. Cho tới khi bài toán ban đầu tìm được lời giải.
>- B3. Dựa vào bảng phương án, truy vết tìm ra nghiệm tối ưu.

*Note:* 
- *Giải một bài toán Quy hoạch động phụ thuộc rất nhiều vào cách bạn đặt tên cho mảng mà bạn dùng để lưu các phương án.*
- *Sau khi đã gọi được tên của cái mảng thì các bạn nên tự vẽ cái bảng mình vừa tạo ra nháp với những test nhỏ, từ đó sẽ khiến bạn dễ tìm ra công thức truy hồi của bài toán hơn.*

## **VI. Bài tập áp dụng**
1. LIQ - Dãy con tăng dài nhất ( bản dễ )

Link đề : https://vn.spoj.com/problems/LIQ/
``` C++
// Ở bài này thì chúng ta gọi f[i] là độ dài dãy con tăng dài nhất từ 1 -> i
int main(){
	faster;
	int n;
	cin >> n;
	vector <int> a,f;
	a.assign(n + 1,0);
	f.assign(n + 1,0);
	for(int i = 1;i <= n;i++) cin >> a[i];
	for(int i = 1;i <= n;i++){
		f[i] = 1;//Độ dài nhỏ nhất tại mỗi vị trí i là 1
		for(int j = 1;j < i;j++){
			if(a[i] > a[j]){ // Xét các phần tử từ 1 -> i - 1 bé hơn i
				f[i] = max(f[i],f[j] + 1); // Cập nhật lại độ dài lớn nhất
			}
		}
	}
	cout << *max_element(f.begin() + 1,f.end()); // giá trị lớn nhất của mảng f chính là kết quả
}
```
2. BCCAITUI - Cái Túi

Link đề : https://www.spoj.com/PTIT/problems/BCCAITUI/

``` C++
// Bài này chúng ta gọi f[i] là giá trị lấy nhiều nhất với cân nặng i
int main(){
	faster;
	int n,W;
	cin >> n >> W;
	vector <int> w,v,f;
	f.assign(W + 1,0);
    w.assign(n + 1,0);
    v.assign(n + 1,0);
	foru(i,1,n){
		cin >> w[i] >> v[i];
	}
	foru(i,1,n){
        //Vì mỗi đồ vật chỉ được lấy một lần -> ta cần duyệt từ trên xuống 
        //theo giá trị của m để đảm bảo mỗi đồ vật thì các giá trị dp[i] 
        //đều được cặp nhập mà không bị lặp lại.
		ford(j,W,a[i].first){
			f[j] = max(f[j],f[j - w[i]] + v[i]); // Cập nhật lại cân năng lớn nhất tại i
		}
	}
	cout << f[W];
}
```


