# CS121_file_IO
start program 

int main(){
    
    open file "data.csv"

    if file fails
        print error
        stop program
    end if

    while (there is a line in the file)

        read one line

        put line into stringstream

        get first value using ',' delimiter
        get second value using ',' delimiter
        get word

        convert first value to int
        convert second value to int

        total = first + second

        for i from 0 to total - 1
            print word
        end for

        print newline

    end while

    close file
}
