use std::io;

fn main() {
    const ERROR_MESSAGE: &str = "Error while inputting!";

    let mut p1 = String::new();
    let mut p2 = String::new();
    let mut p3 = String::new();

    io::stdin().read_line(&mut p1).expect(ERROR_MESSAGE);
    io::stdin().read_line(&mut p2).expect(ERROR_MESSAGE);
    io::stdin().read_line(&mut p3).expect(ERROR_MESSAGE);

    let p1 = p1.trim();
    let p2 = p2.trim();
    let p3 = p3.trim();

    if p1 == "vertebrado" {
        if p2 == "ave" {
            if p3 == "carnivoro" {
                println!("aguia");
            }
            if p3 == "onivoro" {
                println!("pomba");
            }
        }
        if p2 == "mamifero" {
            if p3 == "onivoro" {
                println!("homem");
            }
            if p3 == "herbivoro" {
                println!("vaca");
            }
        }
    }

    if p1 == "invertebrado" {
        if p2 == "inseto" {
            if p3 == "hematofago" {
                println!("pulga");
            }
            if p3 == "herbivoro" {
                println!("lagarta");
            }
        }
        if p2 == "anelideo" {
            if p3 == "hematofago" {
                println!("sanguessuga");
            }
            if p3 == "onivoro" {
                println!("minhoca");
            }
        }
    }
}
