﻿using NUnit.Framework;
using Ruyi;
using System;

namespace UnitTests.Numerics
{
    [TestFixture]
    public class MatrixTests
    {
        [Test]
        public void TwoByTwoDeterminantTests()
        {
            var a = new SquareMatrix(1, 2,
                                     3, 4);
            Assert.AreEqual(-2, a.Determinant, Matrix.ErrorTolerance);

            var b = new SquareMatrix(3, 4,
                                     5, 6);
            Assert.AreEqual(-2, b.Determinant, Matrix.ErrorTolerance);

            var c = new SquareMatrix(1, 1,
                                     1, 1);
            Assert.AreEqual(0, c.Determinant, Matrix.ErrorTolerance);

            var d = new SquareMatrix(12, 15,
                                     17, 21);
            Assert.AreEqual(12 * 21 - 15 * 17, d.Determinant, Matrix.ErrorTolerance);
        }

        [Test]
        public void ThreebyThreeDeterminantTests()
        {
            var a = new SquareMatrix(1, 2, 3,
                                     4, 5, 6,
                                     7, 8, 9);
            Assert.AreEqual(0, a.Determinant, Matrix.ErrorTolerance);

            var b = new SquareMatrix(3, 1, 4,
                                     1, 5, 9,
                                     2, 6, 5);
            Assert.AreEqual(-90, b.Determinant, Matrix.ErrorTolerance);
        }

        [Test]
        public void FourByFourDeterminantTests()
        {
            var a = new SquareMatrix(1, 2, 3, 4,
                                      5, 6, 7, 8,
                                      9, 10, 11, 12,
                                     13, 14, 15, 16);

            Assert.AreEqual(0, a.Determinant, Matrix.ErrorTolerance);

            var π = new SquareMatrix(3, 1, 4, 1,
                                     5, 9, 2, 6,
                                     5, 3, 5, 8,
                                     9, 7, 9, 3);

            Assert.AreEqual(98, π.Determinant, Matrix.ErrorTolerance);
        }

        [Test]
        public void EightByEightDeterminantTests()
        {
            var a = new SquareMatrix(1, 2, 3, 4, 5, 6, 7, 8,
                                     9, 10, 11, 12, 13, 14, 15, 16,
                                    17, 18, 19, 20, 21, 22, 23, 24,
                                    25, 26, 27, 28, 29, 30, 31, 32,
                                    33, 34, 35, 36, 37, 38, 39, 40,
                                    41, 42, 32, 44, 45, 46, 47, 48,
                                    49, 50, 51, 52, 53, 54, 55, 56,
                                    57, 58, 59, 60, 61, 62, 63, 64);

            Assert.AreEqual(0, a.Determinant, Matrix.ErrorTolerance);

            var π = new SquareMatrix(3, 1, 4, 1, 5, 9, 2, 6,
                                     5, 3, 5, 8, 9, 7, 9, 3,
                                     2, 3, 8, 4, 6, 2, 6, 4,
                                     3, 3, 8, 3, 2, 7, 9, 5,
                                     0, 2, 8, 8, 4, 1, 9, 7,
                                     1, 6, 9, 3, 9, 9, 3, 7,
                                     5, 1, 0, 5, 8, 2, 0, 9,
                                     7, 4, 9, 4, 4, 5, 9, 2);

            Assert.AreEqual(1378143, π.Determinant, Matrix.ErrorTolerance);
        }

        [Test]
        public void DeterminantSpeedTest()
        {
            var π = new SquareMatrix(3, 1, 4, 1, 5, 9, 2, 6,
                                     5, 3, 5, 8, 9, 7, 9, 3,
                                     2, 3, 8, 4, 6, 2, 6, 4,
                                     3, 3, 8, 3, 2, 7, 9, 5,
                                     0, 2, 8, 8, 4, 1, 9, 7,
                                     1, 6, 9, 3, 9, 9, 3, 7,
                                     5, 1, 0, 5, 8, 2, 0, 9,
                                     7, 4, 9, 4, 4, 5, 9, 2);

            for (int i = 1; i < 10000; ++i)
            {
                var x = π.Determinant;
            }
        }

        [Test]
        public void EqualsTest()
        {
            var a = new SquareMatrix(1, 2,
                                     3, 4);

            var b = new SquareMatrix(1, 2,
                                     3, 4);

            Assert.IsTrue(a == b);
            Assert.AreEqual(a, b);

            var c = new Matrix(2, 3,
                               1, 2, 3,
                               4, 5, 6);

            var d = new Matrix(2, 3,
                               1, 2, 3,
                               4, 5, 6);

            Assert.IsTrue(c == d);
            Assert.AreEqual(c, d);

            var e = new Matrix(3, 2,
                               1, 4,
                               2, 5,
                               3, 6);

            var f = e.Transpose;

            Assert.IsTrue(d == f);
            Assert.AreEqual(d, f);
            Assert.AreEqual(d.GetHashCode(), f.GetHashCode());

            var g = new SquareMatrix(1, 2.00000000000001,
                                     3, 4);

            var h = new SquareMatrix(1, 2,
                                     3, 4);

            Assert.IsTrue(g == h);
            Assert.AreEqual(g, h);
            Assert.AreEqual(g.GetHashCode(), h.GetHashCode());
        }

        [Test]
        public void AdjugateTests()
        {
            var a = new SquareMatrix(1, 2,
                                     3, 4);

            var b = new SquareMatrix(4, -2,
                                     -3, 1);

            Assert.AreEqual(b, a.Adjugate);


            var c = new SquareMatrix(-3, 2, -5,
                                     -1, 0, -2,
                                      3, -4, 1);

            var d = new SquareMatrix(-8, 18, -4,
                                     -5, 12, -1,
                                      4, -6, 2);

            Assert.AreEqual(d, c.Adjugate);
        }

        [Test]
        public void InverseTests()
        {
            var a = new SquareMatrix(4, 3,
                                     3, 2);

            var b = new SquareMatrix(-2, 3,
                                      3, -4);

            var aInverse = a.Inverse;
            Assert.AreEqual(b, aInverse);

            var identity2x2 = new IdentityMatrix(2);

            var aaInverse = a * aInverse;
            Assert.IsTrue(identity2x2 == aaInverse);

            var c = new SquareMatrix(1, 2, 3,
                                     0, 4, 5,
                                     1, 0, 6);

            var cInverse = c.Inverse;
            var d = (1.0 / 22) * new SquareMatrix(24, -12, -2,
                                                   5, 3, -5,
                                                  -4, 2, 4);


            Assert.IsTrue(d == cInverse);
            var identity3x3 = new IdentityMatrix(3);

            var ccInverse = c * cInverse;
            Assert.IsTrue(identity3x3 == ccInverse);
        }
    }
}
