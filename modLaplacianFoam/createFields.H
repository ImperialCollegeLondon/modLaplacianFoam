Info<< "Reading field T\n" << endl;

volScalarField T
(
    IOobject
    (
        "T",
        runTime.timeName(),
        mesh,
        IOobject::MUST_READ,
        IOobject::AUTO_WRITE
    ),
    mesh
);


Info<< "Reading field V\n" << endl;

volScalarField V
(
    IOobject
    (
        "V",
        runTime.timeName(),
        mesh,
        IOobject::MUST_READ,
        IOobject::AUTO_WRITE
    ),
    mesh
);

dimensionedScalar sigma("sigma", dimensionSet(-1, -3, 3, 0, 0, 2, 0), 1.5); 
dimensionedScalar epsilon("epsilon", dimensionSet(-1, -3, 4, 0, 0, 2, 0), 2.2); 

dimensionedScalar rho("rho", dimensionSet(1, 3, 0, 0, 0, 0, 0), 3.0); 
dimensionedScalar Cp("Cp", dimensionSet(1, 2, -2, -1, 0, 0, 0), 3.0); 

Info<< "Reading transportProperties\n" << endl;

IOdictionary transportProperties
(
    IOobject
    (
        "transportProperties",
        runTime.constant(),
        mesh,
        IOobject::MUST_READ_IF_MODIFIED,
        IOobject::NO_WRITE
    )
);


Info<< "Reading diffusivity DT\n" << endl;

dimensionedScalar DT
(
    transportProperties.lookup("DT")
);
