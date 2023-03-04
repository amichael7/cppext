PY=python3

.env:
	$(PY) -m venv .env

spam: .env spam.cpp setup.py
	.env/bin/python3 setup.py build

.PHONY: install
install: spam
	.env/bin/python3 setup.py install	

