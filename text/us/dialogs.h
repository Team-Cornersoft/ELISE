// Parameters: dialog enum ID, (unused), lines per box, left offset, width

#ifdef VERSION_EU
#define COMRADES "friends"
#define PLASTERED "splattered"
#define SCAM_ME "cheat!\n"
#define SCRAM "get lost"
#else
#define COMRADES "comrades"
#define PLASTERED "plastered"
#define SCAM_ME "scam\nME. "
#define SCRAM "scram--"
#endif

DEFINE_DIALOG(DIALOG_000, 1, 6, 30, 200, _("\
Wow! You're smack in the\n\
middle of the battlefield.\n\
You'll find the Power\n\
Stars that Bowser stole\n\
inside the painting\n\
worlds.\n\
First, talk to the\n\
Bob-omb Buddy. (Press [B]\n\
to talk.) He'll certainly\n\
help you out, and so will\n\
his " COMRADES " in other\n\
areas.\n\
To read signs, stop, face\n\
them and press [B]. Press [A]\n\
or [B] to scroll ahead. You\n\
can talk to some other\n\
characters by facing them\n\
and pressing [B]."))

DEFINE_DIALOG(DIALOG_001, 1, 4, 95, 200, _("\
Watch out! If you wander\n\
around here, you're liable\n\
to be " PLASTERED " by a\n\
water bomb!\n\
Those enemy Bob-ombs love\n\
to fight, and they're\n\
always finding ways to\n\
attack.\n\
This meadow has become\n\
a battlefield ever since\n\
the Big Bob-omb got his\n\
paws on the Power Star.\n\
Can you recover the Star\n\
for us? Cross the bridge\n\
and go left up the path\n\
to find the Big Bob-omb.\n\
Please come back to see\n\
me after you've retrieved\n\
the Power Star!"))

/* 

    Nosemen dialogues

*/

DEFINE_DIALOG(DIALOG_002, 8, 3, 30, 270, _("\
\n\
So... Alone...\n\
"))

DEFINE_DIALOG(DIALOG_003, 8, 3, 30, 270, _("\
\n\
We saw it all...\n\
"))

DEFINE_DIALOG(DIALOG_004, 1, 1, 1, 1, _("\
"))

DEFINE_DIALOG(DIALOG_005, 8, 3, 30, 270, _("\
\n\
Why did noone help...?\n\
"))

DEFINE_DIALOG(DIALOG_006, 8, 3, 30, 270, _("\
\n\
The noseman doesn't speak, it only weeps.\n\
"))

DEFINE_DIALOG(DIALOG_007, 8, 3, 30, 270, _("\
\n\
Did he suffer...?\n\
"))

DEFINE_DIALOG(DIALOG_008, 8, 3, 30, 270, _("\
\n\
Are we next...?\n\
"))

DEFINE_DIALOG(DIALOG_009, 8, 3, 30, 270, _("\
\n\
He was never able to catch it...\n\
"))

DEFINE_DIALOG(DIALOG_010, 8, 3, 30, 270, _("\
\n\
The tree... is wilting...?\n\
"))

DEFINE_DIALOG(DIALOG_011, 8, 3, 30, 270, _("\
\n\
It's a curse...\n\
"))

DEFINE_DIALOG(DIALOG_012, 8, 3, 30, 270, _("\
\n\
Why us...?\n\
"))

DEFINE_DIALOG(DIALOG_013, 8, 3, 30, 270, _("\
\n\
We were... too late...\n\
"))

DEFINE_DIALOG(DIALOG_014, 8, 3, 30, 270, _("\
\n\
Eternal heartache...\n\
"))

// MISC. nosemen dialogues --- Keep for later: <COL_FF9FFFFF>ELISE:<COL_-------->

DEFINE_DIALOG(DIALOG_015, 8, 4, 30, 270, _("\
Sweetie, don't forget to wash your hands after\n\
you went to the toilet.\n\
\n\
"))

DEFINE_DIALOG(DIALOG_016, 8, 4, 30, 270, _("\
Ehm...\n\
\n\
Sure, mom, will do.\n\
"))

// Elise nosemen dialogues

DEFINE_DIALOG(DIALOG_017, 8, 4, 30, 270, _("\
Oh, poor Sammy...\n\
You were a noisy but good neighbourhood cat.\n\
Rest in piece, buddy.\n\
"))

DEFINE_DIALOG(DIALOG_018, 8, 7, 30, 270, _("\
Man, how many nights this dog's barking didn't\n\
wake everyone up.\n\
I can count them on my hands.\n\
Still, I'll never forget your loyalty.\n\
\n\
Let's play together again someday, okay?\n\
"))

DEFINE_DIALOG(DIALOG_019, 8, 6, 30, 270, _("\
Dad used to have it out for this bird>\n\
Saying it's some kind of reptile from the depths\n\
of the dankest swamps.\n\
\n\
I wonder if it's still alive and kicking?\n\
"))


DEFINE_DIALOG(DIALOG_020, 8, 8, 30, 270, _("\
I always found it odd that card decks came\n\
with a joker card. It's so uncreative!\n\
Behold, the next best thing: The cat card!\n\
though this card should have been placed\n\
before the jack, not after it...\n\
\n\
It's just as sneaky as a real cat.\n\
"))


DEFINE_DIALOG(DIALOG_021, 8, 7, 30, 270, _("\
Mom...\n\
\n\
She must've been so devistated.\n\
Of course she doesn't want to see me like this.\n\
\n\
Was I wrong for making that wish...?\n\
"))


/* Nosedad dialogue */

DEFINE_DIALOG(DIALOG_022, 8, 3, 30, 270, _("\
...Don't be afraid, Elise...\n\
I will always watch over you...\n\
"))

DEFINE_DIALOG(DIALOG_023, 8, 3, 30, 270, _("\
\n\
Dad...\n\
"))

/* 

    Vanilla dialogue 

*/

DEFINE_DIALOG(DIALOG_024, 1, 5, 95, 200, _("\
You need Star power to\n\
open this door. Recover a\n\
Power Star from an enemy\n\
inside one of the castle's\n\
paintings."))

DEFINE_DIALOG(DIALOG_025, 1, 4, 95, 200, _("\
It takes the power of\n\
3 Stars to open this\n\
door. You need [%] more\n\
Stars."))

DEFINE_DIALOG(DIALOG_026, 1, 4, 95, 200, _("\
It takes the power of\n\
8 Stars to open this\n\
door. You need [%] more\n\
Stars."))

DEFINE_DIALOG(DIALOG_027, 1, 4, 95, 200, _("\
It takes the power of\n\
30 Stars to open this\n\
door. You need [%] more\n\
Stars."))

DEFINE_DIALOG(DIALOG_028, 1, 4, 95, 200, _("\
It takes the power of\n\
50 Stars to open this\n\
door. You need [%] more\n\
Stars."))

DEFINE_DIALOG(DIALOG_029, 1, 5, 95, 200, _("\
To open the door that\n\
leads to the 『endless』\n\
stairs, you need 70\n\
Stars.\n\
Bwa ha ha!"))

DEFINE_DIALOG(DIALOG_030, 1, 6, 30, 200, _("\
Hello! The Lakitu Bros.,\n\
cutting in with a live\n\
update on Mario's\n\
progress. He's about to\n\
learn a technique for\n\
sneaking up on enemies.\n\
The trick is this: He has\n\
to walk very slowly in\n\
order to walk quietly.\n\
\n\
\n\
\n\
And wrapping up filming\n\
techniques reported on\n\
earlier, you can take a\n\
look around using [C]> and\n\
[C]<. Press [C]| to view the\n\
action from a distance.\n\
When you can't move the\n\
camera any farther, the\n\
buzzer will sound. This is\n\
the Lakitu Bros.,\n\
signing off."))

DEFINE_DIALOG(DIALOG_031, 1, 5, 30, 200, _("\
No way! You beat me...\n\
again!! And I just spent\n\
my entire savings on\n\
these new Koopa\n\
Mach 1 Sprint shoes!\n\
Here, I guess I have to\n\
hand over this Star to\n\
the winner of the race.\n\
Congrats, Mario!"))

