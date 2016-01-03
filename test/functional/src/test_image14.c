/*****************************************************************************
 * Test cases for libxlsxwriter.
 *
 * Test to compare output against Excel files.
 *
 * Copyright 2014-2016, John McNamara, jmcnamara@cpan.org
 *
 */

#include "xlsxwriter.h"

int main() {

    lxw_workbook  *workbook  = new_workbook("test_image14.xlsx");
    lxw_worksheet *worksheet = workbook_add_worksheet(workbook, NULL);

    worksheet_set_row(worksheet,    1,     4.5,  NULL, NULL);
    worksheet_set_row(worksheet,    2,    35.25, NULL, NULL);
    worksheet_set_column(worksheet, 2, 4,  3.29, NULL, NULL);
    worksheet_set_column(worksheet, 5, 5, 10.71, NULL, NULL);

    worksheet_insert_image(worksheet, CELL("C2"), "images/logo.png");

    return workbook_close(workbook);
}
