// //study and practice of internal and external dos commands
// Tech-Wonders.com » Windows

// Most Commonly Used Internal and External DOS Commands
// DOS Commands
// DOS Commands are instructions to perform tasks on files and directories very useful to Windows users. DOS commands are case insensitive. And as you already know, file is the area where we store group of information or data, and collection of group of files is called a directory.

// In MS-DOS the file name follow 8dot3 format and is divided into two parts – primary name and secondary name. Primary name is up to 8 characters long and secondary name is up to 4 characters with dot. For example, in the file-name Logo.jpg, Logo is the primary name and .jpg is the secondary name. Secondary names are fixed for particular type of file, meaning for system files the secondary name is designated as .sys, for text files it is .txt and so on. To name a file or directory special characters like < > , . / * ? | & Space are not allowed. Here is the list of some of the important types of files with their default secondary names:

// Text file	.txt
// Command file	.com
// System file	.sys
// Programme file	.prg
// Database file	.dbm
// Library file	.lib
// Batch file	.bat
// Executable file	.exe
// DOS Commands are divided into 2 types:

// Internal Commands
// These are for performing basic operations on files and directories and they do not need any external file support.

// External Commands
// These external commands are for performing advanced tasks and they do need some external file support as they are not stored in COMMAND.COM

// There are also Batch commands or Batch files which are text files that contain a list of internal and/or external commands which are executed in sequence when the batch file is executed. AUTOEXEC.BAT gets executed automatically on booting.

// In MS-DOS, keyboard shortcuts involving handy ones like Functional keys, arrows, pipe character (” | “), asterisk (*), ?, [] and ESC are of great help for recalling to searching to clearing command line etc., Here are few of them:

// UP (↑) and DOWN (↓) arrows recall previously entered commands.
// ESC clears the present command line. It abandons the currently construct command and the next prompt appears.
// F1 or → retypes one character at a time from the last command entry from the current cursor position.
// F2 retypes all characters from the last command entry up to the one identical to your next keystroke. It asks you to enter char to copy up to and retypes the last command up to that char.
// F3 retypes all remaining characters from the last command entry.
// F4 stores all characters beginning at the first match with your next keystroke and ending with the last command entry.
// F5 or F8 keys give all the previously typed commands.
// F6 places a special end-of-file code at the end of the currently open file. Sometimes referred to as Ctrl+z or ^z.
// F7 key displays command history and ALT+F7/ESC hides it.
// F9 is used to select a command by number. Just enter the command number and it fetches the command line for you.
// Pipe character (” | “) combines several series of commands or programs inter-dependent.
// Name enclosed within [] indicate a sub-directory.
// Asterisk (*) is used to represent zero or more any characters.
// ? is used to present zero or single character.
// MS-DOS commands perform tasks like:

// Manage files and directories
// Maintain Disks
// Configure Hardware and Networking
// Optimize the use of memory
// Customize MS-DOS
// Most Commonly Used Internal DOS Commands
// DATE
// This command is used to display the system current date setting and prompt you to enter a new date. The syntax is: DATE  [/T | date]

// DOS Date command overview
// If you type DATE without parameters then it displays current date and prompts to enter new date. We should give new date in mm-dd-yy format. If you want to keep the same date just Press ENTER. DATE command with /T switch tells the command to just output the current system date, without prompting for a new date.

// TIME
// This command is used to displays or set the system time.
// The syntax is: TIME   [/T | time]

// DOS TIME Command overview
// Same as DATE command, typing TIME with no parameters displays the current time and a prompt for a new one. Press ENTER to keep the same time. TIME command used with /T switch tells the command to just output the current system time, without prompting for a new time.

// COPY CON
// It is used to create a file in the existing directory. Here CON is a DOS reserved word which stands for console.
// Syntax is: COPY  CON filename after that press Enter and start typing your text and after you’re done typing your text, to save and exit hit F6 key.

// TYPE
// This command is used to display the contents of a text file or files. The syntax is: TYPE   [drive:][path]filename
// Now, lets try to display the contents of the file named filename we’ve created earlier using COPY CON command.

// COPY CON Command overview
// CLS
// It is used to clear the screen. Syntax is CLS

// CLS command in action - before and after screen results
// REN
// This command is used to change/modify the name of a file or files.
// Syntax is: REN   [drive:] [path] filename1   filename2.

// Here, filename1 is source file for which you wanted to change the name, and filename2 will obviously becomes your new file name. Also note that you cannot specify a new drive or path for your destination file.

