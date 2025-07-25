CC:=g++
CFLAG:=-Iinc -c
OBJ:=obj/test.o obj/printer.o obj/encoder.o obj/decoder.o
obj/%.o: src/%.cpp inc/%.h
	$(CC) $(CFLAG) $< -o $@

lib/libmycode.a : $(OBJ)
	ar rcs $@ $^ 

bin/mycode.exe: src/main.cpp lib/libmycode.a
	$(CC) -Iinc $< -Llib -lmycode -o $@

clean:
	rm -f obj/*.o bin/*.exe lib/*.a
