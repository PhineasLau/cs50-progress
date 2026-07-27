#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int rows = 0; rows < height; rows++)
    {
        for (int columns = 0; columns < width; columns++)
        {
            float total = image[rows][columns].rgbtRed + image[rows][columns].rgbtGreen +
                          image[rows][columns].rgbtBlue;
            int average = round(total / 3);
            image[rows][columns].rgbtRed = average;
            image[rows][columns].rgbtGreen = average;
            image[rows][columns].rgbtBlue = average;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    int middle = width / 2;
    for (int rows = 0; rows < height; rows++)
    {
        for (int columns = 0; columns < middle; columns++)
        {
            RGBTRIPLE buffer = image[rows][width - columns - 1];
            image[rows][width - columns - 1] = image[rows][columns];
            image[rows][columns] = buffer;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE buffer_image[height][width];
    for (int h = 0; h < height; h++)
    {
        for (int w = 0; w < width; w++)
        {
            buffer_image[h][w] = image[h][w];
        }
    }
    for (int rows = 0; rows < height; rows++)
    {
        for (int columns = 0; columns < width; columns++)
        {
            float total_red = 0;
            float total_green = 0;
            float total_blue = 0;
            int average_red = 0;
            int average_green = 0;
            int average_blue = 0;
            int pixels_around = 0;
            for (int i = -1; i < 2; i++)
            {
                for (int j = -1; j < 2; j++)
                {
                    if (0 <= rows + i && height > rows + i && 0 <= columns + j &&
                        width > columns + j)
                    {
                        pixels_around += 1;
                        total_red += buffer_image[rows + i][columns + j].rgbtRed;
                        total_green += buffer_image[rows + i][columns + j].rgbtGreen;
                        total_blue += buffer_image[rows + i][columns + j].rgbtBlue;
                    }
                }
            }
            average_red = round(total_red / pixels_around);
            average_green = round(total_green / pixels_around);
            average_blue = round(total_blue / pixels_around);

            // final set colour
            image[rows][columns].rgbtRed = average_red;
            image[rows][columns].rgbtGreen = average_green;
            image[rows][columns].rgbtBlue = average_blue;
        }
    }
    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE buffer_image[height][width];
    for (int h = 0; h < height; h++)
    {
        for (int w = 0; w < width; w++)
        {
            buffer_image[h][w] = image[h][w];
        }
    }

    for (int rows = 0; rows < height; rows++)
    {
        for (int columns = 0; columns < width; columns++)
        {
            int gx_rgbtRed = 0;
            int gx_rgbtGreen = 0;
            int gx_rgbtBlue = 0;
            int gy_rgbtRed = 0;
            int gy_rgbtGreen = 0;
            int gy_rgbtBlue = 0;
            // gx
            for (int j = -1; j < 2; j++)
            {
                for (int i = -1; i < 2; i++)
                {
                    if (0 <= rows + i && height > rows + i && 0 <= columns + j &&
                        width > columns + j)
                    {
                        if (j == -1)
                        {
                            if (i == -1 || i == 1)
                            {
                                gx_rgbtRed += (buffer_image[rows + i][columns + j].rgbtRed * -1);
                                gx_rgbtGreen +=
                                    (buffer_image[rows + i][columns + j].rgbtGreen * -1);
                                gx_rgbtBlue += (buffer_image[rows + i][columns + j].rgbtBlue * -1);
                            }
                            else
                            {
                                gx_rgbtRed += (buffer_image[rows + i][columns + j].rgbtRed * -2);
                                gx_rgbtGreen +=
                                    (buffer_image[rows + i][columns + j].rgbtGreen * -2);
                                gx_rgbtBlue += (buffer_image[rows + i][columns + j].rgbtBlue * -2);
                            }
                        }
                        if (j == 1)
                        {
                            if (i == -1 || i == 1)
                            {
                                gx_rgbtRed += buffer_image[rows + i][columns + j].rgbtRed;
                                gx_rgbtGreen += buffer_image[rows + i][columns + j].rgbtGreen;
                                gx_rgbtBlue += buffer_image[rows + i][columns + j].rgbtBlue;
                            }
                            else
                            {
                                gx_rgbtRed += (buffer_image[rows + i][columns + j].rgbtRed * 2);
                                gx_rgbtGreen += (buffer_image[rows + i][columns + j].rgbtGreen * 2);
                                gx_rgbtBlue += (buffer_image[rows + i][columns + j].rgbtBlue * 2);
                            }
                        }
                    }
                }
            }
            // gy
            for (int i = -1; i < 2; i++)
            {
                for (int j = -1; j < 2; j++)
                {
                    if (0 <= rows + i && height > rows + i && 0 <= columns + j &&
                        width > columns + j)
                    {
                        if (i == -1)
                        {
                            if (j == -1 || j == 1)
                            {
                                gy_rgbtRed += (buffer_image[rows + i][columns + j].rgbtRed * -1);
                                gy_rgbtGreen +=
                                    (buffer_image[rows + i][columns + j].rgbtGreen * -1);
                                gy_rgbtBlue += (buffer_image[rows + i][columns + j].rgbtBlue * -1);
                            }
                            else
                            {
                                gy_rgbtRed += (buffer_image[rows + i][columns + j].rgbtRed * -2);
                                gy_rgbtGreen +=
                                    (buffer_image[rows + i][columns + j].rgbtGreen * -2);
                                gy_rgbtBlue += (buffer_image[rows + i][columns + j].rgbtBlue * -2);
                            }
                        }
                        if (i == 1)
                        {
                            if (j == -1 || j == 1)
                            {
                                gy_rgbtRed += buffer_image[rows + i][columns + j].rgbtRed;
                                gy_rgbtGreen += buffer_image[rows + i][columns + j].rgbtGreen;
                                gy_rgbtBlue += buffer_image[rows + i][columns + j].rgbtBlue;
                            }
                            else
                            {
                                gy_rgbtRed += (buffer_image[rows + i][columns + j].rgbtRed * 2);
                                gy_rgbtGreen += (buffer_image[rows + i][columns + j].rgbtGreen * 2);
                                gy_rgbtBlue += (buffer_image[rows + i][columns + j].rgbtBlue * 2);
                            }
                        }
                    }
                }
            }

            int squared_gx_rgbtRed = gx_rgbtRed * gx_rgbtRed;
            int squared_gx_rgbtGreen = gx_rgbtGreen * gx_rgbtGreen;
            int squared_gx_rgbtBlue = gx_rgbtBlue * gx_rgbtBlue;
            int squared_gy_rgbtRed = gy_rgbtRed * gy_rgbtRed;
            int squared_gy_rgbtGreen = gy_rgbtGreen * gy_rgbtGreen;
            int squared_gy_rgbtBlue = gy_rgbtBlue * gy_rgbtBlue;

            int final_rgbtRed = (int) round(sqrt(squared_gx_rgbtRed + squared_gy_rgbtRed));
            int final_rgbtGreen = (int) round(sqrt(squared_gx_rgbtGreen + squared_gy_rgbtGreen));
            int final_rgbtBlue = (int) round(sqrt(squared_gx_rgbtBlue + squared_gy_rgbtBlue));
            image[rows][columns].rgbtRed = (final_rgbtRed > 255) ? 255 : final_rgbtRed;
            image[rows][columns].rgbtGreen = (final_rgbtGreen > 255) ? 255 : final_rgbtGreen;
            image[rows][columns].rgbtBlue = (final_rgbtBlue > 255) ? 255 : final_rgbtBlue;
        }
    }
    return;
}
