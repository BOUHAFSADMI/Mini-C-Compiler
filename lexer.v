#############################################################################
#                         A C A D E M I C   C O P Y
# 
# This file was produced by an ACADEMIC COPY of Parser Generator. It is for
# use in non-commercial software only. An ACADEMIC COPY of Parser Generator
# can only be used by a student, or a member of an academic community. If
# however you want to use Parser Generator for commercial purposes then you
# will need to purchase a license. For more information see the online help or
# go to the Bumble-Bee Software homepage at:
# 
# http://www.bumblebeesoftware.com
# 
# This notice must remain present in the file. It cannot be removed.
#############################################################################

#############################################################################
# lexer.v
# Lex verbose file generated from lexer.l.
# 
# Date: 01/18/17
# Time: 10:01:58
# 
# ALex Version: 2.07
#############################################################################


#############################################################################
# Expressions
#############################################################################

    1  [ \t\n]+

    2  "int"

    3  "float"

    4  "for"

    5  "while"

    6  "if"

    7  "else"

    8  "do"

    9  "ifelse"

   10  "=="

   11  "<="

   12  ">="

   13  "!="

   14  ([0-9]+|([0-9]*\.[0-9]+)([eE][-+]?[0-9]+)?)

   15  [a-zA-Z_]([a-zA-Z_]|[0-9_])*

   16  .


#############################################################################
# States
#############################################################################

state 1
	INITIAL

	0x00 - 0x08 (9)    goto 3
	0x09               goto 4
	0x0a               goto 4
	0x0b - 0x1f (21)   goto 3
	0x20               goto 4
	0x21               goto 5
	0x22 - 0x2d (12)   goto 3
	0x2e               goto 6
	0x2f               goto 3
	0x30 - 0x39 (10)   goto 7
	0x3a - 0x3b (2)    goto 3
	0x3c               goto 8
	0x3d               goto 9
	0x3e               goto 10
	0x3f - 0x40 (2)    goto 3
	0x41 - 0x5a (26)   goto 11
	0x5b - 0x5e (4)    goto 3
	0x5f               goto 11
	0x60               goto 3
	0x61 - 0x63 (3)    goto 11
	0x64               goto 12
	0x65               goto 13
	0x66               goto 14
	0x67 - 0x68 (2)    goto 11
	0x69               goto 15
	0x6a - 0x76 (13)   goto 11
	0x77               goto 16
	0x78 - 0x7a (3)    goto 11
	0x7b - 0xff (133)  goto 3


state 2
	^INITIAL

	0x00 - 0x08 (9)    goto 3
	0x09               goto 4
	0x0a               goto 4
	0x0b - 0x1f (21)   goto 3
	0x20               goto 4
	0x21               goto 5
	0x22 - 0x2d (12)   goto 3
	0x2e               goto 6
	0x2f               goto 3
	0x30 - 0x39 (10)   goto 7
	0x3a - 0x3b (2)    goto 3
	0x3c               goto 8
	0x3d               goto 9
	0x3e               goto 10
	0x3f - 0x40 (2)    goto 3
	0x41 - 0x5a (26)   goto 11
	0x5b - 0x5e (4)    goto 3
	0x5f               goto 11
	0x60               goto 3
	0x61 - 0x63 (3)    goto 11
	0x64               goto 12
	0x65               goto 13
	0x66               goto 14
	0x67 - 0x68 (2)    goto 11
	0x69               goto 15
	0x6a - 0x76 (13)   goto 11
	0x77               goto 16
	0x78 - 0x7a (3)    goto 11
	0x7b - 0xff (133)  goto 3


state 3
	match 16


state 4
	0x09 - 0x0a (2)    goto 4
	0x20               goto 4

	match 1


state 5
	0x3d               goto 17

	match 16


state 6
	0x30 - 0x39 (10)   goto 18

	match 16


state 7
	0x2e               goto 19
	0x30 - 0x39 (10)   goto 7

	match 14


