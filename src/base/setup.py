from setuptools import setup

package_name = 'base'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='rosbot',
    maintainer_email='rosbot@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'pca = base.pca:main',
            'tester = base.tester:main',
            'drivetrain = base.drivetrain:main',
            'videostream = base.videostream:main',
        ],
    },
)
