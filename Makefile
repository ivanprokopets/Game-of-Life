all:
	$(CC) -o game main.c generacja.c read_and_write_png.c read_txt.c regula_generacji.c sasiadstwa.c symulator.c -std=c99 -l png

test_game: 
	$(CC) -o test_game test_game.c generacja.c read_and_write_png.c read_txt.c regula_generacji.c sasiadstwa.c symulator.c -std=c99 -l png
.PHONY: clean

clean: 
	-rm -rf wynik test_game