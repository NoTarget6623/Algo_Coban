# SFML & GAME THEORY

## I. Hướng dẫn cài đặt thư viện SFML
> Các bạn có thể click vào đường dẫn sau :
[hướng dẫn cai đặt thư viên SFML](https://www.youtube.com/watch?v=fOmtYmIAmlU&list=PLZd7ojlRK0byXW3dd-HnucM34JnCPyNkn&index=2)

## II. Khái niệm về game 2D

&emsp;&emsp;**Game 2D** là game không thể xoay góc quay và không có ấn tượng ba chiều rõ rệt. Game này cuộn bản đồ theo hai chiều là ngang và thẳng. Bên cạnh đó, từ nhân vật, tiền cảnh, hậu cảnh,… của game 2D giống phim hoạt hình cắt giấy (mọi thứ đều từ hình vẽ trên giấy).

Một số thể loại game 2D phổ biến :
- Platform games (Thể loại game đi cảnh)
- Fighting games (Thể loại game đối kháng)
- Shooter games (Thể loại game bắn súng)
- Survival games (Thể loại game sinh tồn)
- Metroidvania (Thể loại game hành động phiêu lưu)
- Text adventures (Thể loại game phiêu lưu văn bản)
- Action RPG (Thể loại nhập vai hành động)
- Roguelikes (Thể loại game nhập vai dạng lưới)
- ..............

## III. Gameloop là gì ?
Game loop - hay vòng lặp game là một trong những Game Design Pattern được sử dụng phổ biến nhất, là "kim chỉ nam" của mọi trò chơi điện tử nói chung hay trò chơi nói rêng. Gần như hầu hết tất cả các trò chơi đều có nó, và gần như ít có cái nào giống hẳn cái nào, thêm vào đó cũng có một vài phần mềm ứng dụng không phải là game cũng dùng nó

![](https://raw.githubusercontent.com/NoTarget6623/Algo_Coban/main/resources/basic-game-loop.webp)

## IV. Delta time là gì ?

Delta time là thời gian cần để hiển thị khung hình.

Nói cách khác: Delta time là khoảng thời gian giữa khung hình cuối cùng và khung hình hiện tại.

## V. Sprite là gì ?

- Sprite có thể được hiểu nôm na là các đối tượng hình ảnh 2 chiều hay ảnh động.

![](https://github.com/NoTarget6623/Algo_Coban/blob/main/resources/mario5.png?raw=true)

- Sprite Sheet hay còn được gọi là Tile Sets là một đối tượng hình ảnh mà trong đó bao gồm nhiều hình ảnh nhỏ nhằm thể hiện một trạng thái nào đó của Sprite.

![](https://github.com/NoTarget6623/Algo_Coban/blob/main/resources/mariospritesheet.png?raw=true)

- Sprite Animation là quá trình thay đổi trạng thái của một sprite từ thể hiện hình ảnh này sang một thể hiện hình ảnh khác, giống như chuyển động của một bộ phim hoạt hình, theo thời gian từng frame hình sẽ được thay đổi để tạo ra hiệu ứng chuyển động của nhân vật.

![](https://github.com/NoTarget6623/Algo_Coban/blob/main/resources/output_H3tNjH.gif?raw=true)

## VI. Texture là gì ?

Texture được hiểu theo một cách đơn giản đó là dạng hình ảnh mang họa tiết. Kèm theo đó là hiệu ứng hình ảnh trông tương tự với pattern trong Photoshop.

Thường thì Texture sẽ được dùng để làm background, làm blend hoặc những hiệu ứng sinh động cho hình ảnh trong quá trình thiết kế.

>![](https://github.com/NoTarget6623/Algo_Coban/blob/main/resources/68747470733a2f2f7777772e73666d6c2d6465762e6f72672f7475746f7269616c732f322e352f696d616765732f67726170686963732d737072697465732d646566696e6974696f6e2e706e67.png?raw=true)

## VII. Animation là gì ?

Animation 2D là việc tạo ra các hiệu ứng hoạt hình trên các bức hình 2D, tạo ra một loạt những hình ảnh liên tiếp nhau, thể hiện được các giai đoạn chuyển động của nhân vật, sự việc trong phim hoạt hình. Sau đó sẽ được xử lý lại trong hệ thống máy tính để thêm màu sắc, cử chỉ và các lớp phim sẽ đóng vai trò tạo nên phong cảnh cho các hình ảnh. Sau khi hình ảnh được trình chiếu với tốc độ cao thì chắc chắn người xem sẽ có được cảm giác các nhân vật và bối cảnh đang chuyển động một cách sống động.

![](https://github.com/NoTarget6623/Algo_Coban/blob/main/resources/2201_animation-la-gi-3-min.jpg?raw=true)
