/*
 * Tests for the lib_xlsx_writer library.
 *
 * Copyright 2014-2016, John McNamara, jmcnamara@cpan.org
 *
 */

#include "../ctest.h"
#include "../helper.h"

#include "xlsxwriter/styles.h"

// Test the _write_cell_xfs() function.
CTEST(styles, write_cell_xfs) {

    char* got;
    char exp[] = "<cellXfs count=\"1\"><xf numFmtId=\"0\" fontId=\"0\" fillId=\"0\" borderId=\"0\" xfId=\"0\"/></cellXfs>";
    FILE* testfile = tmpfile();

    lxw_styles *styles = _new_styles();
    lxw_format *format = _new_format();

    STAILQ_INSERT_TAIL(styles->xf_formats, format, list_pointers);

    styles->file = testfile;

    styles->xf_count = 1;

    _write_cell_xfs(styles);

    RUN_XLSX_STREQ(exp, got);

    _free_styles(styles);
}