state 8
	0x3d               goto 20

	match 16


state 9
	0x3d               goto 21

	match 16


state 10
	0x3d               goto 22

	match 16


state 11
	0x30 - 0x39 (10)   goto 11
	0x41 - 0x5a (26)   goto 11
	0x5f               goto 11
	0x61 - 0x7a (26)   goto 11

	match 15


state 12
	0x30 - 0x39 (10)   goto 11
	0x41 - 0x5a (26)   goto 11
	0x5f               goto 11
	0x61 - 0x6e (14)   goto 11
	0x6f               goto 23
	0x70 - 0x7a (11)   goto 11

	match 15


state 13
	0x30 - 0x39 (10)   goto 11
	0x41 - 0x5a (26)   goto 11
	0x5f               goto 11
	0x61 - 0x6b (11)   goto 11
	0x6c               goto 24
	0x6d - 0x7a (14)   goto 11

	match 15


state 14
	0x30 - 0x39 (10)   goto 11
	0x41 - 0x5a (26)   goto 11
	0x5f               goto 11
	0x61 - 0x6b (11)   goto 11
	0x6c               goto 25
	0x6d - 0x6e (2)    goto 11
	0x6f               goto 26
	0x70 - 0x7a (11)   goto 11

	match 15


state 15
	0x30 - 0x39 (10)   goto 11
	0x41 - 0x5a (26)   goto 11
	0x5f               goto 11
	0x61 - 0x65 (5)    goto 11
	0x66               goto 27
	0x67 - 0x6d (7)    goto 11
	0x6e               goto 28
	0x6f - 0x7a (12)   goto 11

	match 15


state 16
	0x30 - 0x39 (10)   goto 11
	0x41 - 0x5a (26)   goto 11
	0x5f               goto 11
	0x61 - 0x67 (7)    goto 11
	0x68               goto 29
	0x69 - 0x7a (18)   goto 11

	match 15


state 17
	match 13


state 18
	0x30 - 0x39 (10)   goto 18
	0x45               goto 30
	0x65               goto 30

	match 14


state 19
	0x30 - 0x39 (10)   goto 18


state 20
	match 11


state 21
	match 10


state 22
	match 12


state 23
	0x30 - 0x39 (10)   goto 11
	0x41 - 0x5a (26)   goto 11
	0x5f               goto 11
	0x61 - 0x7a (26)   goto 11

	match 8


state 24
	0x30 - 0x39 (10)   goto 11
	0x41 - 0x5a (26)   goto 11
	0x5f               goto 11
	0x61 - 0x72 (18)   goto 11
	0x73               goto 31
	0x74 - 0x7a (7)    goto 11

	match 15


state 25
	0x30 - 0x39 (10)   goto 11
	0x41 - 0x5a (26)   goto 11
	0x5f               goto 11
	0x61 - 0x6e (14)   goto 11
	0x6f               goto 32
	0x70 - 0x7a (11)   goto 11

	match 15


state 26
	0x30 - 0x39 (10)   goto 11
	0x41 - 0x5a (26)   goto 11
	0x5f               goto 11
	0x61 - 0x71 (17)   goto 11
	0x72               goto 33
	0x73 - 0x7a (8)    goto 11

	match 15


state 27
	0x30 - 0x39 (10)   goto 11
	0x41 - 0x5a (26)   goto 11
	0x5f               goto 11
	0x61 - 0x64 (4)    goto 11
	0x65               goto 34
	0x66 - 0x7a (21)   goto 11

	match 6


state 28
	0x30 - 0x39 (10)   goto 11
	0x41 - 0x5a (26)   goto 11
	0x5f               goto 11
	0x61 - 0x73 (19)   goto 11
	0x74               goto 35
	0x75 - 0x7a (6)    goto 11

	match 15


state 29
	0x30 - 0x39 (10)   goto 11
	0x41 - 0x5a (26)   goto 11
	0x5f               goto 11
	0x61 - 0x68 (8)    goto 11
	0x69               goto 36
	0x6a - 0x7a (17)   goto 11

	match 15


