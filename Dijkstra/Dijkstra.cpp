#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

// Định nghĩa cấu trúc cạnh, mỗi cạnh có điểm đến và trọng số
struct Edge { 
    int to, weight; 
};

// Lớp Graph đại diện cho đồ thị
class Graph {
public:
    // Hàm tạo đồ thị với số lượng đỉnh
    Graph(int v) : adjList(v) {}

    // Thêm một cạnh vào đồ thị
    void addEdge(int from, int to, int weight) {
        adjList[from].push_back({to, weight});
    }

    // Thuật toán Dijkstra để tìm đường đi ngắn nhất từ đỉnh start
    vector<int> dijkstra(int start) {
        vector<int> dist(adjList.size(), INT_MAX);  // Mảng lưu khoảng cách từ start đến các đỉnh
        dist[start] = 0;  // Khoảng cách từ đỉnh start đến chính nó là 0

        // Khởi tạo hàng đợi ưu tiên, để xử lý đỉnh có khoảng cách ngắn nhất trước
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
        pq.push({0, start});  // Đưa đỉnh start vào hàng đợi

        while (!pq.empty()) {
            int u = pq.top().second;  // Lấy đỉnh u có khoảng cách ngắn nhất
            int d = pq.top().first;   // Khoảng cách của đỉnh u
            pq.pop();

            // Nếu khoảng cách đã lấy ra lớn hơn khoảng cách hiện tại, bỏ qua
            if (d > dist[u]) continue;

            // Duyệt qua tất cả các đỉnh kề của đỉnh u
            for (const auto& e : adjList[u]) {
                // Cập nhật khoảng cách nếu tìm được đường ngắn hơn
                if (dist[u] + e.weight < dist[e.to]) {
                    dist[e.to] = dist[u] + e.weight;
                    pq.push({dist[e.to], e.to});  // Đưa đỉnh v vào hàng đợi với khoảng cách mới
                }
            }
        }
        return dist;  // Trả về mảng khoảng cách từ start đến các đỉnh
    }

private:
    vector<vector<Edge>> adjList;  // Danh sách kề của đồ thị
};

// Hàm in kết quả khoảng cách từ đỉnh start đến các đỉnh khác
void printResult(const vector<int>& dist) {
    for (int i = 0; i < dist.size(); ++i) {
        // In ra khoảng cách từ đỉnh start đến đỉnh i
        cout << "Đỉnh " << i << ": " << (dist[i] == INT_MAX ? "Không thể tiếp cận" : to_string(dist[i])) << endl;
    }
}

int main() {
    int v, e;

    // Yêu cầu người dùng nhập số lượng đỉnh và cạnh
    cout << "Nhập số lượng đỉnh trong đồ thị: ";
    cin >> v;

    cout << "Nhập số lượng cạnh trong đồ thị: ";
    cin >> e;

    Graph g(v);  // Tạo đồ thị với v đỉnh

    // Yêu cầu người dùng nhập các cạnh (from, to, weight)
    cout << "Nhập các cạnh (from, to, weight):\n";
    for (int i = 0; i < e; ++i) {
        int u, v, w;
        cout << "Cạnh " << i + 1 << ": ";
        cin >> u >> v >> w;  // Nhập cạnh (u, v) với trọng số w
        g.addEdge(u, v, w);  // Thêm cạnh vào đồ thị
    }

    int start;
    // Yêu cầu người dùng nhập đỉnh bắt đầu
    cout << "Nhập đỉnh bắt đầu: ";
    cin >> start;

    // Tính toán và in kết quả
    printResult(g.dijkstra(start));

    return 0;
}
