section .data
	msg db "Hello, World", 10 ; النص المطلوب مع سطر جديد (10 هو رمز \n في أسكي)
	len equ $ - msg           ; حساب طول النص تلقائياً

section .text
	global main               ; تصريح بالدالة main عشان يتعرف عليها gcc

main:
	; تجهيز مسجلات المعالج لعملية الطباعة (sys_write)
	mov rax, 1                ; رقم أمر النظام للطباعة write هو 1 في معمارية 64-bit
	mov rdi, 1                ; نحدد مكان الطباعة (1 تعني الشاشة stdout)
	mov rsi, msg              ; نعطيه عنوان النص اللي نبغى نطبعه
	mov rdx, len              ; نعطيه طول النص
	syscall                   ; ننادي نظام التشغيل (Kernel) لتنفيذ الأمر

	; إنهاء البرنامج بنجاح
	mov rax, 0                ; نضع القيمة 0 (يعني return 0)
	ret                       ; نخرج من دالة main
