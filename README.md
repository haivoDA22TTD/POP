# 🧠 Lập Trình Hướng Thủ Tục 
## (POP - Procedural-Oriented Programming)

## 📌 Giới thiệu

Lập trình hướng thủ tục (POP) là một phương pháp lập trình dựa trên **các thủ tục** hoặc **hàm**. Đây là một trong những mô hình lập trình cổ điển và nền tảng cho nhiều ngôn ngữ lập trình hiện đại như C, Pascal, Fortran...

Trong POP, chương trình được chia thành các hàm con nhỏ để xử lý từng phần công việc cụ thể. Các dữ liệu thường được truyền vào hàm thông qua tham số, và ít có sự đóng gói hoặc che giấu thông tin.

---

## 🧱 Đặc điểm chính

- 👨‍💻 Tập trung vào các **thủ tục/hàm** hơn là đối tượng.
- 🧩 Dữ liệu và hàm tách biệt nhau.
- 🔄 Dễ hiểu và dễ triển khai cho các chương trình nhỏ hoặc vừa.
- 📉 Khó mở rộng hoặc bảo trì với hệ thống lớn.

---

## 🔧 Cấu trúc chương trình POP

Một chương trình POP thường bao gồm:

1. Khai báo biến toàn cục.
2. Hàm `main()` chính.
3. Các hàm con xử lý riêng biệt.
   
## So sánh giữa POP và OOP

| 🧩 Tiêu chí                         | 💡 POP (Hướng Thủ Tục)                        | 🧠 OOP (Hướng Đối Tượng)                               |
| ----------------------------------- | --------------------------------------------- | ------------------------------------------------------ |
| **Cách tiếp cận**                   | Dựa trên thủ tục và hàm                       | Dựa trên đối tượng và lớp                              |
| **Tổ chức chương trình**            | Chia nhỏ chương trình thành các hàm           | Chia chương trình thành các đối tượng                  |
| **Mối quan hệ giữa dữ liệu và hàm** | Dữ liệu và hàm tách biệt nhau                 | Dữ liệu và phương thức được đóng gói chung trong lớp   |
| **Tính kế thừa (Inheritance)**      | Không hỗ trợ                                  | Hỗ trợ kế thừa, tái sử dụng mã hiệu quả hơn            |
| **Tính trừu tượng (Abstraction)**   | Thấp                                          | Cao – có thể ẩn chi tiết bên trong đối tượng           |
| **Tính đóng gói (Encapsulation)**   | Không có hoặc rất hạn chế                     | Có – bảo vệ dữ liệu bằng cách kiểm soát truy cập       |
| **Tính đa hình (Polymorphism)**     | Không có hoặc phải xử lý thủ công             | Có – cho phép một hàm có nhiều cách thể hiện khác nhau |
| **Tính mô-đun (Modularity)**        | Thấp – khó tổ chức lại chương trình lớn       | Cao – dễ bảo trì, mở rộng hệ thống lớn                 |
| **Khả năng bảo trì**                | Khó bảo trì và mở rộng cho dự án lớn          | Dễ bảo trì, dễ nâng cấp                                |
| **Hiệu suất**                       | Tốt hơn trong các chương trình nhỏ, đơn luồng | Có thể chậm hơn một chút do chi phí trừu tượng hóa     |
| **Ngôn ngữ tiêu biểu**              | C, Pascal, Fortran                            | C++, Java, Python, C#, Swift                           |


