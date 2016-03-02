# Shogi
## Задание
 Необходимо написать приложение позваолящее играть в Сёги (японские шахматы).
 
## Концепция (vision statement)
Созданное приложение должно предполагать возможность игры двух игроков (человека и человека или человека и компьютера). Кроме того, необходимо реализовать систему сохранения и загрузки игровых партий. Также, приложение должно обладать графическим интерфейсом, позволяющим выполнять вышеперечисленные действия.

## Правила игры
Доска сёги – 9x9 клеток, нумерующихся сверху вниз и справа налево. Клетки имеют прямоугольную форму, никак не обозначены и не имеют цвета. «Сверху» расставляются в три ряда белые фигуры – пятиугольные дощечки с обозначениями фигур.  Играют два игрока. «Белые» и «черные» – это обозначение играющих, фигуры в сёги одного цвета, принадлежность последних определяется направлением острого угла дощечки. Фигура всегда устанавливается острой стороной к противнику. У каждого игрока по 20 фигур 8 наименований, отличающихся друг от друга своей ценностью, силой и рисунком ходов.

У каждой стороны есть один король, одна ладья, один слон, два золотых генерала, два серебряных генерала, два коня, два копья и девять пешек. В крайнем ряду, рядом с копьями располагаются кони. Рядом с конями – серебряные генералы. Рядом с серебряными генералами – золотые генералы. В центре, между двумя золотыми генералами находится король. На втором ряду – только две фигуры. Перед конем с левой стороны находится слон. Перед конем с правой стороны – ладья. В третьем ряду расположены девять пешек.
	
###Порядок игры
Игроки делают ходы поочередно. Первые ходят чёрные. Ход представляет собой перемещение одной из фигур своего цвета, имеющихся на доске на любое разрешенное поле согласно правилам передвижения фигур или выставление (сброс) фигуры находящейся в резерве. Фигуры «в резерве» (или по-другому «в руке») – это фигуры, взятые (сбитые) у противника.

В сёги при достижении фигурами специальной зоны (лагерь противника) они могут быть усилены (превращены). При превращении фигура переворачивается. В сёги усилиться может любая фигура кроме короля и золотого генерала.

Цель игры – поставить мат королю противника. Считается, что поставлен мат, когда король находится под ударом вражеской фигуры, т.е. находится в поле, куда может походить вражеская фигура, а возможности защититься или уйти нет.

###Взятие фигур

«Взятие» – это ход на поле, занятое фигурой противника. В этом случае фигура противника снимается с доски и размещается рядом с ней. В отличие от шахмат, где взятые фигуры удаляются до конца игры, в сёги они могут в дальнейшем быть использованы как свои. Эти фигуры находятся в «резерве» («в руке») и в любой момент такая фигура может быть выставлена (сброшена) на любое свободное поле. 

###Ходы фигур
 * Король (яп. 王将  «королевский генерал») 	

 Ходит как шахматный король — на одно поле в любом направлении.

 * Ладья (яп. 飛車, «летающая колесница») 	

	Ходит как шахматная ладья — на любое количество полей по горизонтали и вертикали. 	
	
	После превращения:
	
	Дракон (яп. 竜王 , «королевский дракон»).
	Ходит и как ладья, и как король.
	
 *	Слон (яп. 角行 , «угловой ходок»). 	

 Ходит как шахматный слон — на любое число полей по диагонали. 
 
 После превращения: 
 
 Лошадь (яп. 竜馬, «дракон-лошадь»). 	
	Ходит и как слон, и как король.
	
 * Золотой генерал (яп. 金将). 	

	Ходит на любое соседнее поле, кроме полей сзади по диагонали.
	
 * Серебряный генерал (яп. 銀将). 	

	Ходит на любое соседнее поле, кроме полей справа, слева и снизу. 
	
	После превращения:
	
	Перевёрнутый серебряный генерал (яп. 成銀).	Ходит как золотой генерал.
	
 * Конь (яп. 桂馬, «деревянный конь»). 

	Ходит буквой «Т» вперёд, то есть на два поля вперёд, и сразу на одно поле вправо или влево. Единственная фигура сёги, которая может    перескакивать через другие фигуры. 
	
	После превращения:
	
	Перевёрнутый конь (яп. 成桂).	Ходит как золото.

 * Копьё (яп. 香車, «ароматная колесница»). 

	Ходит на любое число полей прямо вперёд. Иногда, также, называется стрела или пика.
	
	После переворта:
	
	Перевёрнутое копьё (яп. 成香).
	Ходит как золото. 
	
 * Пешка (яп. 歩兵, «пехотинец»). 

	Ходит на одно поле прямо вперёд. Бьёт так же, как и ходит. 	
	
	После переворта:
	
 Перевёрнутая пешка (яп. と金, «как золото»).	Ходит как золото.

