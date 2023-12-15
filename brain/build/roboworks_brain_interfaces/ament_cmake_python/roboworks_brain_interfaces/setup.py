from setuptools import find_packages
from setuptools import setup

setup(
    name='roboworks_brain_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('roboworks_brain_interfaces', 'roboworks_brain_interfaces.*')),
)
