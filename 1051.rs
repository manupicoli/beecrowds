use std::io;

fn main() {
    const ERROR_MESSAGE: &str = "Not a number!";

    let mut input = String::new();
    io::stdin().read_line(&mut input).expect(ERROR_MESSAGE);

    let salary: f64 = input.trim().parse().expect(ERROR_MESSAGE);

    let tax: f64;

    if salary <= 2000.0 {
        println!("Isento");
        return;
    } else if salary <= 3000.0 {
        tax = (salary - 2000.0) * 0.08;
    } else if salary <= 4500.0 {
        tax = (1000.0 * 0.08) + ((salary - 3000.0) * 0.18);
    } else {
        tax = (1000.0 * 0.08) + (1500.0 * 0.18) + ((salary - 4500.0) * 0.28);
    }

    println!("R$ {:.2}", tax);
}
