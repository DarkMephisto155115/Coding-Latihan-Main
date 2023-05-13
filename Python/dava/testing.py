import pygame
import random

# Initialize Pygame
pygame.init()

# Set up the game window
window_width = 400
window_height = 400
game_window = pygame.display.set_mode((window_width, window_height))
pygame.display.set_caption('Snake Game')

# Set up the snake and food
snake_position = [100, 50]
snake_body = [[100, 50], [90, 50], [80, 50]]
food_position = [random.randrange(1, (window_width//10)) * 10,
                 random.randrange(1, (window_height//10)) * 10]
food_spawned = True

# Set up the game loop
game_over = False
clock = pygame.time.Clock()

# Main game loop
while not game_over:
    # Event handling
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            game_over = True
        elif event.type == pygame.KEYDOWN:
            if event.key == pygame.K_ESCAPE:
                game_over = True

    # Move the snake
    if snake_position == food_position:
        food_spawned = False
    else:
        snake_body.pop()

    if not food_spawned:
        food_position = [random.randrange(1, (window_width//10)) * 10,
                         random.randrange(1, (window_height//10)) * 10]
        food_spawned = True

    if snake_position[0] < 0 or snake_position[0] > window_width-10 or \
       snake_position[1] < 0 or snake_position[1] > window_height-10:
        game_over = True

    if snake_position in snake_body[1:]:
        game_over = True

    snake_body.insert(0, list(snake_position))

    keys = pygame.key.get_pressed()
    if keys[pygame.K_LEFT]:
        snake_position[0] -= 10
    if keys[pygame.K_RIGHT]:
        snake_position[0] += 10
    if keys[pygame.K_UP]:
        snake_position[1] -= 10
    if keys[pygame.K_DOWN]:
        snake_position[1] += 10

    # Draw the game screen
    game_window.fill((0, 0, 0))
    for pos in snake_body:
        pygame.draw.rect(game_window, (0, 255, 0),
                         pygame.Rect(pos[0], pos[1], 10, 10))
    pygame.draw.rect(game_window, (255, 0, 0), pygame.Rect(
        food_position[0], food_position[1], 10, 10))

    pygame.display.update()
    clock.tick(15)

# Quit Pygame
pygame.quit()
