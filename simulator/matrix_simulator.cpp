
#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool timOtrongDauTien(int kho[3][4], int &hangTrong, int &cotTrong)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (kho[i][j] == 0)
            {
                hangTrong = i;
                cotTrong = j;
                return true;
            }
        }
    }
    return false;
};

bool checkItem(int kho[3][4])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (kho[i][j] < 0 || kho[i][j] > 3)
            {
                return false;
            }
        }
    }
    return true;
}
int countValidItems(int a[][4], int rows)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
        }
    }
}

int main()
{
    int ROWS;
    int COLS;
    int kho[3][3][4] = {};
    const int MAX_CAPACITY = 5;
    cin >> ROWS >> COLS;

    vector<vector<int>> a(ROWS, vector<int>(COLS));
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            int color = a[i][j];
            if (color >= 1 && color <= 3)
            {
                int index = color - 1;
                int r, c;

                // 3. Gọi hàm kiểm tra ô trống trong kho[index]
                if (timOtrongDauTien(kho[index], r, c))
                {
                    kho[index][r][c] = color; // Xếp hàng vào tọa độ (r, c)

                    // Kiểm tra xem ngay sau khi xếp thì kho đã đầy chưa
                    int tempR, tempC;
                    if (!timOtrongDauTien(kho[index], tempR, tempC))
                    {
                        cout << "Warehouse " << color << " is FULL!\n";
                    }
                }
            }
        }
    }

    string tenMau[] = {"Red", "Green", "Blue"};
    for (int k = 0; k < 3; k++)
    {
        int sum = 0;
        cout << "Kho " << tenMau[k] << " (" << k + 1 << "):\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << kho[k][i][j] << " ";
                if (kho[k][i][j] != 0)
                    sum++;
            }
            cout << "\n";
        }
        cout << "(Sum: " << sum << ")\n\n";
    }

    return 0;
}
