PY=python3

.env:
	$(PY) -m venv .env

spam: .env spam.cpp setup.py
	.env/bin/python setup.py build

.PHONY: clean
clean:
	rm -rf .env build

.PHONY: install
install: spam
	.env/bin/python setup.py install
