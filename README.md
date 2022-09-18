# qvector

A 2d and 3d vector libray.

## Usage

You can read the source code (it's not hard) at example.cpp and the hpp files.

But here some usage:

### Initialization

    QVct::QVector2f v2d1(2.5f, 1.7f), v2d2(2.6f, 3.7f);
    QVct::QVector3f v3d1(2.5f, 1.7f, 1.1f), v3d2(2.6f, 3.7f, 1.6f);

Or:

    QVct::QVector2<double>
    QVct::QVector2i // int
    QVct::QVector2f // float
    QVct::QVector2u // unsigned int

    QVct::QVector3<double>
    QVct::QVector3i // int
    QVct::QVector3f // float
    QVct::QVector3u // unsigned int

### Operations

    QVct::QVector2f v2d3 = v2d1 + v2d2;
    QVct::QVector2f v2d3 = v2d1 - v2d2;
    QVct::QVector2f v2d3 = v2d1 * v2d2;
    Qvct::QVector2f v2d3 = v2d1 / v2d2;

    QVct::QVector3f v3d3 = v3d1 + v3d2;
    QVct::QVector3f v3d3 = v3d1 - v3d2;
    QVct::QVector3f v3d3 = v3d1 * v3d2;
    Qvct::QVector3f v3d3 = v3d1 / v3d2;

### Print

    v2d3.print();
    v3d3.print();

Or:

    std::cout << v2d3 << '\n';
    std::cout << v3d3 << '\n';

### Increment or Decrement

    v2d3.increment(3).increment(1).decrement(1);
    v3d3.increment(3).increment(1).decrement(1);

