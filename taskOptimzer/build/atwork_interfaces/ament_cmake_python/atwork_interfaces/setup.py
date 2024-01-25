from setuptools import find_packages
from setuptools import setup

setup(
    name='atwork_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('atwork_interfaces', 'atwork_interfaces.*')),
)
