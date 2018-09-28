# Rot13

About Rot13 : https://en.wikipedia.org/wiki/ROT13


## Installation
Download rot13 by cloning the Git repository:

    git clone https://github.com/KasperOmari/Rot13.git
    cd Rot13
    make main
    
## Usage
    
    ./main ROTNUMBER FILE {[-d],-e}

** -d to decrypt a file content (default)
** -e to encrypt a file content

## Usage example

This will print decrypted file.txt content in out.txt

    ./main 13 file.txt > out.txt