// DIR
// This command displays a list of files and subdirectories in a directory. Syntax is: DIR   [drive:]  [path]  [filename] [/A[[:]attributes]]  [/B]  [/C]  [/D]  [/L]   [/N]  [/O[[:]sortorder]]  [/P]  [/Q] [/S]  [/T[[:]timefield]]  [/W]  [/X]  [/4]

// Here,

// [drive:][path][filename]	Specifies drive, directory, and/or files to list.
// /A:attributes	Displays files with specified attributes. The possible attributes are as follow: D → Directories, R → Read-only files, H → Hidden files, A → Files ready for archiving, S → System files, – Prefix meaning not
// /B	display in bare format with no heading information or summary
// /C	Using this attribute with dir by default displays the thousand separator in file sizes. To disable display or separator use /-C
// /D	Displays file list sorted by column.
// /L	Uses lowercase in listing file names and sub-directories.
// /N	Display in new long list format where filenames are on the far right.
// /O:sortorder	Displays list by files in sorted order. The sortorder attributes are as follow: N → By name (alphabetic), S → By size (smallest first), E → By extension (alphabetic), D → By date/time (oldest first), G → Group directories first, – Prefix to reverse order
// /P	Display page wise pausing after each screenful of information and prompts to press any key to continue.
// /Q	Displays the owner of a file or files.
// /S	Displays files in specified directory and all subdirectories. Bear caution in using this in your root directory as you may end up in overflowing information. To stop the screen overflow at any point hit Pause-Break key.
// T:timefield	This sorts and displays the list based on time field specified. C for Creation, A for Last Access, W for Last Written
// /W	Displays list width wise or wide list format.
// /X	This is used to display the short names generated for non-8dot3 file names.
// Note that switches may be different in the DIRCMD environment variable, in which case just override present switches by prefixing any switch with – (hyphen), for example instead of using /P use /-P

// PATH
// This command displays the path that how we have come to the present position or sets a search path for executable files.
// Its Syntax is PATH  [[drive:]path[;…][;%PATH%]]

// Typing PATH without any parameters displays the current path under current directory. Typing PATH ; clears all search-path settings and direct cmd.exe to search only in the current directory. And including %PATH% in the new path setting causes the old path to be appended to the new setting.

// VER
// This command displays the version of the Microsoft Windows running on your computer.

// VOL
// It displays the disk volume label and serial number, if they exist for the drive specified. If no drive is specified it displays for the active drive.
// Syntax is VOL  [drive:]

// VOL command displaying volume label and serial number
// DEL/ERASE
// Used to delete one or more files.
// Syntax is DEL   [/P]   [/F]   [/S]   [/Q]   [/A[[:]attributes]] names
// Here,

// tr>

// names	Specifies a list of one or more files or directories. Wildcards * and ? may be used to delete multiple files. * indicates group of unknown characters whereas using wildcard ? in file-names is for single unknown character. And using this command if a directory is specified, all files within the directory will be deleted.
// /P	Prompts for (Y)es/(N)o confirmation before deleting each file.Most Commonly Used Internal and External DOS Commands 1
// /F	Used to force delete read-only files.
// /S	Delete specified files from all subdirectories. If Command Extensions are enabled DEL and ERASE change while using /S switch such that it shows you only the files that are deleted, not the ones it could not find.
// /Q	Delete in quite mode and do not ask if ok to delete on global wildcard
// /A:attributes	Delete files based on specified attribute. The attributes are: R for Read-only files, S for System files, H for Hidden files, A for files ready for archiving and – Prefix meaning not.
// COPY
// This command is useful in copying one or more files to another file or location. Syntax is COPY   [/D]   [/V]   [/N]   [/Y | /-Y]   [/Z]   [/A | /B ]   source [/A | /B]   [+ source [/A | /B] [+ …]]   [destination [/A | /B]]
// The different switches that can be used with this command as follow along with their use.

// source	It specifies the file or files to be copied.
// /A	Indicates an ASCII text file.
// /B	This switch indicates a binary file.
// /D	This allows the destination file to be created with decryption.
// destination	This specifies the directory and/or filename for the new file or files.
// /V	Helps to verify new files to be written correctly.
// /N	Specifying this switch uses short filename, if available, when copying a file with a non-8dot3 file name.
// /Y	If destination file already exists, this switch suppresses prompting to confirm you want to overwrite it and does it asap.
// /-Y	Contrary to above switch, this causes prompting to confirm you want to overwrite an existing destination file.
// /Z	Copies networked files in restartable mode.
// For appending multiple files for source use wildcard or file1+file2+file3 format and make sure to specify a single file for destination.

