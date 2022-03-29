; Author : Leandro 
;
;substitui texto
.macro LIGA_LED
	sbi PORTB,5 ;liga porta PB5
.endmacro

.macro DESLIGA_LED
	cbi PORTB,5 ;desliga PB5
.endmacro

.macro SAIDA
		sbi DDR@0,@1 ;@parametro 
.endmacro

.macro ENTRADA
	cbi DDR@0,@1
.endmacro

.macro jc 
	sbis PIN@0,@1
	RJMP @2
.endmacro

; Replace with your application code
	;configure IO
	ENTRADA B,3     ;cbi DDRB,3 ; PB3 witch input
	ENTRADA B,4     ;cbi DDRB,4 ;PB4 witch input
	SAIDA   B,5     ;sbi DDRB,5 ;PB5 witch output
testapb3:
	jc B,3,testapb4 ;sbis PINB,3   ;if == 0  desliga else pass 
	jc B,4,desliga  ; rjmp testapb4

	sbis PINB,4     ;se for == 0 desliga se nao passa para proxima instrução
	rjmp desliga

ligar: 
	 LIGA_LED      ;sbi PORTB,5 ;liga porta PB5
	rjmp testapb3

desliga:
	DESLIGA_LED    ;cbi PORTB,5 ;desliga PB5
	rjmp testapb3

testapb4:
	jc B,4,ligar   ;sbis PINB,4	  ;se for igual a 1 liga se não desliga
	rjmp ligar
	rjmp desliga