DEFINE_DIALOG(DIALOG_032, 1, 5, 30, 200, _("\
If you get the Wing Cap,\n\
you can fly! Put the cap\n\
on, then do a Triple\n\
Jump--jump three times\n\
in a row--to take off.\n\
You can fly even higher\n\
if you blast out of a\n\
cannon wearing the\n\
Wing Cap!\n\
\n\
Use the [C] Buttons to look\n\
around while flying, and\n\
press [Z] to land."))

DEFINE_DIALOG(DIALOG_033, 1, 6, 30, 200, _("\
Ciao! You've reached\n\
Princess Toadstool's\n\
castle via a warp pipe.\n\
Using the controller is a\n\
piece of cake. Press [A] to\n\
jump and [B] to attack.\n\
Press [B] to read signs,\n\
too. Use the Control Stick\n\
in the center of the\n\
controller to move Mario\n\
around. Now, head for\n\
the castle."))

DEFINE_DIALOG(DIALOG_034, 1, 6, 30, 200, _("\
Good afternoon. The\n\
Lakitu Bros., here,\n\
reporting live from just\n\
outside the Princess's\n\
castle.\n\
\n\
Mario has just arrived\n\
on the scene, and we'll\n\
be filming the action live\n\
as he enters the castle\n\
and pursues the missing\n\
Power Stars.\n\
As seasoned cameramen,\n\
we'll be shooting from the\n\
recommended angle, but\n\
you can change the\n\
camera angle by pressing\n\
the [C] Buttons.\n\
If we can't adjust the\n\
view any further, we'll\n\
buzz. To take a look at\n\
the surroundings, stop\n\
and press [C]^.\n\
\n\
Press [A] to resume play.\n\
Switch camera modes with\n\
the [R] Button. Signs along\n\
the way will review these\n\
instructions.\n\
\n\
For now, reporting live,\n\
this has been the\n\
Lakitu Bros."))

DEFINE_DIALOG(DIALOG_035, 1, 5, 30, 200, _("\
There are four camera, or\n\
『[C],』 Buttons. Press [C]^\n\
to look around using the\n\
Control Stick.\n\
\n\
You'll usually see Mario\n\
through Lakitu's camera.\n\
It is the camera\n\
recommended for normal\n\
play.\n\
You can change angles by\n\
pressing [C]>. If you press\n\
[R], the view switches to\n\
Mario's camera, which\n\
is directly behind him.\n\
Press [R] again to return\n\
to Lakitu's camera. Press\n\
[C]| to see Mario from\n\
afar, using either\n\
Lakitu's or Mario's view."))

DEFINE_DIALOG(DIALOG_036, 1, 5, 30, 200, _("\
OBSERVATION PLATFORM\n\
Press [C]^ to take a look\n\
around. Don't miss\n\
anything!\n\
\n\
Press [R] to switch to\n\
Mario's camera. It\n\
always follows Mario.\n\
Press [R] again to switch\n\
to Lakitu's camera.\n\
Pause the game and\n\
switch the mode to 『fix』\n\
the camera in place while\n\
holding [R]. Give it a try!"))

DEFINE_DIALOG(DIALOG_037, 1, 2, 30, 200, _("\
I win! You lose!\n\
Ha ha ha ha!\n\
You're no slouch, but I'm\n\
a better sledder!\n\
Better luck next time!"))

DEFINE_DIALOG(DIALOG_038, 1, 3, 95, 200, _("\
Reacting to the Star\n\
power, the door slowly\n\
opens."))

DEFINE_DIALOG(DIALOG_039, 1, 4, 30, 200, _("\
No visitors allowed,\n\
by decree of\n\
the Big Bob-omb\n\
\n\
I shall never surrender my\n\
Stars, for they hold the\n\
power of the castle in\n\
their glow.\n\
They were a gift from\n\
Bowser, the Koopa King\n\
himself, and they lie well\n\
hidden within my realm.\n\
Not a whisper of their\n\
whereabouts shall leave\n\
my lips. Oh, all right,\n\
perhaps one hint:\n\
Heed the Star names at\n\
the beginning of the\n\
course.\n\
//--The Big Bob-omb"))

DEFINE_DIALOG(DIALOG_040, 1, 3, 30, 200, _("\
Warning!\n\
Cold, Cold Crevasse\n\
Below!"))

DEFINE_DIALOG(DIALOG_041, 1, 3, 30, 200, _("\
I win! You lose!\n\
Ha ha ha!\n\
\n\
That's what you get for\n\
messin' with Koopa the\n\
Quick.\n\
Better luck next time!"))

DEFINE_DIALOG(DIALOG_042, 1, 4, 30, 200, _("\
Caution! Narrow Bridge!\n\
Cross slowly!\n\
\n\
\n\
You can jump to the edge\n\
of the cliff and hang on,\n\
and you can climb off the\n\
edge if you move slowly.\n\
When you want to let go,\n\
either press [Z] or press\n\
the Control Stick in the\n\
direction of Mario's back.\n\
To climb up, press Up on\n\
the Control Stick. To\n\
scurry up quickly, press\n\
the [A] Button."))

DEFINE_DIALOG(DIALOG_043, 1, 5, 30, 200, _("\
If you jump and hold the\n\
[A] Button, you can hang on\n\
to some objects overhead.\n\
It's the same as grabbing\n\
a flying bird!"))

DEFINE_DIALOG(DIALOG_044, 1, 5, 95, 200, _("\
Whooo's there? Whooo\n\
woke me up? It's still\n\
daylight--I should be\n\
sleeping!\n\
\n\
Hey, as long as I'm\n\
awake, why not take a\n\
short flight with me?\n\
Press and hold [A] to grab\n\
on. Release [A] to let go.\n\
I'll take you wherever\n\
you want to go, as long\n\
as my wings hold out.\n\
Watch my shadow, and\n\
grab on."))

DEFINE_DIALOG(DIALOG_045, 1, 6, 95, 200, _("\
Whew! I'm just about\n\
flapped out. You should\n\
lay off the pasta, Mario!\n\
That's it for now. Press\n\
[A] to let go. Okay,\n\
bye byyyyyyeeee!"))

DEFINE_DIALOG(DIALOG_046, 1, 5, 30, 200, _("\
You have to master three\n\
important jumping\n\
techniques.\n\
First try the Triple Jump.\n\
\n\
Run fast, then jump three\n\
times, one, two, three.\n\
If you time the jumps\n\
right, you'll hop, skip,\n\
then jump really high.\n\
Next, go for distance\n\
with the Long Jump. Run,\n\
press [Z] to crouch then [A]\n\
to jump really far.\n\
\n\
To do the Wall Kick, press\n\
[A] to jump at a wall, then\n\
jump again when you hit\n\
the wall.\n\
\n\
Got that? Triple Jump,\n\
Long Jump, Wall Kick.\n\
Practice, practice,\n\
practice. You don't stand\n\
a chance without them."))

DEFINE_DIALOG(DIALOG_047, 1, 2, 95, 200, _("\
Hi! I'll prepare the\n\
cannon for you!"))

DEFINE_DIALOG(DIALOG_048, 1, 4, 30, 200, _("\
Snow Mountain Summit\n\
Watch for slippery\n\
conditions! Please enter\n\
the cottage first."))

DEFINE_DIALOG(DIALOG_049, 1, 5, 30, 200, _("\
Remember that tricky Wall\n\
Kick jump? It's a\n\
technique you'll have to\n\
master in order to reach\n\
high places.\n\
Use it to jump from wall\n\
to wall. Press the\n\
Control Stick in the\n\
direction you want to\n\
bounce to gain momentum.\n\
Practice makes perfect!"))

DEFINE_DIALOG(DIALOG_050, 1, 4, 30, 200, _("\
Hold [Z] to crouch and\n\
slide down a slope.\n\
Or press [Z] while in the\n\
air to Pound the Ground!\n\
If you stop, crouch, then\n\
jump, you'll do a\n\
Backward Somersault!\n\
Got that?\n\
There's more. Crouch and\n\
then jump to do a\n\
Long Jump! Or crouch and\n\
walk to...never mind."))

DEFINE_DIALOG(DIALOG_051, 1, 6, 30, 200, _("\
Climbing's easy! When you\n\
jump at trees, poles or\n\
pillars, you'll grab them\n\
automatically. Press [A] to\n\
jump off backward.\n\
\n\
To rotate around the\n\
object, press Right or\n\
Left on the Control Stick.\n\
When you reach the top,\n\
press Up to do a\n\
handstand!\n\
Jump off from the\n\
handstand for a high,\n\
stylin' dismount."))

