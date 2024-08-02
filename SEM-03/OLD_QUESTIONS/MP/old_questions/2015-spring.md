# 2015-Spring

## 5b, Write a 8086 program to find the square of a given number.

```js
title "Square of a given number"

.model small
.stack 100h

.data
    n DB 5

.code
    mov ax, @data
    mov ds, ax

    mov dl, n
    mov al, dl

    mul dl
end
```