state 30
	0x2b               goto 37
	0x2d               goto 37
	0x30 - 0x39 (10)   goto 38


state 31
	0x30 - 0x39 (10)   goto 11
	0x41 - 0x5a (26)   goto 11
	0x5f               goto 11
	0x61 - 0x64 (4)    goto 11
	0x65               goto 39
	0x66 - 0x7a (21)   goto 11

	match 15


state 32
	0x30 - 0x39 (10)   goto 11
	0x41 - 0x5a (26)   goto 11
	0x5f               goto 11
	0x61               goto 40
	0x62 - 0x7a (25)   goto 11

	match 15


state 33
	0x30 - 0x39 (10)   goto 11
	0x41 - 0x5a (26)   goto 11
	0x5f               goto 11
	0x61 - 0x7a (26)   goto 11

	match 4


state 34
	0x30 - 0x39 (10)   goto 11
	0x41 - 0x5a (26)   goto 11
	0x5f               goto 11
	0x61 - 0x6b (11)   goto 11
	0x6c               goto 41
	0x6d - 0x7a (14)   goto 11

	match 15


state 35
	0x30 - 0x39 (10)   goto 11
	0x41 - 0x5a (26)   goto 11
	0x5f               goto 11
	0x61 - 0x7a (26)   goto 11

	match 2


state 36
	0x30 - 0x39 (10)   goto 11
	0x41 - 0x5a (26)   goto 11
	0x5f               goto 11
	0x61 - 0x6b (11)   goto 11
	0x6c               goto 42
	0x6d - 0x7a (14)   goto 11

	match 15


state 37
	0x30 - 0x39 (10)   goto 38


state 38
	0x30 - 0x39 (10)   goto 38

	match 14


state 39
	0x30 - 0x39 (10)   goto 11
	0x41 - 0x5a (26)   goto 11
	0x5f               goto 11
	0x61 - 0x7a (26)   goto 11

	match 7


state 40
	0x30 - 0x39 (10)   goto 11
	0x41 - 0x5a (26)   goto 11
	0x5f               goto 11
	0x61 - 0x73 (19)   goto 11
	0x74               goto 43
	0x75 - 0x7a (6)    goto 11

	match 15


state 41
	0x30 - 0x39 (10)   goto 11
	0x41 - 0x5a (26)   goto 11
	0x5f               goto 11
	0x61 - 0x72 (18)   goto 11
	0x73               goto 44
	0x74 - 0x7a (7)    goto 11

	match 15


state 42
	0x30 - 0x39 (10)   goto 11
	0x41 - 0x5a (26)   goto 11
	0x5f               goto 11
	0x61 - 0x64 (4)    goto 11
	0x65               goto 45
	0x66 - 0x7a (21)   goto 11

	match 15


state 43
	0x30 - 0x39 (10)   goto 11
	0x41 - 0x5a (26)   goto 11
	0x5f               goto 11
	0x61 - 0x7a (26)   goto 11

	match 3


state 44
	0x30 - 0x39 (10)   goto 11
	0x41 - 0x5a (26)   goto 11
	0x5f               goto 11
	0x61 - 0x64 (4)    goto 11
	0x65               goto 46
	0x66 - 0x7a (21)   goto 11

	match 15


state 45
	0x30 - 0x39 (10)   goto 11
	0x41 - 0x5a (26)   goto 11
	0x5f               goto 11
	0x61 - 0x7a (26)   goto 11

	match 5


state 46
	0x30 - 0x39 (10)   goto 11
	0x41 - 0x5a (26)   goto 11
	0x5f               goto 11
	0x61 - 0x7a (26)   goto 11

	match 9


#############################################################################
# Summary
#############################################################################

1 start state(s)
16 expression(s), 46 state(s)


#############################################################################
# End of File
#############################################################################
