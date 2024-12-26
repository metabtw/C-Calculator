# C-Calculator

# Simple C Calculator ( Türkçe açıklama aşağıda )

A lightweight command-line calculator implemented in C that performs both basic and advanced mathematical operations.

## Features

### Basic Operations
- Addition (+)
- Subtraction (-)
- Multiplication (*)
- Division (/)

### Advanced Operations
- Exponentiation (^)
- Square Root (r)

## Error Handling
The calculator includes robust error handling for:
- Division by zero
- Square root of negative numbers
- Invalid operator inputs

## Requirements
- C compiler (GCC recommended)
- Math library (typically included with standard C installations)

## Installation

1. Clone the repository:
```bash
git clone https://github.com/your-username/c-calculator.git
cd c-calculator
```

2. Compile the program:
```bash
gcc calculator.c -lm -o calculator
```
Note: The `-lm` flag is required to link the math library.

## Usage

1. Run the compiled program:
```bash
./calculator
```

2. Follow the prompts:
   - Enter the first number
   - Choose an operator (+, -, *, /, ^, r)
   - Enter the second number (not needed for square root)

## Example Usage
```
Simple Calculator
Available operations:
+ : Addition
- : Subtraction
* : Multiplication
/ : Division
^ : Exponentiation
r : Square root

Enter first number: 16
Enter operator: r
Square root of 16.00 = 4.00
```

## Contributing
Contributions are welcome! Feel free to submit issues and pull requests.

Türkçe Açıklama( Turkish Description )

Hem temel hem de gelişmiş matematiksel işlemleri gerçekleştiren C'de uygulanan hafif bir komut satırı hesaplayıcısı.

## Özellikler

### Temel İşlemler
- Ekleme (+)
- Çıkarma (-)
- Çarpma (*)
- Bölüm (/)

### Gelişmiş Operasyonlar
- Üs alma (^)
- Karekök (r)

## Hata İşleme
Hesap makinesi, aşağıdakiler için sağlam hata işleme içerir:
- Sıfıra bölme
- Negatif sayıların karekökü
- Geçersiz operatör girişleri

## Gereksinimler
- C derleyicisi (GCC önerilir)
- Matematik kütüphanesi (genellikle standart C kurulumlarına dahil edilir)

## Kurulum

1. Depoyu klonlayın:
```bash
git clone https://github.com/your-username/c-calculator.git
cd c-hesaplayıcı
```

2. Programı derleyin:
```bash
gcc hesap makinesi.c -lm -o hesap makinesi
```
Not: Matematik kütüphanesini bağlamak için `-lm` bayrağı gereklidir.

## Kullanım

1. Derlenmiş programı çalıştırın:
```bash
./calculator
```

2. Komutları takip edin:
   - İlk numarayı girin
   - Bir işleç seçin (+, -, *, /, ^, r)
   - İkinci sayıyı girin (karekök için gerekli değildir)

## Örnek Kullanım
```
Basit Hesap Makinesi
Mevcut işlemler:
+ : Toplama
- : Çıkarma
* : Çarpma İşlemi
/ : Bölüm
^ : Üs alma
r : Karekök

İlk sayıyı girin: 16
Operatörü girin: r
16.00'ın karekökü = 4.00
```

## Katkıda bulunan
Katkılarınızı bekliyoruz! Sorunları ve çekme isteklerini göndermekten çekinmeyin.

