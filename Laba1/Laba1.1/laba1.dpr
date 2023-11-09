Program laba1;

uses
  SysUtils;

Var
  X1, Y1, X2, Y2, X3, Y3, R, Side1, Side2: Real;
  IsCorrect: Boolean;

Begin

    Repeat
      IsCorrect := True;
      Write('Введите координаты нижней левой точки прямоугольника: ');
      Try
        Readln(X1, Y1);
      Except
        Writeln('Введенные данные не удовлетворяют условию. Повторите попытку.');
        IsCorrect := False;
      End;
    Until IsCorrect;
    Repeat
      IsCorrect := True;
      Write('Ведите координаты верхней правой точки прямоугольника: ');
      Try
        Readln(X2, Y2);
      Except
        Writeln('Введенные данные не удовлетворяют условию. Повторите попытку.');
        IsCorrect := False;
      End;

      If (IsCorrect = True) And ((X1 > X2) or (Y1 > Y2)) Then
      Begin
        Writeln('Ошибка! X1 должно быть меньше X2, и Y1 должно быть меньше Y2');
        IsCorrect := False;
      End;
  Until IsCorrect;
  Repeat
    IsCorrect := True;
    Write('Ведите координаты центра круга и его радиус: ');
    Try
      Readln(X3, Y3, R);
    Except
      Writeln('Введенные данные не удовлетворяют условию. Повторите попытку.');
      IsCorrect := False;
    End;
  Until IsCorrect;
  Side1 := X2 - X1;
  Side2 := Y2 - Y1;
  if (X1 < X3) and (X3 < X2) and (Y1 < Y3) and (Y3 < Y2) and (2 * R < abs(Side1)
    ) or (2 * R = abs(Side1)) and (2 * R < abs(Side2)) or (2 * R = abs(Side2))
  then
    Writeln('Принадлежит области прямоугольника.')
  else
    Writeln('Не принадлежит области прямоугольника.');
  Readln;

End.