###Превращение

Когда фигура достигает лагеря противника (зоны превращения) (см. Основные зоны игрового поля) у неё возникает возможность стать превращенной (исключение составляют лишь король и золотой генерал, которые превращаться не могут). Но превращение не является обязательным, оно может быть осуществлено при любом очередном ходе (сначала передвижение, затем превращение), но только если эта фигура по-прежнему находится в лагере противника. Фигура может быть также превращена за пределами зоны превращения – в момент выхода из нее. При превращении фигура переворачивается сразу после хода и приобретает свойства превращенной фигуры. Для большинства фигур это способности золотого генерала, ладья и слон превращаются соответственно в короля-дракона и коня-дракона. Обратное превращение не допускается.

Превращение обязательно для фигур, которые не могут продолжать игру со свойствами непревращенных фигур, такие случаи возможны для пешки, копья и коня.

Если превращенная фигура взята противником, то она теряет свои способности и приобретает первоначальные свойства.
Выставление

Фигура, находящаяся «в руке», может быть выставлена (сброшена) на любое свободное поле доски, что считается очередным ходом. Фигура сбрасывается только в непревращённом виде (даже если она была превращенной до взятия). Нельзя выставляться на поле занятое фигурой противника. После выставления фигура приобретает те же права, что и находящиеся на доске. Если фигура сброшена в лагерь противника, она может превратиться, только сделав следующий ход, даже если он сделан на поле за пределами зоны превращения.

###Запрещенные ходы

Следующие ходы запрещены:

 * Сдваивание пешек (нифу). Когда на одной из вертикалей имеется не превращённая пешка, не разрешается выставлять другую пешку на ту же вертикаль.

 * Выставление пешки с матом (учи-фу-тсумэ). Не разрешается выставлять пешку с матом королю противника. Однако объявлять мат очередным ходом пешки, находящейся на доске, разрешено.

К запрещенным ходам также относятся:
 * Неправильные ходы (кинтэ).

 *Выставленная фигура заперта. Запрещается сбрасывать фигуры таким образом, что у них будет отсутствовать возможность хода в дальнейшем. 

Игроку, сделавшему запрещенный ход, может быть присуждено поражение.

###Ничья

Большинство партий в сёги оканчиваются либо матом, либо признанием поражения одним из игроков, однако ничья также возможна.

####Повторение
Пытаясь избежать проигрыша или ухудшения позиции, возможные как для одной, так и для другой стороны, игроки могут сознательно  повторять ходы.
Ничья объявляется при четырёхкратном повторении одновременно следующих трёх условий:

 * позиция на доске;
 * фигуры «в руке»;
 * 


#####Вечный шах
В сёги нельзя форсировать ничью вечным шахом, как в шахматах. Если в результате серии шахов одного из соперников, позиция была повторена троекратно, то шахующий обязан изменить свой ход, иначе ему будет засчитано поражение.

## Минимально работоспособный продукт (Minimum viable product)

## Диаграмма прецедентов использования
![Диаграмма прецедентов использования](https://github.com/lezhenin/Shogi/blob/master/report/diagrams/UseCaseDiagram1.png)
## Диаграмма последовательностей

## Диаграмма компонентов
![Диаграмма компонентов](https://github.com/lezhenin/Shogi/blob/master/report/diagrams/ComponentDiagram1.png)
