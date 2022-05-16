use std::time;

fn main() {
    let st : [char; 33] = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '2', '3', '4', '5', '6', '7', '9'];
    let now = time::Instant::now();

    for i in st {
        for j in st {
            for k in st {
                for l in st {
                    for m in st {
                        println!("{}", format!("{}{}{}{}{}",i, j, k, l ,m)); 
                    }
                }
            }
        }   
    }

    let elapsed_time = now.elapsed();
    println!("Elapsed Time {} Seconds", elapsed_time.as_secs());
}