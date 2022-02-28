.286

.MODEL  TINY

.CODE
    ORG     100H

ENTRADA:
    MOV     AX,     0040H
    MOV     DS,     AX
    XOR     BYTE PTR       DS:[0017H],     40H
    MOV     AX,     4C00H
    INT     21H

END ENTRADA
