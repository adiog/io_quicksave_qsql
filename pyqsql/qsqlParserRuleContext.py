# -*- coding: utf-8 -*-

"""
This file is a part of quicksave project.
Copyright (c) 2016 Aleksander Gajewski <adiog@brainfuck.pl>,
                   Adam Morawski <poczta@adammorawski.pl>.
"""

from antlr4 import ParserRuleContext


class qsqlParserRuleContext(ParserRuleContext):
    altNumber = -1

    def getAltNumber(self):
        return self.altNumber

    def setAltNumber(self, alt_number: int):
        self.altNumber = alt_number
