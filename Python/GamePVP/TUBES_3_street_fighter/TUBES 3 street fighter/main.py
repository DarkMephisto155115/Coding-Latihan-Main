import pygame
from pygame import mixer
from fighter import Fighter

mixer.init()
pygame.init()

# membuat windows game
SCREEN_WIDTH = 1000
SCREEN_HEIGHT = 600

screen = pygame.display.set_mode((SCREEN_WIDTH, SCREEN_HEIGHT))
pygame.display.set_caption("Low Budget Street Fighter")

# framerate
clock = pygame.time.Clock()
FPS = 60
# status game
MENU = 0
GAME = 1
ROUND_OVER = 2
# inisialisasi status game
game_state = MENU
start_button_rect = pygame.Rect(
    SCREEN_WIDTH / 2 - 100, SCREEN_HEIGHT / 2 - 50, 200, 50)
exit_button_rect = pygame.Rect(
    SCREEN_WIDTH / 2 - 100, SCREEN_HEIGHT / 2 + 50, 200, 50)


# menentukan warna
RED = (255, 0, 0)
YELLOW = (255, 255, 0)
WHITE = (255, 255, 255)

# mendefinisikan variabel game
intro_count = 3
last_count_update = pygame.time.get_ticks()

# scores player (P1, P2)
score = [0, 0]
round_over = False
ROUND_OVER_COOLDOWN = 2000

# mendefinisikan variabel petarung/karakter
WARRIOR_SIZE = 162
WARRIOR_SCALE = 4
WARRIOR_OFFSET = [72, 56]
WARRIOR_DATA = [WARRIOR_SIZE, WARRIOR_SCALE, WARRIOR_OFFSET]
WIZARD_SIZE = 250
WIZARD_SCALE = 3
WIZARD_OFFSET = [112, 107]
WIZARD_DATA = [WIZARD_SIZE, WIZARD_SCALE, WIZARD_OFFSET]

# load musik dan suara
pygame.mixer.music.load(
    "C:\\Users\\Dark_Mephisto\\Documents\\GitHub\\Coding-PraktikumS1\\Python\\GamePVP\\TUBES_3_street_fighter\\TUBES 3 street fighter\\assets\\audio\\music.mp3")
pygame.mixer.music.set_volume(0.5)
pygame.mixer.music.play(-1, 0.0, 5000)

sword_fx = pygame.mixer.Sound(
    "C:\\Users\\Dark_Mephisto\\Documents\\GitHub\\Coding-PraktikumS1\\Python\\GamePVP\\TUBES_3_street_fighter\\TUBES 3 street fighter\\assets\\audio\\sword.wav")
sword_fx.set_volume(0.5)
magic_fx = pygame.mixer.Sound(
    "C:\\Users\\Dark_Mephisto\\Documents\\GitHub\\Coding-PraktikumS1\\Python\\GamePVP\\TUBES_3_street_fighter\\TUBES 3 street fighter\\assets\\audio\\magic.wav")
magic_fx.set_volume(0.75)

# load gambar background
bg_image = pygame.image.load(
    "C:\\Users\\Dark_Mephisto\\Documents\\GitHub\\Coding-PraktikumS1\\Python\\GamePVP\\TUBES_3_street_fighter\\TUBES 3 street fighter\\assets\\images\\background\\background.jpg").convert_alpha()

# load spritesheets
warrior_sheet = pygame.image.load(
    "C:\\Users\\Dark_Mephisto\\Documents\\GitHub\\Coding-PraktikumS1\\Python\\GamePVP\\TUBES_3_street_fighter\\TUBES 3 street fighter\\assets\\images\\warrior\\Sprites\\warrior.png").convert_alpha()
wizard_sheet = pygame.image.load(
    "C:\\Users\\Dark_Mephisto\\Documents\\GitHub\\Coding-PraktikumS1\\Python\\GamePVP\\TUBES_3_street_fighter\\TUBES 3 street fighter\\assets\\images\\wizard\\Sprites\\wizard.png").convert_alpha()

# load gambar menang
victory_img = pygame.image.load(
    "C:\\Users\\Dark_Mephisto\\Documents\\GitHub\\Coding-PraktikumS1\\Python\\GamePVP\\TUBES_3_street_fighter\\TUBES 3 street fighter\\assets\\images\\icons\\victory.png").convert_alpha()

# menentukan jumlah langkah dalam setiap animasi
WARRIOR_ANIMATION_STEPS = [10, 8, 1, 7, 7, 3, 7]
WIZARD_ANIMATION_STEPS = [8, 8, 1, 8, 8, 3, 7]

# font
count_font = pygame.font.Font(
    "C:\\Users\\Dark_Mephisto\\Documents\\GitHub\\Coding-PraktikumS1\\Python\\GamePVP\\TUBES_3_street_fighter\\TUBES 3 street fighter\\assets\\fonts\\turok.ttf", 80)
score_font = pygame.font.Font(
    "C:\\Users\\Dark_Mephisto\\Documents\\GitHub\\Coding-PraktikumS1\\Python\\GamePVP\\TUBES_3_street_fighter\\TUBES 3 street fighter\\assets\\fonts\\turok.ttf", 30)

# fungsi untuk menggambar text


def draw_text(text, font, text_col, x, y):
    img = font.render(text, True, text_col)
    screen.blit(img, (x, y))

# fungsi untuk menggambar background