DEFINE_DIALOG(DIALOG_052, 1, 5, 30, 200, _("\
Stop and press [Z] to\n\
crouch, then press [A]\n\
to do a high, Backward\n\
Somersault!\n\
\n\
To perform a Side\n\
Somersault, run, do a\n\
sharp U-turn and jump.\n\
You can catch lots of\n\
air with both jumps."))

DEFINE_DIALOG(DIALOG_053, 1, 5, 30, 200, _("\
Sometimes, if you pass\n\
through a coin ring or\n\
find a secret point in a\n\
course, a red number will\n\
appear.\n\
If you trigger five red\n\
numbers, a secret Star\n\
will show up."))

DEFINE_DIALOG(DIALOG_054, 1, 5, 30, 200, _("\
Welcome to the snow\n\
slide! Hop on! To speed\n\
up, press forward on the\n\
Control Stick. To slow\n\
down, pull back."))

DEFINE_DIALOG(DIALOG_055, 1, 4, 30, 200, _("\
Hey-ey, Mario, buddy,\n\
howzit goin'? Step right\n\
up. You look like a fast\n\
sleddin' kind of guy.\n\
I know speed when I see\n\
it, yes siree--I'm the\n\
world champion sledder,\n\
you know. Whaddya say?\n\
How about a race?\n\
Ready...\n\
\n\
//Go//// Don't Go"))

DEFINE_DIALOG(DIALOG_056, 1, 6, 30, 200, _("\
You brrrr-oke my record!\n\
Unbelievable! I knew\n\
that you were the coolest.\n\
Now you've proven\n\
that you're also the\n\
fastest!\n\
I can't award you a gold\n\
medal, but here, take this\n\
Star instead. You've\n\
earned it!"))

DEFINE_DIALOG(DIALOG_057, 1, 4, 30, 200, _("\
Egad! My baby!! Have you\n\
seen my baby??? She's\n\
the most precious baby in\n\
the whole wide world.\n\
(They say she has my\n\
beak...) I just can't\n\
remember where I left\n\
her.\n\
Let's see...I stopped\n\
for herring and ice cubes,\n\
then I...oohh! I just\n\
don't know!"))

DEFINE_DIALOG(DIALOG_058, 1, 4, 30, 200, _("\
You found my precious,\n\
precious baby! Where\n\
have you been? How can\n\
I ever thank you, Mario?\n\
Oh, I do have this...\n\
...Star. Here, take it\n\
with my eternal\n\
gratitude."))

DEFINE_DIALOG(DIALOG_059, 1, 4, 30, 200, _("\
That's not my baby! She\n\
looks nothing like me!\n\
Her parents must be\n\
worried sick!"))

DEFINE_DIALOG(DIALOG_060, 1, 4, 30, 200, _("\
ATTENTION!\n\
Read Before Diving In!\n\
\n\
\n\
If you stay under the\n\
water for too long, you'll\n\
run out of oxygen.\n\
\n\
Return to the surface for\n\
air or find an air bubble\n\
or coins to breathe while\n\
underwater.\n\
Press [A] to swim. Hold [A]\n\
to swim slow and steady.\n\
Tap [A] with smooth timing\n\
to gain speed.\n\
Press Up on the\n\
Control Stick and press [A]\n\
to dive.\n\
\n\
Press Down on the Control\n\
Stick and press [A] to\n\
return to the surface.\n\
\n\
Hold Down and press [A]\n\
while on the surface near\n\
the edge of the water to\n\
jump out."))

DEFINE_DIALOG(DIALOG_061, 1, 4, 30, 200, _("\
BRRR! Frostbite Danger!\n\
Do not swim here.\n\
I'm serious.\n\
/--The Penguin"))

DEFINE_DIALOG(DIALOG_062, 1, 3, 30, 200, _("\
Hidden inside the green\n\
block is the amazing\n\
Metal Cap.\n\
Wearing it, you won't\n\
catch fire or be hurt\n\
by enemy attacks.\n\
You don't even have to\n\
breathe while wearing it.\n\
\n\
The only problem:\n\
It is too heavy to\n\
swim with."))

DEFINE_DIALOG(DIALOG_063, 1, 5, 30, 200, _("\
The Vanish Cap is inside\n\
the blue block. Mr. I.\n\
will be surprised, since\n\
you'll be invisible when\n\
you wear it!\n\
Even the Big Boo will be\n\
fooled--and you can walk\n\
through secret walls, too."))

DEFINE_DIALOG(DIALOG_064, 1, 5, 30, 200, _("\
When you put on the Wing\n\
Cap that comes from a\n\
red block, do the Triple\n\
Jump to soar high into\n\
the sky.\n\
Use the Control Stick to\n\
guide Mario. Pull back to\n\
to fly up, press forward\n\
to nose down, and press [Z]\n\
to land."))

DEFINE_DIALOG(DIALOG_065, 1, 6, 30, 200, _("\
Swimming Lessons!\n\
Tap [A] to do the breast\n\
stroke. If you time the\n\
taps right, you'll swim\n\
fast.\n\
\n\
Press and hold [A] to do a\n\
slow, steady flutter kick.\n\
Press Up on the Control\n\
Stick to dive, and pull\n\
back on the stick to head\n\
for the surface.\n\
To jump out of the water,\n\
hold Down on the Control\n\
Stick, then press [A].\n\
Easy as pie, right?\n\
\n\
\n\
But remember:\n\
Mario can't breathe under\n\
the water! Return to the\n\
surface for air when the\n\
Power Meter runs low.\n\
\n\
And one last thing: You\n\
can't open doors that\n\
are underwater."))

DEFINE_DIALOG(DIALOG_066, 1, 5, 30, 200, _("\
Mario, it's Peach!\n\
Please be careful! Bowser\n\
is so wicked! He will try\n\
to burn you with his\n\
horrible flame breath.\n\
Run around behind and\n\
grab him by the tail with\n\
the [B] Button. Once you\n\
grab hold, swing him\n\
around in great circles.\n\
Rotate the Control Stick\n\
to go faster and faster.\n\
The faster you swing him,\n\
the farther he'll fly.\n\
\n\
Use the [C] Buttons to look\n\
around, Mario. You have\n\
to throw Bowser into one\n\
of the bombs in the four\n\
corners.\n\
Aim well, then press [B]\n\
again to launch Bowser.\n\
Good luck, Mario! Our\n\
fate is in your hands."))

DEFINE_DIALOG(DIALOG_067, 1, 5, 30, 200, _("\
Tough luck, Mario!\n\
Princess Toadstool isn't\n\
here...Gwa ha ha!! Go\n\
ahead--just try to grab\n\
me by the tail!\n\
You'll never be able to\n\
swing ME around! A wimp\n\
like you won't throw me\n\
out of here! Never! Ha!"))

DEFINE_DIALOG(DIALOG_068, 1, 5, 30, 200, _("\
It's Lethal Lava Land!\n\
If you catch fire or fall\n\
into a pool of flames,\n\
you'll be hopping mad, but\n\
don't lose your cool.\n\
You can still control\n\
Mario--just try to keep\n\
calm!"))

DEFINE_DIALOG(DIALOG_069, 1, 6, 30, 200, _("\
Sometimes you'll bump into\n\
invisible walls at the\n\
edges of the painting\n\
worlds. If you hit a wall\n\
while flying, you'll bounce\n\
back."))

DEFINE_DIALOG(DIALOG_070, 1, 5, 30, 200, _("\
You can return to the\n\
castle's main hall at any\n\
time from the painting\n\
worlds where the enemies\n\
live.\n\
Just stop, stand still,\n\
press Start to pause the\n\
game, then select\n\
『Exit Course.』\n\
\n\
You don't have to collect\n\
all Power Stars in one\n\
course before going on to\n\
the next.\n\
\n\
Return later, when you're\n\
more experienced, to pick\n\
up difficult ones.\n\
\n\
\n\
Whenever you find a Star,\n\
a hint for finding the\n\
next one will appear on\n\
the course's start screen.\n\
\n\
You can, however, collect\n\
any of the remaining\n\
Stars next. You don't\n\
have to recover the one\n\
described by the hint."))