// MD, CD and RD
// MD (or MKDIR) command stand for make directory and it is used to create a directory. Syntax is MD   [drive:]path
// CD (or CHDIR) stands for create or change directory and it allows to display the name of or change the current directory or rather we can say come out of a directory. Syntax is CD   [/D]   [drive:][path]
// → Typing CD drive: displays the current directory in the specified drive. This CD (or CHDIR) command does not treat spaces as delimiters due to which it allows to CD into a subdirectory name that contains a space without surrounding the name with quotes.
// For example:
// CHDIR program filesmozilla firefox
// is the same as:
// CHDIR “program filesmozilla firefox”
// → If you type CD without any parameters it displays current drive and directory. CD.. specifies that you want to change to the higher directory in the current path. Whereas, using CD you can directly change to parent/root directory from any location in the current drive.

// →Using /D switch changes current drive in addition to current directory for a drive.

// Most Commonly Used Internal and External DOS Commands 2
// RD (or RMDIR) command removes or deletes a directory. There are two conditions to remove any directory – (1) Directory to be removed should be empty. and (2) We should be outside the directory we are commanding to delete.
// Syntax is RD   [/S]   [/Q]   [drive:]path
// Here, using the switch /S removes a directory tree meaning it removes all directories and files in the specified directory in addition to the directory itself. And using /Q is the quiet mode that doesn’t asks for ok approval to remove a directory tree.
// PROMPT
// This changes the cmd.exe command prompt. By default the prompt is always set to the name of current drive followed by > sign.

// Customize the Prompt
// To customize the prompt to display any text of your choice, use the syntax
// prompt anytext and this will change the prompt to new command prompt anytext.

// Prompt with Options (or Special Codes)
// You can use prompt with options. To let the prompt display the current working directory use prompt $p$g
// $p in the above signifies the current drive and path.
// $g signifies the greater than sign >

// Most Commonly Used Internal and External DOS Commands 3
// The other options used with prompt command are as follows.
// Any combination of these can be used with prompt command.
// $A & (Ampersand)

// $B | (pipe character)

// $C ( (Left parenthesis)

// $D Current date

// $E Escape code (ASCII code 27)

// $F ) (Right parenthesis)

// $H Backspace (erases previous character)

// $L < (less-than sign) $N Current drive $Q = (equal sign) $T Current time $V Windows XP version number $_ Carriage return and linefeed $$ $ (dollar sign)

// prompt with special codes
// Most Commonly Used External DOS Commands
// EDIT
// This command is used to modify or change the data of a file.
// Syntax is EDIT  [/B]  [/H]  [/R]  [/S]  [filename(s)]

// Using switch /B you can force the edit in monochrome mode. /H displays the maximum number of lines possible for your system hardware. Whereas using /R and /S one can load files in read-only mode and force the use of short filenames respectively. [filename(s)] is used to specify file(s) to go edit. You can use wildcards (* and ?) to specify multiple files.

// XCOPY
// This command is used to copy files and directory trees from one disk to another disk.
// Syntax is XCOPY   source   [destination]   [/A | /M]   [/D[:date]]   [/P]   [/S [/E]]   [/V]   [/W]   [/C]   [/I]   [/Q]   [/F]   [/L]   [/G]   [/H]   [/R]   [/T]   [/U]  [/K]   [/N]  [/O]   [/X]   [/Y]   [/-Y]   [/Z]  [/EXCLUDE:file1[+file2][+file3]…]

// LABEL
// It is used to create, change, or delete the volume label of a disk.
// Syntax is LABEL    [drive:]  [label]
// LABEL  [/MP]   [volume]   [label]

// Here, [drive:] is for secifying the drive letter of a drive to be labelled and [label] specifies the label of the volume disk. [/MP] is used to specify that the volume should be created as a mount point and [volume] is used to specify volume name, usually mentioned after drive letter followed by colon and then giving volume name required.

// DISKCOPY
// This command copies the contents of one floppy from the source drive to a formatted or un-formatted floppy disk in the destination drive. This command copies the data from particular position on the source disk to exactly the same position on the destination disk. Syntax Diskcopy  A:  B:
// copies contents of A: to B: drive. This command can be used with /V switch which verifies that the disk is copied correctly.

// CHKDSK
// This command is used to check a disk and display a status report with properties of disk like serial number, volume label, memory and other properties along with errors on the disk if any.
// Syntax is CHKDSK   [volume path]   [/F]   [/V]   [/R]   [/X]   [/I]   [/C]   [/L[:size]]

