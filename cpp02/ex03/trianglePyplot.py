import matplotlib.pyplot as plt

# Define the points of the triangle
a = (0, 0)
b = (1, 1)
c = (0, 1)

# Create lists of x and y coordinates for plotting
x_coords = [a[0], b[0], c[0], a[0]]  # Closing the triangle by repeating the first point
y_coords = [a[1], b[1], c[1], a[1]]

# Plotting the triangle
plt.figure(figsize=(5, 5))
plt.plot(x_coords, y_coords, marker='o')
plt.fill(x_coords, y_coords, alpha=0.2)
plt.text(a[0], a[1], 'A', fontsize=12, ha='right')
plt.text(b[0], b[1], 'B', fontsize=12, ha='left')
plt.text(c[0], c[1], 'C', fontsize=12, ha='right')
plt.title('Triangle ABC')
plt.grid(True)
plt.axis('equal')  # Ensure the aspect ratio is equal to make triangle look correct
plt.show()