DEFINE_DIALOG(DIALOG_071, 1, 3, 30, 200, _("\
Danger Ahead!\n\
Beware of the strange\n\
cloud! Don't inhale!\n\
If you feel faint, run for\n\
higher ground and fresh\n\
air!\n\
Circle: Shelter\n\
Arrow: Entrance-Exit"))

DEFINE_DIALOG(DIALOG_072, 1, 5, 30, 200, _("\
High winds ahead!\n\
Pull your Cap down tight.\n\
If it blows off, you'll\n\
have to find it on this\n\
mountain."))

DEFINE_DIALOG(DIALOG_073, 1, 4, 95, 200, _("\
Aarrgh! Ahoy, matey. I\n\
have sunken treasure,\n\
here, I do.\n\
\n\
But to pluck the plunder,\n\
you must open the\n\
Treasure Chests in the\n\
right order.\n\
What order is that,\n\
ye say?\n\
\n\
\n\
I'll never tell!\n\
\n\
//--The Cap'n"))

DEFINE_DIALOG(DIALOG_074, 1, 5, 30, 200, _("\
You can grab on to the\n\
edge of a cliff or ledge\n\
with your fingertips and\n\
hang down from it.\n\
\n\
To drop from the edge,\n\
either press the Control\n\
Stick in the direction of\n\
Mario's back or press the\n\
[Z] Button.\n\
To get up onto the ledge,\n\
either press Up on the\n\
Control Stick or press [A]\n\
as soon as you grab the\n\
ledge to climb up quickly."))

DEFINE_DIALOG(DIALOG_075, 1, 5, 30, 200, _("\
Mario!! My castle is in\n\
great peril. I know that\n\
Bowser is the cause...and\n\
I know that only you can\n\
stop him!\n\
The doors in the castle\n\
that have been sealed by\n\
Bowser can be opened only\n\
with Star Power.\n\
\n\
But there are secret\n\
paths in the castle,\n\
paths that Bowser hasn't\n\
found.\n\
\n\
One of those paths is in\n\
this room, and it holds\n\
one of the castle's Secret\n\
Stars!\n\
\n\
Find that Secret Star,\n\
Mario! It will help you\n\
on your quest. Please,\n\
Mario, you have to\n\
help us!\n\
Retrieve all of the\n\
Power Stars in the castle\n\
and free us from this\n\
awful prison!\n\
Please!"))

DEFINE_DIALOG(DIALOG_076, 1, 6, 30, 200, _("\
Thanks to the power of\n\
the Stars, life is\n\
returning to the castle.\n\
Please, Mario, you have\n\
to give Bowser the boot!\n\
\n\
Here, let me tell you a\n\
little something about the\n\
castle. In the room with\n\
the mirrors, look carefully\n\
for anything that's not\n\
reflected in the mirror.\n\
And when you go to the\n\
water town, you can flood\n\
it with a high jump into\n\
the painting. Oh, by the\n\
way, look what I found!"))

DEFINE_DIALOG(DIALOG_077, 1, 2, 150, 200, _("\
It is decreed that one\n\
shall pound the pillars."))

DEFINE_DIALOG(DIALOG_078, 1, 5, 30, 200, _("\
Break open the Blue Coin\n\
Block by Pounding the\n\
Ground with the [Z] Button.\n\
One Blue Coin is worth\n\
five Yellow Coins.\n\
But you have to hurry!\n\
The coins will disappear\n\
if you're not quick to\n\
collect them! Too bad."))

DEFINE_DIALOG(DIALOG_079, 1, 4, 30, 200, _("\
Owwwuu! Let me go!\n\
Uukee-kee! I was only\n\
teasing! Can't you take\n\
a joke?\n\
I'll tell you what, let's\n\
trade. If you let me go,\n\
I'll give you something\n\
really good.\n\
So, how about it?\n\
\n\
//Free him/ Hold on"))

DEFINE_DIALOG(DIALOG_080, 1, 1, 30, 200, _("\
Eeeh hee hee hee!"))

DEFINE_DIALOG(DIALOG_081, 1, 4, 30, 200, _("\
The mystery is of Wet\n\
or Dry.\n\
And where does the\n\
solution lie?\n\
The city welcomes visitors\n\
with the depth they bring\n\
as they enter."))

DEFINE_DIALOG(DIALOG_082, 1, 4, 30, 200, _("\
Hold on to your hat! If\n\
you lose it, you'll be\n\
injured easily.\n\
\n\
If you do lose your Cap,\n\
you'll have to find it in\n\
the course where you\n\
lost it.\n\
Oh, boy, it's not looking\n\
good for Peach. She's\n\
still trapped somewhere\n\
inside the walls.\n\
Please, Mario, you have\n\
to help her! Did you know\n\
that there are enemy\n\
worlds inside the walls?\n\
Yup. It's true. Bowser's\n\
troops are there, too.\n\
Oh, here, take this. I've\n\
been keeping it for you."))

DEFINE_DIALOG(DIALOG_083, 1, 6, 30, 200, _("\
There's something strange\n\
about that clock. As you\n\
jump inside, watch the\n\
position of the big hand.\n\
Oh, look what I found!\n\
Here, Mario, catch!"))

DEFINE_DIALOG(DIALOG_084, 1, 3, 30, 200, _("\
Yeeoww! Unhand me,\n\
brute! I'm late, so late,\n\
I must make haste!\n\
This shiny thing? Mine!\n\
It's mine. Finders,\n\
keepers, losers...\n\
Late, late, late...\n\
Ouch! Take it then! A\n\
gift from Bowser, it was.\n\
Now let me be! I have a\n\
date! I cannot be late\n\
for tea!"))

DEFINE_DIALOG(DIALOG_085, 1, 5, 30, 200, _("\
You don't stand a ghost\n\
of a chance in this house.\n\
If you walk out of here,\n\
you deserve...\n\
...a Ghoul Medal..."))

DEFINE_DIALOG(DIALOG_086, 1, 3, 30, 200, _("\
Running around in circles\n\
makes some bad guys roll\n\
their eyes."))

DEFINE_DIALOG(DIALOG_087, 1, 4, 30, 200, _("\
Santa Claus isn't the only\n\
one who can go down a\n\
chimney! Come on in!\n\
/--Cabin Proprietor"))

DEFINE_DIALOG(DIALOG_088, 1, 5, 30, 200, _("\
Work Elevator\n\
For those who get off\n\
here: Grab the pole to the\n\
left and slide carefully\n\
down."))

DEFINE_DIALOG(DIALOG_089, 1, 5, 95, 200, _("\
Both ways fraught with\n\
danger! Watch your feet!\n\
Those who can't do the\n\
Long Jump, tsk, tsk. Make\n\
your way to the right.\n\
Right: Work Elevator\n\
/// Cloudy Maze\n\
Left: Black Hole\n\
///Underground Lake\n\
\n\
Red Circle: Elevator 2\n\
//// Underground Lake\n\
Arrow: You are here"))

DEFINE_DIALOG(DIALOG_090, 1, 6, 30, 200, _("\
Bwa ha ha ha!\n\
You've stepped right into\n\
my trap, just as I knew\n\
you would! I warn you,\n\
『Friend,』 watch your\n\
step!"))

DEFINE_DIALOG(DIALOG_091, 2, 2, 30, 200, _("\
Danger!\n\
Strong Gusts!\n\
But the wind makes a\n\
comfy ride."))

DEFINE_DIALOG(DIALOG_092, 1, 5, 30, 200, _("\
Pestering me again, are\n\
you, Mario? Can't you see\n\
that I'm having a merry\n\
little time, making\n\
mischief with my minions?\n\
Now, return those Stars!\n\
My troops in the walls\n\
need them! Bwa ha ha!"))

DEFINE_DIALOG(DIALOG_093, 1, 5, 30, 200, _("\
Mario! You again! Well\n\
that's just fine--I've\n\
been looking for something\n\
to fry with my fire\n\
breath!\n\
Your Star Power is\n\
useless against me!\n\
Your friends are all\n\
trapped within the\n\
walls...\n\
And you'll never see the\n\
Princess again!\n\
Bwa ha ha ha!"))

