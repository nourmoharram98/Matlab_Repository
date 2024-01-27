function trafficLightGUI()
    % Create a figure for the GUI
    fig = figure('Name','Traffic light','NumberTitle','off');
    % Create axes for the rectangular traffic light shape
    axis([0,12,0,12]);
    mainRect = rectangle('Position', [2, 2, 2, 4], 'Curvature', [0.1, 0.1], 'FaceColor', 'k');
    rectangle_axis=rectangle('position',[2.75,0,0.5,2],'FaceColor','k');
    % Create circle LEDs for red, orange, and green lights
    redLED = rectangle('Position', [2.75, 5, 0.5, 0.5], 'Curvature', [1, 1], 'FaceColor', 'r');
    orangeLED = rectangle('Position', [2.75, 4, 0.5, 0.5], 'Curvature', [1, 1], 'FaceColor', [1, 0.5, 0]);
    greenLED = rectangle('Position', [2.75, 3, 0.5, 0.5], 'Curvature', [1, 1], 'FaceColor', 'g');

    % Loop to control the traffic light
    while ishandle(fig)
        % Red light for 3 seconds
        set(redLED, 'FaceColor', 'r');
        set(orangeLED, 'FaceColor', 'k');
        set(greenLED, 'FaceColor', 'k');
        pause(3);

        % Orange light for 3 seconds
        set(redLED, 'FaceColor', 'k');
        set(orangeLED, 'FaceColor', [1, 0.5, 0]);
        set(greenLED, 'FaceColor', 'k');
        pause(3);

        % Green light for 3 seconds
        set(redLED, 'FaceColor', 'k');
        set(orangeLED, 'FaceColor', 'k');
        set(greenLED, 'FaceColor', 'g');
        pause(3);
    end
end
