# liblogging
A minimalistic approach to handle log messages with different severities.
It was designed to meet the following goals:

1) It shall be fast
2) It shall support the major categories of severities: Error/Warning/Info/Debug/Trace
3) Log messages with disabled severities shall not end in the code to allow tiny binaries.
   It is accepted that his might cause runtime differences when enabling severities.
   it is accepted that his might cause heisenbugs.
4) It shall allow the user to define different log levels per scope.
5) It shall support user defined log formats.