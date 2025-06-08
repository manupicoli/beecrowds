use std::io;

fn main() {
    const ERROR_MESSAGE: &str = "Not a number!";

    let mut input = String::new();

    io::stdin().read_line(&mut input).expect(ERROR_MESSAGE);
    let num_testes: usize = input.trim().parse().expect(ERROR_MESSAGE);

    let leds_por_digito = [6, 2, 5, 5, 4, 5, 6, 3, 7, 6];

    for _ in 0..num_testes {
        let mut linha = String::new();
        io::stdin().read_line(&mut linha).expect(ERROR_MESSAGE);

        let total_leds: u32 = linha.trim().chars()
            .map(|c| {
                let digito = c.to_digit(10).expect(ERROR_MESSAGE);
                leds_por_digito[digito as usize]
            })
            .sum();

        println!("{} leds", total_leds);
    }
}