DEFINE_DIALOG(DIALOG_094, 1, 4, 30, 200, _("\
Get a good run up the\n\
slope! Do you remember\n\
the Long Jump? Run, press\n\
[Z], then jump!"))

DEFINE_DIALOG(DIALOG_095, 1, 4, 30, 200, _("\
To read a sign, stand in\n\
front of it and press [B],\n\
like you did just now.\n\
\n\
When you want to talk to\n\
a Koopa Troopa or other\n\
animal, stand right in\n\
front of it.\n\
Please recover the Stars\n\
that were stolen by\n\
Bowser in this course."))

DEFINE_DIALOG(DIALOG_096, 1, 4, 30, 200, _("\
The path is narrow here.\n\
Easy does it! No one is\n\
allowed on top of the\n\
mountain!\n\
And if you know what's\n\
good for you, you won't\n\
wake anyone who's\n\
sleeping!\n\
Move slowly,\n\
tread lightly."))

DEFINE_DIALOG(DIALOG_097, 1, 5, 30, 200, _("\
Don't be a pushover!\n\
If anyone tries to shove\n\
you around, push back!\n\
It's one-on-one, with a\n\
fiery finish for the loser!"))

DEFINE_DIALOG(DIALOG_098, 1, 2, 95, 200, _("\
Come on in here...\n\
...heh, heh, heh..."))

// unused
DEFINE_DIALOG(DIALOG_099, 1, 5, 95, 200, _("\
Eh he he...\n\
You're mine, now, hee hee!\n\
I'll pass right through\n\
this wall. Can you do\n\
that? Heh, heh, heh!"))

/* 

    AREA SPECIFIC DIALOGUES

*/
// BOB AREA 1 loss room
DEFINE_DIALOG(DIALOG_100, 8, 4, 30, 270, _("\
The tree...\n\
\n\
It's in such a sorry state. How sad...\n\
"))

// BOB AREA 2 held up tree
DEFINE_DIALOG(DIALOG_101, 8, 4, 30, 270, _("\
The tree!\n\
\n\
It's been so long since I've seen it so healthy...\n\
"))

// WF AREA 1 pain room
DEFINE_DIALOG(DIALOG_102, 8, 3, 30, 270, _("\
No...\n\
Not the needles!\n\
"))

// WF AREA 2 bloodslide
DEFINE_DIALOG(DIALOG_103, 8, 4, 30, 270, _("\
What?\n\
\n\
Is this the inside of my body?\n\
"))

// WF AREA 3 eyes room
DEFINE_DIALOG(DIALOG_104, 8, 2, 30, 270, _("\
Something's staring at me...\n\
"))

// JRB AREA 1 LOST (the ones with the lanterns)
DEFINE_DIALOG(DIALOG_105, 8, 5, 30, 270, _("\
...That final night...\n\
The drive to our new home...\n\
I wanted to go over the moon bridge\n\
just one more time...\n\
"))

// JRB AREA 2 dark apartments
DEFINE_DIALOG(DIALOG_106, 8, 5, 30, 270, _("\
The last place I saw him...\n\
It was so dark... Yet I wasn't worried.\n\
\n\
I was such a fool.\n\
"))

// JRB AREA 4 old apartment
DEFINE_DIALOG(DIALOG_107, 8, 6, 30, 270, _("\
That dreadful evening...\n\
\n\
I shouldn't have looked...\n\
\n\
I just shouldn't have looked.\n\
"))

// CCM AREA 1 HOME
DEFINE_DIALOG(DIALOG_108, 8, 5, 30, 270, _("\
How nostalgic...\n\
\n\
Home sweet home!\n\
I guess.\n\
"))

// CCM AREA 3 poopslide
DEFINE_DIALOG(DIALOG_109, 8, 4, 30, 270, _("\
Eeeeeeeeeewwwwwwww--!!!\n\
\n\
Why did I jump in there!?\n\
"))

// CCM AREA 5 swamp
DEFINE_DIALOG(DIALOG_110, 8, 6, 30, 270, _("\
Oh my, it's the lillypad swamplands!\n\
Dad and I used to go here all the time to fish.\n\
\n\
Not the most charming place for a lady, of course,\n\
but I've always loved it here.\n\
"))

// CCM AREA 6 dino room
DEFINE_DIALOG(DIALOG_111, 8, 10, 30, 270, _("\
Well, well, well.\n\
Look at what showed its big, bulky face:\n\
The swamp reptile itself!\n\
\n\
No longer shall you escape our grasp, the chase\n\
ends here!\n\
\n\
Haha!\n\
How silly.\n\
"))

// BBH AREA 1 bloom level
DEFINE_DIALOG(DIALOG_112, 8, 8, 30, 270, _("\
Oh, no.\n\
I remember this.\n\
It was shortly before the anesthesia completely wore off...\n\
\n\
Heeheehee...!\n\
\n\
Just being here makes me feel all woozie.\n\
"))

// HMC AREA 1 flow slide (the colourful one)
DEFINE_DIALOG(DIALOG_113, 8, 4, 30, 270, _("\
Well this looks a lot more fun!\n\
\n\
I think I see something glistening at the end of the path?\n\
"))

// LLL AREA 2 (the snow one)
DEFINE_DIALOG(DIALOG_114, 8, 6, 30, 270, _("\
The snow...\n\
\n\
It's so peaceful to me...\n\
\n\
...I wonder why?\n\
"))

// SSL AREA 1 infinite neighbourhood
DEFINE_DIALOG(DIALOG_115, 8, 6, 30, 270, _("\
Everything just...\n\
\n\
...Looks the damn same here.\n\
\n\
I hate it.\n\
"))

// DDD AREA 1 chimes house
DEFINE_DIALOG(DIALOG_116, 8, 7, 30, 270, _("\
It's the house before we renovated it...\n\
\n\
It made me feel very uneasy.\n\
It still does.\n\
\n\
But there is nothing here, right?\n\
"))

// SL AREA 1 chess
DEFINE_DIALOG(DIALOG_117, 8, 7, 30, 270, _("\
Chess, cards, and dice.\n\
\n\
I really just make due with these to amuse myself to\n\
the point that I have even started to bend the rules!\n\
\n\
What's a bishop anyways? And there are way too many pawns!\n\
"))

// WDW AREA 1 juice (fish and bubbles)
DEFINE_DIALOG(DIALOG_118, 8, 5, 30, 270, _("\
It smells like my medicine in here, and it's gross.\n\
But the fish are very cute.\n\
\n\
Is this the effect the medicine has on my body?\n\
"))

// WDW AREA 2 brain in a jar
DEFINE_DIALOG(DIALOG_119, 8, 4, 30, 270, _("\
This metalic taste--!\n\
\n\
What is even in here?\n\
"))

// TTM AREA 1 the moon (space)
DEFINE_DIALOG(DIALOG_120, 8, 7, 30, 270, _("\
Oh, woooowww--...\n\
\n\
Mom always told me if I wished hard enough I could\n\
maybe one day walk on the moon and meet aliens.\n\
\n\
Haha, how silly that would be...\n\
"))

// TTM AREA 2 inside the UFO
DEFINE_DIALOG(DIALOG_121, 8, 9, 30, 270, _("\
Ah, this is-!\n\
\n\
I thought I stowed away my teenage crushes\n\
on alien boys?\n\
How absolutely embarrassing...\n\
\n\
Thank heavens nobody but me gets to\n\
see this place.\n\
"))

// TTM AREA 3 Cornersoft room
DEFINE_DIALOG(DIALOG_122, 8, 8, 30, 270, _("\
What in the world is this then?\n\
Oh! Could this be an easter egg room?\n\
\n\
Well I have been playing a lot of SM64 romhacks lately.\n\
People put so much work into these things, it's insane!\n\
\n\
Maybe one day I'll attempt to make one too!\n\
"))

/* 

    Vanilla Dialogue

*/

DEFINE_DIALOG(DIALOG_123, 1, 4, 30, 200, _("\
Metal Cavern\n\
Right: To Waterfall\n\
Left: Metal Cap Switch"))

DEFINE_DIALOG(DIALOG_124, 1, 4, 30, 200, _("\
Work Elevator\n\
Danger!!\n\
Read instructions\n\
thoroughly!\n\
Elevator continues in the\n\
direction of the arrow\n\
activated."))

