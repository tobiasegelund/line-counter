build:
	@echo "...  Building line-counter program"
	@gcc src/counter.c -o /usr/local/bin/lc
	@echo "...  Build finished"
	@echo "...  Use lc <filename> to get line count of file"