// [volume path] is where you specify the drive letter followed by a colon and volume name to be checked. using /F switch allows you to fix errors on the disk. /V display full path and/or cleanup message if any. /R is used in tandem with /F and used to locate bad sectors and recover readable information. If you wanted to perform a less vigorous check of index entries on the disk then the right option is to use /I or /C rather then /R as they skip checking of cycles on the volume and helps in reducing the amount of time required to run chkdsk. Using /X forces the volume to dismount first before checking is performed. /L:size is all about specifying the log file size in kilobytes.

// TREE
// This command is very useful to view the list of directories and subdirectories present on the disk in graphical form. If you wanted to include files also with directories and subdirectories, then you’ll have to give the command line as tree/f which presents the tree view of all the content on your disk. Here is the syntax for this command with allowed switches:
// TREE   [drive:path]  [/F]  [/A]
// In case you wanted use ASCII instead of extended characters, then go ahead include /A in the command line.

// DELTREE
// This command is used to remove a directory along with its contents.
// Syntax is deltree [drive:path]
// here, [drive:path] specifies the directory name to be deleted. All the subdirectories and files in this directory will be deleted without prompt and there’s not getting back. So, keep caution while using this command.

// DOSKEY
// This command is generally used to edits command lines and recalls commands.
// Syntax is DOSKEY  [/REINSTALL]  [/HISTORY] [text]

// Here, /REINSTALL installs new copy of doskey, /HISTORY is used to display all previously given commands stored in memory. And [text] specifies the commands you want to record.

// FIND
// This command searches for a specific text string in a file or files. Syntax is FIND   [/V]  [/C]  [/N]  [/I]  [/OFF]  “string” [[drive:][path]filename[ …]]

// The basic essential elements in the command line for find are – the string enclosed in ” ” and [[drive:][path]filename(s)]. String specifies the text string to find in the file and [[drive:][path]filename(s)] specifies the file or files where the text string search is to be done. If a path is not specified, FIND searches the text typed at the prompt or piped from another command. When you append /OFF in the command line, it searches and finds even those files with offline attribute set. Apart from searching the text string, this command is useful in:

// Displaying all lines not containing the specified string @ /V
// Displaying only the number count of lines containing the text string @ /C
// Displaying line numbers with the displayed lines @ /N
// SORT
// This command is used to arrange the data of a file in alphabetical order (A-Z, 0-9) or reverse alphabetical order.

// Syntax is SORT   [/R]   [[drive1:][path1]filename1]   [/T [drive2:][path2]]  [/O [drive3:][path3]filename3]

// /R in command line reverses the sort order; that is, the data of the specified file sorts sorts Z to A, then 9 to 0. [drive1:][path1]filename1 specifies the file to be sorted. /T [drive2:][path2] is used in cases of data overflow in main memory and it specifies the path of the directory to hold the sort’s working storage. And /O [drive3:][path3]filename3 specifies the file where the sorted input is to be stored.

// FORMAT
// This command creates a new root directory and a File Allocation Table (FAT) for the disk. In order for MS-DOS to be able to use a new disk you must use this command to format the disk.

// FORMAT with /S switch
// When the disk is formatted with /s option, the disk can be used as a booting disk. C:>DOS>Format A: /s
// The above command copies the OS files MSDOS.SYS, IO.SYS and COMMAND.COM which are required for booting the machine from your system startup drive to the newly formatted disk. The disk can then be used for booting.

// FORMAT with /U switch
// Here’s the command C:DOS>Format A: /U
// This command specifies an Unconditional Format which destroys all existing data and prevents you from later unformatting the disk.

// FORMAT with /Q switch
// This can be used only with the previously formatted disk. This deletes FAT, Root directory and data of disk but doesn’t scan for the bad errors. This is generally used for Quick formatting.
// Warning As Format command deletes all existing data, use this command with extreme caution. Any disk formatted (except with /U switch) may be later unformatted using the UNFORMAT command.

// BACKUP
// The Backup command backs up one or more files from one disk to another. You can backup files onto either a hard disk or on a floppy disk. Syntax is
// BACKUP   Source   Destination

// Here source specifies the location of files to be backed up and destination drive specifies the drive on which you want to store the backup files. The backed-up files are stored in backup.nnn and control.nnn files where nnn represents the backup disk number.

// Backup with Switches
// The /S switch can be used to backup the contents of all files in the source including the contents of sub-directories.
// The /N switch can be used to backup only those files that have changed since the last backup.
// Backup command with /D:mm-dd-yyyy switch will backup files that have changed since the data specified.
// RESTORE
// The RESTORE command restores files that were backed up by using BACKUP command. Syntax: RESTORE   drive1  drive2:path
// Here drive1 specifies the drive on which backup files are stored.
// drive2:path specifies the path to which those backup files will be restored.
// ► Using backup command with /S switch is used to restore all backup files to their original directories and sub-directories