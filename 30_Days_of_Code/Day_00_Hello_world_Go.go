package main
import "fmt"
import "os"
import "io"

func main() {
 //Enter your code here. Read input from STDIN. Print output to STDOUT
    fmt.Println("Hello, World.")
    io.Copy(os.Stdout, os.Stdin)

}