DEFINE_DIALOG(DIALOG_125, 1, 3, 30, 200, _("\
Hazy Maze-Exit\n\
Danger! Closed.\n\
Turn back now."))

DEFINE_DIALOG(DIALOG_126, 2, 3, 30, 200, _("\
Up: Black Hole\n\
Right: Work Elevator\n\
/// Hazy Maze"))

DEFINE_DIALOG(DIALOG_127, 3, 4, 30, 200, _("\
Underground Lake\n\
Right: Metal Cave\n\
Left: Abandoned Mine\n\
///(Closed)\n\
A gentle sea dragon lives\n\
here. Pound on his back to\n\
make him lower his head.\n\
Don't become his lunch."))

DEFINE_DIALOG(DIALOG_128, 1, 4, 95, 200, _("\
You must fight with\n\
honor! It is against the\n\
royal rules to throw the\n\
king out of the ring!"))

DEFINE_DIALOG(DIALOG_129, 1, 5, 30, 200, _("\
Welcome to the Vanish\n\
Cap Switch Course! All of\n\
the blue blocks you find\n\
will become solid once you\n\
step on the Cap Switch.\n\
You'll disappear when you\n\
put on the Vanish Cap, so\n\
you'll be able to elude\n\
enemies and walk through\n\
many things. Try it out!"))

DEFINE_DIALOG(DIALOG_130, 1, 5, 30, 200, _("\
Welcome to the Metal Cap\n\
Switch Course! Once you\n\
step on the Cap Switch,\n\
the green blocks will\n\
become solid.\n\
When you turn your body\n\
into metal with the Metal\n\
Cap, you can walk\n\
underwater! Try it!"))

DEFINE_DIALOG(DIALOG_131, 1, 5, 30, 200, _("\
Welcome to the Wing Cap\n\
Course! Step on the red\n\
switch at the top of the\n\
tower, in the center of\n\
the rainbow ring.\n\
When you trigger the\n\
switch, all of the red\n\
blocks you find will\n\
become solid.\n\
\n\
Try out the Wing Cap! Do\n\
the Triple Jump to take\n\
off and press [Z] to land.\n\
\n\
\n\
Pull back on the Control\n\
Stick to go up and push\n\
forward to nose down,\n\
just as you would when\n\
flying an airplane."))

DEFINE_DIALOG(DIALOG_132, 1, 4, 30, 200, _("\
Whoa, Mario, pal, you\n\
aren't trying to cheat,\n\
are you? Shortcuts aren't\n\
allowed.\n\
Now, I know that you\n\
know better. You're\n\
disqualified! Next time,\n\
play fair!"))

DEFINE_DIALOG(DIALOG_133, 1, 6, 30, 200, _("\
Am I glad to see you! The\n\
Princess...and I...and,\n\
well, everybody...we're all\n\
trapped inside the castle\n\
walls.\n\
\n\
Bowser has stolen the\n\
castle's Stars, and he's\n\
using their power to\n\
create his own world in\n\
the paintings and walls.\n\
\n\
Please recover the Power\n\
Stars! As you find them,\n\
you can use their power\n\
to open the doors that\n\
Bowser has sealed.\n\
\n\
There are four rooms on\n\
the first floor. Start in\n\
the one with the painting\n\
of Bob-omb inside. It's\n\
the only room that Bowser\n\
hasn't sealed.\n\
When you collect eight\n\
Power Stars, you'll be\n\
able to open the door\n\
with the big star. The\n\
Princess must be inside!"))

DEFINE_DIALOG(DIALOG_134, 1, 5, 30, 200, _("\
The names of the Stars\n\
are also hints for\n\
finding them. They are\n\
displayed at the beginning\n\
of each course.\n\
You can collect the Stars\n\
in any order. You won't\n\
find some Stars, enemies\n\
or items unless you select\n\
a specific Star.\n\
After you collect some\n\
Stars, you can try\n\
another course.\n\
We're all waiting for\n\
your help!"))

DEFINE_DIALOG(DIALOG_135, 1, 5, 30, 200, _("\
It was Bowser who stole\n\
the Stars. I saw him with\n\
my own eyes!\n\
\n\
\n\
He's hidden six Stars in\n\
each course, but you\n\
won't find all of them in\n\
some courses until you\n\
press the Cap Switches.\n\
The Stars you've found\n\
will show on each course's\n\
starting screen.\n\
\n\
\n\
If you want to see some\n\
of the enemies you've\n\
already defeated, select\n\
the Stars you recovered\n\
from them."))

DEFINE_DIALOG(DIALOG_136, 1, 6, 30, 200, _("\
Wow! You've already\n\
recovered that many\n\
Stars? Way to go, Mario!\n\
I'll bet you'll have us out\n\
of here in no time!\n\
\n\
Be careful, though.\n\
Bowser and his band\n\
wrote the book on 『bad.』\n\
Take my advice: When you\n\
need to recover from\n\
injuries, collect coins.\n\
Yellow Coins refill one\n\
piece of the Power Meter,\n\
Red Coins refill two\n\
pieces, and Blue Coins\n\
refill five.\n\
\n\
To make Blue Coins\n\
appear, pound on Blue\n\
Coin Blocks.\n\
\n\
\n\
\n\
Also, if you fall from\n\
high places, you'll\n\
minimize damage if you\n\
Pound the Ground as you\n\
land."))

DEFINE_DIALOG(DIALOG_137, 1, 6, 30, 200, _("\
Thanks, Mario! The castle\n\
is recovering its energy\n\
as you retrieve Power\n\
Stars, and you've chased\n\
Bowser right out of here,\n\
on to some area ahead.\n\
Oh, by the by, are you\n\
collecting coins? Special\n\
Stars appear when you\n\
collect 100 coins in each\n\
of the 15 courses!"))

DEFINE_DIALOG(DIALOG_138, 1, 3, 30, 200, _("\
Down: Underground Lake\n\
Left: Black Hole\n\
Right: Hazy Maze (Closed)"))

DEFINE_DIALOG(DIALOG_139, 1, 6, 30, 200, _("\
Above: Automatic Elevator\n\
Elevator begins\n\
automatically and follows\n\
pre-set course.\n\
It disappears\n\
automatically, too."))

DEFINE_DIALOG(DIALOG_140, 1, 6, 30, 200, _("\
Elevator Area\n\
Right: Hazy Maze\n\
/// Entrance\n\
Left: Black Hole\n\
///Elevator 1\n\
Arrow: You are here"))

DEFINE_DIALOG(DIALOG_141, 1, 5, 150, 200, _("\
You've recovered one of\n\
the stolen Power Stars!\n\
Now you can open some of\n\
the sealed doors in the\n\
castle.\n\
Try the Princess's room\n\
on the second floor and\n\
the room with the\n\
painting of Whomp's\n\
Fortress on Floor 1.\n\
Bowser's troops are still\n\
gaining power, so you\n\
can't give up. Save us,\n\
Mario! Keep searching for\n\
Stars!"))

DEFINE_DIALOG(DIALOG_142, 1, 5, 150, 200, _("\
You've recovered three\n\
Power Stars! Now you can\n\
open any door with a 3\n\
on its star.\n\
\n\
You can come and go from\n\
the open courses as you\n\
please. The enemies ahead\n\
are even meaner, so be\n\
careful!"))

DEFINE_DIALOG(DIALOG_143, 1, 6, 150, 200, _("\
You've recovered eight of\n\
the Power Stars! Now you\n\
can open the door with\n\
the big Star! But Bowser\n\
is just ahead...can you\n\
hear the Princess calling?"))

DEFINE_DIALOG(DIALOG_144, 1, 6, 150, 200, _("\
You've recovered 30\n\
Power Stars! Now you can\n\
open the door with the\n\
big Star! But before you\n\
move on, how's it going\n\
otherwise?\n\
Did you pound the two\n\
columns down? You didn't\n\
lose your hat, did you?\n\
If you did, you'll have to\n\
stomp on the condor to\n\
get it back!\n\
They say that Bowser has\n\
sneaked out of the sea\n\
and into the underground.\n\
Have you finally\n\
cornered him?"))

DEFINE_DIALOG(DIALOG_145, 1, 6, 150, 200, _("\
You've recovered 50\n\
Power Stars! Now you can\n\
open the Star Door on the\n\
third floor. Bowser's\n\
there, you know.\n\
\n\
Oh! You've found all of\n\
the Cap Switches, haven't\n\
you? Red, green and blue?\n\
The Caps you get from the\n\
colored blocks are really\n\
helpful.\n\
Hurry along, now. The\n\
third floor is just ahead."))

