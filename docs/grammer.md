# BFL (brain fuck language)

This is a language that 
you think you are writing a program, 
but you are actually drawing a train.

## GRAMMER (EN)

from wikipedia(en)

Character  | Meaning
---|---
\>  | increment the data pointer (to point to the next cell to the right).
\<  | decrement the data pointer (to point to the next cell to the left).
\+  | increment (increase by one) the byte at the data pointer.
\-  | decrement (decrease by one) the byte at the data pointer.
\.  | output the byte at the data pointer.
\,  | accept one byte of input, storing its value in the byte at the data pointer.
\[  | if the byte at the data pointer is zero, then instead of moving the instruction pointer forward to the next command, jump it forward to the command after the matching ] command.
\]  | if the byte at the data pointer is nonzero, then instead of moving the instruction pointer forward to the next command, jump it back to the command after the matching [ command. 
other  | skip

## GRAMMER (JP)

from wikipedia(jp)

Character  | Meaning
---|---
\> | ポインタをインクリメントする。ポインタをptrとすると、C言語の「ptr++;」に相当する。
\< | ポインタをデクリメントする。C言語の「ptr--;」に相当。
\+ | ポインタが指す値をインクリメントする。C言語の「(*ptr)++;」に相当。
\- | ポインタが指す値をデクリメントする。C言語の「(*ptr)--;」に相当。
\. | ポインタが指す値を出力に書き出す。C言語の「putchar(*ptr);」に相当。
\, | 入力から1バイト読み込んで、ポインタが指す先に代入する。C言語の「*ptr=getchar();」に相当。
\[ | ポインタが指す値が0なら、対応する ] の直後にジャンプする。C言語の「while(*ptr){」に相当。
\] | ポインタが指す値が0でないなら、対応する [ （の直後[注釈 1]）にジャンプする。C言語の「}」に相当[注釈 2]。

## REF

[https://en.wikipedia.org/wiki/Brainfuck](https://en.wikipedia.org/wiki/Brainfuck)
[https://zh.wikipedia.org/wiki/Brainfuck](https://zh.wikipedia.org/wiki/Brainfuck)
[https://ja.wikipedia.org/wiki/Brainfuck](https://ja.wikipedia.org/wiki/Brainfuck)