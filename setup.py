from distutils.core import Extension, setup

setup(name='demo',
      version='1.0',
      description='This is a demo package',
      ext_modules=[
        Extension('spam', sources=['spam.cpp']),
      ])