DEFINE_DIALOG(DIALOG_146, 1, 6, 150, 200, _("\
You've found 70 Power\n\
Stars! The mystery of the\n\
endless stairs is solved,\n\
thanks to you--and is\n\
Bowser ever upset! Now,\n\
on to the final bout!"))

DEFINE_DIALOG(DIALOG_147, 1, 5, 30, 200, _("\
Are you using the Cap\n\
Blocks? You really should,\n\
you know.\n\
\n\
\n\
To make them solid so you\n\
can break them, you have\n\
to press the colored Cap\n\
Switches in the castle's\n\
hidden courses.\n\
You'll find the hidden\n\
courses only after\n\
regaining some of the\n\
Power Stars.\n\
\n\
The Cap Blocks are a big\n\
help! Red for the Wing\n\
Cap, green for the Metal\n\
Cap, blue for the Vanish\n\
Cap."))

DEFINE_DIALOG(DIALOG_148, 1, 6, 30, 200, _("\
Snowman Mountain ahead.\n\
Keep out! And don't try\n\
the Triple Jump over the\n\
ice block shooter.\n\
\n\
\n\
If you fall into the\n\
freezing pond, your power\n\
decreases quickly, and\n\
you won't recover\n\
automatically.\n\
//--The Snowman"))

DEFINE_DIALOG(DIALOG_149, 1, 3, 30, 200, _("\
Welcome to\n\
Princess Toadstool's\n\
secret slide!\n\
There's a Star hidden\n\
here that Bowser couldn't\n\
find.\n\
When you slide, press\n\
forward to speed up,\n\
pull back to slow down.\n\
If you slide really\n\
fast, you'll win the Star!"))

DEFINE_DIALOG(DIALOG_150, 1, 5, 30, 200, _("\
Waaaa! You've flooded my\n\
house! Wh-why?? Look at\n\
this mess! What am I\n\
going to do now?\n\
\n\
The ceiling's ruined, the\n\
floor is soaked...what to\n\
do, what to do? Huff...\n\
huff...it makes me so...\n\
MAD!!!\n\
Everything's been going\n\
wrong ever since I got\n\
this Star...It's so shiny,\n\
but it makes me feel...\n\
strange..."))

DEFINE_DIALOG(DIALOG_151, 1, 4, 30, 200, _("\
I can't take this\n\
anymore! First you get\n\
me all wet, then you\n\
stomp on me!\n\
Now I'm really, really,\n\
REALLY mad!\n\
Waaaaaaaaaaaaaaaaa!!!"))

DEFINE_DIALOG(DIALOG_152, 1, 3, 30, 200, _("\
Owwch! Uncle! Uncle!\n\
Okay, I give up. Take this\n\
Star!\n\
Whew! I feel better now.\n\
I don't really need it\n\
anymore, anyway--\n\
I can see the stars\n\
through my ceiling at\n\
night.\n\
They make me feel...\n\
...peaceful. Please, come\n\
back and visit anytime."))

DEFINE_DIALOG(DIALOG_153, 1, 4, 30, 200, _("\
Hey! Who's there?\n\
What's climbing on me?\n\
Is it an ice ant?\n\
A snow flea?\n\
Whatever it is, it's\n\
bugging me! I think I'll\n\
blow it away!"))

DEFINE_DIALOG(DIALOG_154, 1, 5, 30, 200, _("\
Hold on to your hat! If\n\
you lose it, you'll be\n\
easily injured. If you\n\
lose it, look for it in the\n\
course where you lost it.\n\
Speaking of lost, the\n\
Princess is still stuck in\n\
the walls somewhere.\n\
Please help, Mario!\n\
\n\
Oh, you know that there\n\
are secret worlds in the\n\
walls as well as in the\n\
paintings, right?"))

DEFINE_DIALOG(DIALOG_155, 1, 6, 30, 200, _("\
Thanks to the power of\n\
the Stars, life is\n\
returning to the castle.\n\
Please, Mario, you have\n\
to give Bowser the boot!\n\
\n\
Here, let me tell you a\n\
little something about the\n\
castle. In the room with\n\
the mirrors, look carefully\n\
for anything that's not\n\
reflected in the mirror.\n\
And when you go to the\n\
water town, you can flood\n\
it with a high jump into\n\
the painting."))

DEFINE_DIALOG(DIALOG_156, 1, 5, 30, 200, _("\
The world inside the\n\
clock is so strange!\n\
When you jump inside,\n\
watch the position of\n\
the big hand!"))

DEFINE_DIALOG(DIALOG_157, 1, 5, 30, 200, _("\
Watch out! Don't let\n\
yourself be swallowed by\n\
quicksand.\n\
\n\
\n\
If you sink into the sand,\n\
you won't be able to\n\
jump, and if your head\n\
goes under, you'll be\n\
smothered.\n\
The dark areas are\n\
bottomless pits."))

DEFINE_DIALOG(DIALOG_158, 1, 6, 30, 200, _("\
1. If you jump repeatedly\n\
and time it right, you'll\n\
jump higher and higher.\n\
If you run really fast and\n\
time three jumps right,\n\
you can do a Triple Jump.\n\
2. Jump into a solid wall,\n\
then jump again when you\n\
hit the wall. You can\n\
bounce to a higher level\n\
using this Wall Kick."))

DEFINE_DIALOG(DIALOG_159, 1, 6, 30, 200, _("\
3. If you stop, press [Z]\n\
to crouch, then jump, you\n\
can perform a Backward\n\
Somersault. To do a Long\n\
Jump, run fast, press [Z],\n\
then jump."))

DEFINE_DIALOG(DIALOG_160, 1, 4, 30, 200, _("\
Press [B] while running\n\
fast to do a Body Slide\n\
attack. To stand while\n\
sliding, press [A] or [B]."))

#ifdef VERSION_EU
#define KEEP_ON_PLAYING ".."
#else
#define KEEP_ON_PLAYING "\n\
We want you to keep on\n\
playing, so we have a\n\
little something for you.\n\
We hope that you like it!\n\
Enjoy!!!"
#endif

DEFINE_DIALOG(DIALOG_161, 1, 4, 30, 200, _("\
Mario!!!\n\
It that really you???\n\
It has been so long since\n\
our last adventure!\n\
They told me that I might\n\
see you if I waited here,\n\
but I'd just about given\n\
up hope!\n\
Is it true? Have you\n\
really beaten Bowser? And\n\
restored the Stars to the\n\
castle?\n\
And saved the Princess?\n\
I knew you could do it!\n\
Now I have a very special\n\
message for you.\n\
『Thanks for playing Super\n\
Mario 64! This is the\n\
end of the game, but not\n\
the end of the fun." \
KEEP_ON_PLAYING "』\n\
\n\
The Super Mario 64 Team"))

DEFINE_DIALOG(DIALOG_162, 1, 4, 30, 200, _("\
No, no, no! Not you\n\
again! I'm in a great\n\
hurry, can't you see?\n\
\n\
I've no time to squabble\n\
over Stars. Here, have it.\n\
I never meant to hide it\n\
from you...\n\
It's just that I'm in such\n\
a rush. That's it, that's\n\
all. Now, I must be off.\n\
Owww! Let me go!"))

DEFINE_DIALOG(DIALOG_163, 1, 5, 30, 200, _("\
Noooo! You've really\n\
beaten me this time,\n\
Mario! I can't stand\n\
losing to you!\n\
\n\
My troops...worthless!\n\
They've turned over all\n\
the Power Stars! What?!\n\
There are 120 in all???\n\
\n\
Amazing! There were some\n\
in the castle that I\n\
missed??!!\n\
\n\
\n\
Now I see peace\n\
returning to the world...\n\
Oooo! I really hate that!\n\
I can't watch--\n\
I'm outta here!\n\
Just you wait until next\n\
time. Until then, keep\n\
that Control Stick\n\
smokin'!\n\
Buwaa ha ha!"))

