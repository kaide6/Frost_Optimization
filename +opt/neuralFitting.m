function neuralFitting(t, x, hiddenLayerSize, fname)
    % Solve an Input-Output Fitting problem with a Neural Network
    % Script generated by Neural Fitting app
    % Created 10-Jul-2017 15:04:58

    % Choose a Training Function
    % For a list of all training functions type: help nntrain
    % 'trainlm' is usually fastest.
    % 'trainbr' takes longer but may be better for challenging problems.
    % 'trainscg' uses less memory. Suitable in low memory situations.
    trainFcn = 'trainbr';  % Levenberg-Marquardt backpropagation.

    % Create a Fitting Network
    net = fitnet(hiddenLayerSize,trainFcn);

    % Choose Input and Output Pre/Post-Processing Functions
    % For a list of all processing functions type: help nnprocess
    net.input.processFcns = {'removeconstantrows','mapminmax'};
    net.output.processFcns = {'removeconstantrows','mapminmax'};

    % Setup Division of Data for Training, Validation, Testing
    % For a list of all data division functions type: help nndivide
    net.divideFcn = 'dividerand';  % Divide data randomly
    net.divideMode = 'sample';  % Divide up every sample
    net.divideParam.trainRatio = 100/100;
    net.divideParam.valRatio = 0/100;
    net.divideParam.testRatio = 0/100;

    % Choose a Performance Function
    % For a list of all performance functions type: help nnperformance
    net.performFcn = 'mse';  % Mean Squared Error

    % Choose Plot Functions
    % For a list of all plot functions type: help nnplot
    net.plotFcns = {'plotperform','plottrainstate','ploterrhist', ...
        'plotregression', 'plotfit'};

    % Train the Network
    [net,tr] = train(net,x,t);

    % Test the Network
    y = net(x);
    e = gsubtract(t,y);
    performance = perform(net,t,y)

    % Recalculate Training, Validation and Test Performance
    trainTargets = t .* tr.trainMask{1};
    valTargets = t .* tr.valMask{1};
    testTargets = t .* tr.testMask{1};
    trainPerformance = perform(net,trainTargets,y)
    valPerformance = perform(net,valTargets,y)
    testPerformance = perform(net,testTargets,y)

    % View the Network
    %view(net)

    % Plots
    % Uncomment these lines to enable various plots.
    %figure, plotperform(tr)
    %figure, plottrainstate(tr)
    %figure, ploterrhist(e)
    %figure, plotregression(t,y)
    %figure, plotfit(net,x,t)

    if (true)
        % Generate a matrix-only MATLAB function for neural network code
        % generation with MATLAB Coder tools.
        genFunction(net,fname,'MatrixOnly','yes');
        %y = myNeuralNetworkFunction(x);
    end
end
