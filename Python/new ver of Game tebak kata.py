player_chance = 3

# Making word lists and category list randomly choose from the list

animal = ['ayam', 'bebek', 'kucing', 'singa', 'harimau', 'burung']
country = ['indonesia', 'amerika', 'malaysia', 'korea', 'jepang', 'jepang']

category = ['hewan', 'negara']
import random

secret_category = random.choice(category)

if secret_category == category[0]:
    secret_word = random.choice(animal)
elif secret_category == category[1]:
    secret_word = random.choice(country)

# Display for the user
show_clue = print('Tebak kata dengan clue :', secret_category.upper())
show_batas = print('Batas tebak yang Anda miliki adalah ', player_chance, 'kali!')

# The game loop
while player_chance <= player_chance:
    player_guess = input('Tebak kata :')

    # if the player guess the right word
    if player_guess == secret_word:
        print('Anda Berhasil!')

    # if the player guess the wrong word
    elif player_guess != secret_word:
        player_chance -= 1
        if 1 < player_chance <= player_chance:
            print('Coba lagi!')

        elif player_chance == 1:
          print('Batas tebak sisa satu!')
        else:
           print('Batas tebak habis!')
           print('Jawaban yang benar adalah', secret_word, '!')