DEFINE_DIALOG(DIALOG_164, 1, 4, 30, 200, _("\
Mario! What's up, pal?\n\
I haven't been on the\n\
slide lately, so I'm out\n\
of shape.\n\
Still, I'm always up for a\n\
good race, especially\n\
against an old sleddin'\n\
buddy.\n\
Whaddya say?\n\
Ready...set...\n\
\n\
//Go//// Don't Go"))

DEFINE_DIALOG(DIALOG_165, 1, 5, 30, 200, _("\
I take no responsibility\n\
whatsoever for those who\n\
get dizzy and pass out\n\
from running around\n\
this post."))

DEFINE_DIALOG(DIALOG_166, 1, 4, 30, 200, _("\
I'll be back soon.\n\
I'm out training now,\n\
so come back later.\n\
//--Koopa the Quick"))

DEFINE_DIALOG(DIALOG_167, 1, 4, 30, 200, _("\
Princess Toadstool's\n\
castle is just ahead.\n\
\n\
\n\
Press [A] to jump, [Z] to\n\
crouch, and [B] to punch,\n\
read a sign, or grab\n\
something.\n\
Press [B] again to throw\n\
something you're holding."))

DEFINE_DIALOG(DIALOG_168, 1, 5, 30, 200, _("\
Hey! Knock it off! That's\n\
the second time you've\n\
nailed me. Now you're\n\
asking for it, linguine\n\
breath!"))

DEFINE_DIALOG(DIALOG_169, 1, 4, 30, 200, _("\
Keep out!\n\
That means you!\n\
Arrgghh!\n\
\n\
Anyone entering this cave\n\
without permission will\n\
meet certain disaster."))

DEFINE_DIALOG(DIALOG_170, 8, 4, 30, 270, _("\
Defiance is futile!\n\
You wanted this to begin with,\n\
why refuse me now?\n\
"))

DEFINE_DIALOG(DIALOG_171, 1, 4, 30, 200, _("\
DESPAIR:\n\
H-h-how are you this\n\
resilient?!\n\
\n\
ELISE:\n\
Take that you stupid rock!\n\
Now wake me up or I'll\n\
tear you down completely!\n\
DESPAIR:\n\
Feisty, but even I know\n\
when to give up.\n\
\n\
Very well. But remember:\n\
I will return whenever\n\
you wish for eternal\n\
escape again."))

DEFINE_DIALOG(DIALOG_172, 1, 5, 30, 200, _("\
DESPAIR:\n\
H-h-how are you this\n\
resilient?!\n\
\n\
\n\
ELISE:\n\
Take that you stupid rock!\n\
\n\
\n\
\n\
DESPAIR:\n\
The blasphemy! I gave\n\
you a gift of eternal\n\
happiness and you just\n\
want to throw it away?!\n\
ELISE:\n\
Gift?!\n\
I have been subjected\n\
to nothing but my\n\
internal struggles\n\
and trauma here!\n\
What you've done is\n\
give me a wake up\n\
call, and that's all\n\
there is to it.\n\
DESPAIR:\n\
So this is it then?\n\
\n\
\n\
\n\
You are just going to\n\
defile the blessing\n\
bestowed upon you\n\
with violence?\n\
\n\
ELISE:\n\
Sorry rainbow eyes,\n\
but I have a lot of\n\
pent up frustration to\n\
take out on you\n\
DESPAIR:\n\
This is IT!\n\
YOU WILL BE PUT INTO\n\
YOUR PLACE YOU\n\
CURSED CHILD!!!"))

DEFINE_DIALOG(DIALOG_173, 1, 4, 30, 200, _("\
DESPAIR:\n\
N-n-n-o! I can't...\n\
Has humanity forsaken\n\
me...\n\
ELISE:\n\
If only you didn't try\n\
to trap people in a coma\n\
maybe we wouldn't have.\n\
DESPAIR:\n\
But...\n\
I did it for\n\
humanity...\n\
ELISE:\n\
It's over, man.\n\
\n\
Go to bed.\n\
DESPAIR:\n\
...\n\
\n\
\n\
Curse...\n\
\n\
\n\
\n\
You...\n\
\n\
\n\
\n\
ELISE...!"))

/**
ELISE DIALOG TEMPLATE:

Argunemts: Dialog ID, Horizontal Dialog Offset (from start of text box), Number of lines, Vertical Offset (not horizontal, states very top of text box), Text Box Width (always centered)

NOTE: Number of lines is recommended to be kept the same for progressive dialog sequences that piggy back off one another.
Setting Elise or Despair to talk will append a line automatically, so it does not need to be accounted for here.
Also note that this text is not capable of scrolling, so anything that is sequential needs to have its own dialog.
*/
DEFINE_DIALOG(DIALOG_174, 8, 4, 30, 270, _("\
Hi my name is Elise lol.\n\
I like to eat cheese!\n\
It do be kind of delicious!\n\
"))

// DESPAIR fight dialogues
DEFINE_DIALOG(DIALOG_175, 8, 4, 30, 270, _("\
It's time for me to face my problems\n\
head on and give life a chance\n\
even despite my circumstances!\n\
"))

DEFINE_DIALOG(DIALOG_176, 8, 4, 30, 270, _("\
You are but a fool and slave to reality.\n\
I will pacify you here and now, and keep\n\
you protected in the bliss of the dreamworld...\n\
"))

DEFINE_DIALOG(DIALOG_177, 8, 4, 30, 270, _("\
This is the first text from noseman\n\
It's a hackjob and hijacks the dialog system\n\
It do be kind of delicious!\n\
"))

DEFINE_DIALOG(DIALOG_178, 8, 4, 30, 270, _("\
H-h-how are you this resilient?\n\
\n\
\n\
"))

DEFINE_DIALOG(DIALOG_179, 8, 4, 30, 270, _("\
Take that you stupid rock!\n\
Now wake me up or I'll tear you down\n\
completely!\n\
"))

DEFINE_DIALOG(DIALOG_180, 8, 4, 30, 270, _("\
Feisty, but even I know when to give up.\n\
Very well. But remember, I will return\n\
whenever you wish for eternal escape again.\n\
"))

DEFINE_DIALOG(DIALOG_181, 8, 4, 30, 270, _("\
N-n-n-o!\n\
I can't...\n\
Has humanity forsaken me...?\n\
"))

DEFINE_DIALOG(DIALOG_182, 8, 4, 30, 270, _("\
If only you didn't try to trap people\n\
in a coma maybe we wouldn't have.\n\
\n\
"))

DEFINE_DIALOG(DIALOG_183, 8, 4, 30, 270, _("\
But...\n\
I did it for humanity...\n\
\n\
"))

DEFINE_DIALOG(DIALOG_184, 8, 4, 30, 270, _("\
It's over, man.\n\
\n\
Go to bed.\n\
"))

DEFINE_DIALOG(DIALOG_185, 8, 4, 30, 270, _("\
...CURSE...\n\
...YOU...\n\
...ELISE...!\n\
"))


DEFINE_DIALOG(DIALOG_186, 8, 4, 30, 270, _("\
H-h-how are you this resilient?!"))

DEFINE_DIALOG(DIALOG_187, 8, 4, 30, 270, _("\
Take that you stupid rock!"))

DEFINE_DIALOG(DIALOG_188, 8, 4, 30, 270, _("\
The blasphemy! I gave you a gift of eternal\n\
happiness and you just want to throw it away?!"))

DEFINE_DIALOG(DIALOG_189, 8, 4, 30, 270, _("\
Gift?! I have been subjected to nothing but\n\
my internal struggles and trauma here! What\n\
you've done is give me a wake up call, and\n\
that's all there is to it."))

DEFINE_DIALOG(DIALOG_190, 8, 4, 30, 270, _("\
So this is it then?"))

DEFINE_DIALOG(DIALOG_191, 8, 4, 30, 270, _("\
You are just going to defile the blessing\n\
bestowed upon you with violence?"))

DEFINE_DIALOG(DIALOG_192, 8, 4, 30, 270, _("\
Sorry rainbow eyes,\n\
but I have a lot of pent up frustration to \n\
take out on you"))

DEFINE_DIALOG(DIALOG_193, 8, 4, 30, 270, _("\
This is IT!"))

DEFINE_DIALOG(DIALOG_194, 8, 4, 30, 270, _("\
YOU WILL BE PUT INTO YOUR PLACE!\n\
YOU CURSED CHILD!!!"))
