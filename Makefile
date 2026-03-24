io_files:= dec_input.txt bin_out.txt
init_txts: $(io_files)
	echo "Created i/o files for operations: " $(io_files)

dec_input.txt:
	touch dec_input.txt
bin_out.txt:
	touch bin_out.txt

bit_ops: bit_ops.o
	gcc str.o bit_ops.o -o bit_ops
bit_ops.o: str.o
	gcc -c bit_ops.c -o bit_ops.o
str.o:
	gcc -c str.c -o str.o
clean:
	rm -f *.o *.txt bit_ops
