36.4 Практическая работа
Цель задания
Повторить работу с виджетами, которые были изучены в модуле.

Что нужно сделать
Давайте соберём все знания, полученные в данном модуле в одной программе. 
Для этого создадим приложение, которое содержит в окне круг, меняющий свой цвет в зависимости от положения ползунка. 
Если ползунок установлен в положение 0—33,  то круг имеет зелёный цвет, если 33—66 — жёлтый, далее красный.

1. Виджет, который рисует круг, можно сделать наследником QWidget.
Теперь не надо переопределять keyPressEvent, как мы это сделали для кнопки во время урока.
Мы лишь хотим рисовать виджет особым образом, реагировать на нажатия он не будет.

2. Нам потребуется три png-файла, которые соответствуют трём кружкам разных цветов
(можете самостоятельно нарисовать их в Paint или взять готовые в материалах к уроку).

3. Чтобы расположить вертикально круг и ползунок (QSlider), нам потребуется добавить эти два виджета в QVBoxLayout
 (оба виджета расположены в каком-либо родительском QWidget, как было в примере с менеджерами компоновки).

4. Рекомендуем сделать для окна setFixedSize (200, 250), чтобы круг оставался кругом.

5. Метод minimumSizeHint может возвращать QSize(100, 100), а вот метод sizeHint можно не переопределять.

6. Удобно будет иметь три метода для смены цвета. Они будут напоминать методы опускания/поднятия кнопки из примера с красной кнопкой.

7. Чтобы связать изменения значений слайдера с цветом круга, можно написать небольшую лямбда-функцию.
Она будет проверять диапазон, в который попадает новое значение, и устанавливать соответствующий ему цвет, меняя картинку на одну из трёх.