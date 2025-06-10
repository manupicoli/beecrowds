use std::collections::HashSet;
use std::io;

fn main() {
    const ERROR_MESSAGE: &str = "Not a number!";

    let mut n = String::new();
    let mut numbers = String::new();

    io::stdin().read_line(&mut n).expect(ERROR_MESSAGE);
    io::stdin().read_line(&mut numbers).expect(ERROR_MESSAGE);

    let mut queue: Vec<&str> = numbers.trim().split_whitespace().collect();

    let mut m = String::new();
    let mut left = String::new();

    io::stdin().read_line(&mut m).expect(ERROR_MESSAGE);
    io::stdin().read_line(&mut left).expect(ERROR_MESSAGE);

    let left_queue: HashSet<&str> = left.trim().split_whitespace().collect();

    queue.retain(|x| !left_queue.contains(x));

    println!("{}", queue.join(" "));
}
