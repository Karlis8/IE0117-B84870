CC=gcc
SRC=src
BUILD=build
CJSON=cJSON

CFLAGS=-I$(CJSON)
LDFLAGS=
OBJS=$(SRC)/main.o $(SRC)/json.o $(CJSON)/cJSON.o

$(BUILD)/programa: $(OBJS)
	$(CC) -o $@ $^

$(SRC)/%.o: $(SRC)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(CJSON)/cJSON.o: $(CJSON)/cJSON.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(SRC)/*.o $(CJSON)/*.o $(BUILD)/programa
