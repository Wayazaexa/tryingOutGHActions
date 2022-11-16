sample: sample.c
	@echo "Compiling"
	cc sample.c -o sample

check: sample
	@echo "Running"
	./sample

dist: sample
	@echo "Preparing for distribution"
	gzip sample

distcheck: dist
	@echo "Testing the result of the dist"
	gunzip sample.gz