def draw_bg():
    scaled_bg = pygame.transform.scale(bg_image, (SCREEN_WIDTH, SCREEN_HEIGHT))
    screen.blit(scaled_bg, (0, 0))

# fungsi untuk menggambar bar nyawa petarung


def draw_health_bar(health, x, y):
    ratio = health / 100
    pygame.draw.rect(screen, WHITE, (x - 2, y - 2, 404, 34))
    pygame.draw.rect(screen, RED, (x, y, 400, 30))
    pygame.draw.rect(screen, YELLOW, (x, y, 400 * ratio, 30))


# membuat dua contoh petarung
fighter_1 = Fighter(1, 200, 310, False, WARRIOR_DATA,
                    warrior_sheet, WARRIOR_ANIMATION_STEPS, sword_fx)
fighter_2 = Fighter(2, 700, 310, True, WIZARD_DATA,
                    wizard_sheet, WIZARD_ANIMATION_STEPS, magic_fx)

# fungsi loncat ke menu


def go_to_menu():
    global game_state
    game_state = MENU


def runGame():
    run = True
    intro_count = 3
    round_over = False
    last_count_update = pygame.time.get_ticks()
    fighter_1 = Fighter(1, 200, 310, False, WARRIOR_DATA,
                        warrior_sheet, WARRIOR_ANIMATION_STEPS, sword_fx)
    fighter_2 = Fighter(2, 700, 310, True, WIZARD_DATA,
                        wizard_sheet, WIZARD_ANIMATION_STEPS, magic_fx)
    while run:

        clock.tick(FPS)

        # menggambar background
        draw_bg()

        # menampilkan statistik pemain
        draw_health_bar(fighter_1.health, 20, 20)
        draw_health_bar(fighter_2.health, 580, 20)
        draw_text("P1: " + str(score[0]), score_font, RED, 20, 60)
        draw_text("P2: " + str(score[1]), score_font, RED, 580, 60)

        # update countdown
        if intro_count <= 0:
            # move petarung
            fighter_1.move(SCREEN_WIDTH, SCREEN_HEIGHT,
                           screen, fighter_2, round_over)
            fighter_2.move(SCREEN_WIDTH, SCREEN_HEIGHT,
                           screen, fighter_1, round_over)
        else:
            # menampilkan penghitung waktu
            draw_text(str(intro_count), count_font, RED,
                      SCREEN_WIDTH / 2, SCREEN_HEIGHT / 3)
            # update penghitung waktu
            if (pygame.time.get_ticks() - last_count_update) >= 1000:
                intro_count -= 1
                last_count_update = pygame.time.get_ticks()

        # update petarung
        fighter_1.update()
        fighter_2.update()

        # menggambar petarung
        fighter_1.draw(screen)
        fighter_2.draw(screen)

        # check untuk kekalahan pemain
        if round_over == False:
            if fighter_1.alive == False:
                score[1] += 1
                round_over = True
                round_over_time = pygame.time.get_ticks()
            elif fighter_2.alive == False:
                score[0] += 1
                round_over = True
                round_over_time = pygame.time.get_ticks()
        else:
            # menampilkan gambar kemenangan
            screen.blit(victory_img, (360, 150))
            if pygame.time.get_ticks() - round_over_time > ROUND_OVER_COOLDOWN:
                round_over = False
                intro_count = 3
                fighter_1 = Fighter(1, 200, 310, False, WARRIOR_DATA,
                                    warrior_sheet, WARRIOR_ANIMATION_STEPS, sword_fx)
                fighter_2 = Fighter(2, 700, 310, True, WIZARD_DATA,
                                    wizard_sheet, WIZARD_ANIMATION_STEPS, magic_fx)

        # event handler
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                run = False

        # update display
        pygame.display.update()
      # exit
    pygame.quit()


while True:
    for event in pygame.event.get():
        # menghapus/mengosongkan layar
        screen.fill((0, 0, 0))
        draw_bg()
        draw_text("Low Budget Street Fighter", count_font, RED, SCREEN_WIDTH //
                  2 - count_font.size("Low Budget Street Fighter")[0] // 2, 50)
        # gambar tombol start
        pygame.draw.rect(screen, YELLOW, start_button_rect)
        # gambar tombol keluar
        pygame.draw.rect(screen, YELLOW, exit_button_rect)
        draw_text("Start", score_font, RED, start_button_rect.centerx - score_font.size(
            "Start")[0] // 2, start_button_rect.centery - score_font.size("Start")[1] // 2)
        draw_text("Exit", score_font, RED, exit_button_rect.centerx - score_font.size(
            "Exit")[0] // 2, exit_button_rect.centery - score_font.size("Exit")[1] // 2)
        pygame.display.update()
        run = True
        while run:
            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    run = False

            clock.tick(FPS)

            if game_state == MENU:

                # event handling untuk layar menu
                for event in pygame.event.get():
                    if event.type == pygame.QUIT:
                        run = False
                    elif event.type == pygame.MOUSEBUTTONDOWN:
                        # klik kiri mouse
                        if event.button == 1:
                            mouse_pos = pygame.mouse.get_pos()
                            if start_button_rect.collidepoint(mouse_pos):
                                game_state = GAME
                            elif exit_button_rect.collidepoint(mouse_pos):
                                run = False

            elif game_state == GAME:

                # menggambar background
                draw_bg()
                runGame()
      # exit
        pygame.quit()
