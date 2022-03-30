#include <ctest.h>
#include <libchessviz/chessviz.h>

CTEST (check_pawns, white_pawn)
{
    ASSERT_EQUAL(1, WhiteTurn(mass[step_integer[1]][step_integer[0]]));
}

CTEST (check_horse, white_horse)
{
    ASSERT_EQUAL(2, WhiteTurn(mass[step_integer[1]][step_integer[0]]));
}

CTEST (check_king, white_king)
{
    ASSERT_EQUAL(3, WhiteTurn(mass[step_integer[1]][step_integer[0]]));
}

CTEST (check_rook, white_rook)
{
    ASSERT_EQUAL(4, WhiteTurn(mass[step_integer[1]][step_integer[0]]));
}

CTEST (check_bishop, white_bishop)
{
    ASSERT_EQUAL(5, WhiteTurn(mass[step_integer[1]][step_integer[0]]));
}

CTEST (check_queen, white_queen)
{
    ASSERT_EQUAL(6, WhiteTurn(mass[step_integer[1]][step_integer[0]]));
}

CTEST (check_figure, not_figure)
{
    ASSERT_EQUAL(0, WhiteTurn(mass[step_integer[1]][step_integer[0]]));
}

CTEST (check_pawns, black_pawn)
{
    ASSERT_EQUAL(1, BlackTurn(mass[step_integer[1]][step_integer[0]]));
}

CTEST (check_horse, black_horse)
{
    ASSERT_EQUAL(2, BlackTurn(mass[step_integer[1]][step_integer[0]]));
}

CTEST (check_king, black_king)
{
    ASSERT_EQUAL(3, BlackTurn(mass[step_integer[1]][step_integer[0]]));
}

CTEST (check_rook, black_rook)
{
    ASSERT_EQUAL(4, BlackTurn(mass[step_integer[1]][step_integer[0]]));
}

CTEST (check_bishop, black_bishop)
{
    ASSERT_EQUAL(5, BlackTurn(mass[step_integer[1]][step_integer[0]]));
}

CTEST (check_queen, black_queen)
{
    ASSERT_EQUAL(6, BlackTurn(mass[step_integer[1]][step_integer[0]]));
}

CTEST (check_figure, black_figure)
{
    ASSERT_EQUAL(0, BlackTurn(mass[step_integer[1]][step_integer[0]]));
}


