use std::io;

fn main() {
    const ERROR_MESSAGE : &str = "Not a number!";

    let mut n : String = String::new();
    let mut numbers : String = String::new();
    
    io::stdin().read_line(&mut n).expect(ERROR_MESSAGE);
    io::stdin().read_line(&mut numbers).expect(ERROR_MESSAGE);

    let collection: Vec<i32> = numbers.split_whitespace()
        .map(|s| s.trim().parse::<i32>().expect(ERROR_MESSAGE))
        .collect();
        
    let mut menor = collection[0];
    let mut index = 0;
    
    for (i, &num) in collection.iter().enumerate() {
        if num < menor {
            menor = num;
            index = i;
        }
    }
    
    println!("Menor valor: {}", menor);
    println!("Posicao: {}", index);
}