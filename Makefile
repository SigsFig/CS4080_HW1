# Top-level Makefile
.PHONY: all java c run-java run-c clean

all: java c

java:
$(MAKE) -C java

c:
$(MAKE) -C c

run-java:
$(MAKE) -C java run

run-c:
$(MAKE) -C c run

clean:
$(MAKE) -C java clean
$(MAKE) -C c clean