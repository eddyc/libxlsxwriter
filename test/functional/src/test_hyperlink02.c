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

    lxw_workbook  *workbook  = new_workbook("test_hyperlink02.xlsx");
    lxw_worksheet *worksheet = workbook_add_worksheet(workbook, NULL);

    worksheet_write_url(worksheet, CELL("A1"),  "http://www.perl.org/", NULL);
    worksheet_write_url(worksheet, CELL("D4"),  "http://www.perl.org/", NULL);
    worksheet_write_url(worksheet, CELL("A8"),  "http://www.perl.org/", NULL);
    worksheet_write_url(worksheet, CELL("B6"),  "http://www.cpan.org/", NULL);
    worksheet_write_url(worksheet, CELL("F12"), "http://www.cpan.org/", NULL);

    return workbook_close(workbook);
}
