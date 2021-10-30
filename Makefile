build:
	@echo "...  Building line-counter program"
	@gcc src/counter.c -o lc
	@echo "...  Build finished"
	@echo "...  Use lc <filename> to get line count of file"
