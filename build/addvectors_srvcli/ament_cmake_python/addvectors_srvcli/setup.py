from setuptools import find_packages
from setuptools import setup

setup(
    name='addvectors_srvcli',
    version='0.0.0',
    packages=find_packages(
        include=('addvectors_srvcli', 'addvectors_srvcli.*')),
)
