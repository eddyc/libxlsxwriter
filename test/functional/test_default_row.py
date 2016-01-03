###############################################################################
#
# Tests for libxlsxwriter.
#
# Copyright 2014-2016, John McNamara, jmcnamara@cpan.org
#

import base_test_class

class TestCompareXLSXFiles(base_test_class.XLSXBaseTest):
    """
    Test file created with libxlsxwriter against a file created by Excel.

    """

    def test_default_row01(self):
        self.run_exe_test('test_default_row01')

    def test_default_row02(self):
        self.run_exe_test('test_default_row02')

    def test_default_row03(self):
        self.run_exe_test('test_default_row03')

    def test_default_row05(self):
        self.run_exe_test('test_default_row05')
