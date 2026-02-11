#include <iostream>
#include <cmath>

class Vector2D {
private:
    double X;
    double Y;

public:
    Vector2D(double x = 0.0, double y = 0.0) : X(x), Y(y) {}

    double GetX() const { return X; }
    double GetY() const { return Y; }
    void SetX(double x) { X = x; }
    void SetY(double y) { Y = y; }

    Vector2D operator+(const Vector2D& other) const {
        return Vector2D(X + other.X, Y + other.Y);
    }

    Vector2D operator-(const Vector2D& other) const {
        return Vector2D(X - other.X, Y - other.Y);
    }

    Vector2D operator*(double scalar) const {
        return Vector2D(X * scalar, Y * scalar);
    }

    friend Vector2D operator*(double scalar, const Vector2D& vec) {
        return vec * scalar;
    }

    bool operator==(const Vector2D& other) const {
        const double epsilon = 1e-9;
        return std::abs(X - other.X) < epsilon && std::abs(Y - other.Y) < epsilon;
    }

    bool operator!=(const Vector2D& other) const {
        return !(*this == other);
    }

    bool Equals(const Vector2D& other) const {
        return *this == other;
    }

    size_t GetHashCode() const {
        size_t h1 = std::hash<double>{}(X);
        size_t h2 = std::hash<double>{}(Y);
        return h1 ^ (h2 << 1);
    }

    std::string ToString() const {
        return "(" + std::to_string(X) + ", " + std::to_string(Y) + ")";
    }
};

std::ostream& operator<<(std::ostream& os, const Vector2D& vec) {
    os << vec.ToString();
    return os;
}

#include <iostream>

class Temperature {
private:
    double Celsius;

public:
    Temperature(double celsius = 0.0) : Celsius(celsius) {}

    double GetCelsius() const { return Celsius; }
    void SetCelsius(double value) { Celsius = value; }

    Temperature operator+(const Temperature& other) const {
        return Temperature(Celsius + other.Celsius);
    }

    Temperature operator-(const Temperature& other) const {
        return Temperature(Celsius - other.Celsius);
    }

    bool operator>(const Temperature& other) const {
        return Celsius > other.Celsius;
    }

    bool operator<(const Temperature& other) const {
        return Celsius < other.Celsius;
    }

    operator double() const {
        return Celsius;
    }

    static Temperature FromDouble(double value) {
        return Temperature(value);
    }
};

#include <vector>

class StudentJournal {
private:
    std::vector<int> grades;

public:
    int& operator[](size_t index) {
        return grades[index];
    }

    const int& operator[](size_t index) const {
        return grades[index];
    }

    double AverageGrade() const {
        if (grades.empty()) {
            return 0.0;
        }

        double sum = 0;
        for (int grade : grades) {
            sum += grade;
        }
        return sum / grades.size();
    }

    void AddGrade(int grade) {
        grades.push_back(grade);
    }
};

#include <iostream>
#include <vector>

class ChessBoard {
private:
    std::vector<std::vector<char>> board;

public:
    ChessBoard() {
        board.resize(8, std::vector<char>(8, '.'));
    }

    char& operator[](int row, int col) {
        return board[row][col];
    }

    const char& operator[](int row, int col) const {
        return board[row][col];
    }

    void Print() const {
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                std::cout << board[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

#include <iostream>
#include <string>

class Car {
private:
    std::string Brand;
    std::string Model;
    double Speed;

public:
    std::string GetBrand() const { return Brand; }
    void SetBrand(const std::string& value) { Brand = value; }

    std::string GetModel() const { return Model; }
    void SetModel(const std::string& value) { Model = value; }

    double GetSpeed() const { return Speed; }
    void SetSpeed(double value) {
        if (value >= 0) {
            Speed = value;
        }
    }

    bool IsMoving() const {
        return Speed > 0;
    }
};
